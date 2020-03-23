// Fill out your copyright notice in the Description page of Project Settings.

#include "StickerTextActor.h"
#include "Math/Vector.h"
#include "IImageWrapper.h"
#include "IImageWrapperModule.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"

// Sets default values
AStickerTextActor::AStickerTextActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    mesh = CreateDefaultSubobject<UProceduralMeshComponent>(TEXT("TextMesh"));
    RootComponent = mesh;
    DefaultTextPngFilePath = "/Game/UnrealText/default.png";
    MaterialAssetFilePath = "/Game/UnrealText/UnrealTextTexture.UnrealTextTexture";
    MeshDensityX = 50;
    MeshDensityY = 50;
    MeshDensityMultiplier = 4;

    // setting light tracer
    TraceParams = FCollisionQueryParams(FName(TEXT("TraceUsableActor")), true, this);
    TraceParams.bReturnPhysicalMaterial = false;
    TraceParams.bTraceComplex = true;
    TraceParams.bReturnFaceIndex = true;

    // adjustment threshold
    // threshold and parameters
    MaximumShrinkTrialNumber = 120;
    OrthogonalDegreeThreshold = 2.0f;
    ShrinkRatio = 0.98;
    pi = 3.141592653589793;
    ShrinkTrialCount = 0;
    float TempSinAngle;
    FMath::SinCos(&TempSinAngle, &OrthogonalCosineThreshold, (90.0f-OrthogonalDegreeThreshold) / 180.0f * pi);
    TraceDepth = 1000.0f;
    TraceDepthFar = 6000.0f;
    FloatTraceDepthFar = 50.f;

    // text param
    EmissiveColor = FLinearColor(0.0f, 0.0f, 0.0f, 1.0f);
    ParamSpecular = 0.0f;
    ParamMetallic = 0.0f;
    ParamRoughness = 0.0f;

    isTickAdjustAndGenMesh = false;
    isBoxValid = false;
    isProcessed = false;
    SanityCheckDensity = 15;
    CloseTraceThickness = 3.0f;
    CloseTraceThickness_LB = 0.2f;
    StepDen = 2;
    ExpandRatio = 30.0f;
    isTriangulationFinished = false;
    MaxAspectRatio = 10.0f;
    SanityCheckRange = 1.0f / (StepDen + 2);
    SanityCheckThreshold = 0.95f;
    RenderThickness = 5.0f;
    VisThreshold = 3.0f;
    roughness = 0.1f;

    // random number generator 
    normal_dist = std::normal_distribution<float>(0.0f, 1.0f);
}

// Called when the game starts or when spawned
void AStickerTextActor::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void AStickerTextActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    if (isTickAdjustAndGenMesh)
    {
        isTickAdjustAndGenMesh = false;
        isTriangulationFinished = false;
        isBoxValid = true;
        BoxSanityCheck();
        if (isBoxValid)
        {
            MeshDensityMultiplier = 4;
            Handle_AdjustBox();
        }
        else
        {
            MeshDensityMultiplier = 1;
            Handle_FailedBox();
        }
        Handle_ResizeAndGenerateMesh(-1.0f);
        
    }
}

IImageWrapperPtr GetImageWrapperByExtention(const FString InImagePath)
{
    IImageWrapperModule& ImageWrapperModule = FModuleManager::LoadModuleChecked<IImageWrapperModule>(FName("ImageWrapper"));
    if (InImagePath.EndsWith(".png"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::PNG);
    }
    else if (InImagePath.EndsWith(".jpg") || InImagePath.EndsWith(".jpeg"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::JPEG);
    }
    else if (InImagePath.EndsWith(".bmp"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::BMP);
    }
    else if (InImagePath.EndsWith(".ico"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICO);

    }
    else if (InImagePath.EndsWith("exr"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::EXR);
    }
    else if (InImagePath.EndsWith(".icns"))
    {
        return ImageWrapperModule.CreateImageWrapper(EImageFormat::ICNS);
    }
    return nullptr;
}

UTexture2D* AStickerTextActor::LoadTexture2D(const FString Path, bool& IsValid, int32& OutWidth, int32& OutHeight)
{
    UTexture2D* Texture = nullptr;
    IsValid = false;
    if (!FPlatformFileManager::Get().GetPlatformFile().FileExists(*Path))
    {
        UE_LOG(LogTemp, Warning, TEXT("File not exists"));
        return nullptr;
    }
    TArray<uint8> RawFileData;
    if (!FFileHelper::LoadFileToArray(RawFileData, *Path))
    {
        UE_LOG(LogTemp, Warning, TEXT("Failed to load file to array"));
        return nullptr;
    }
    IImageWrapperPtr ImageWrapper = GetImageWrapperByExtention(Path);
    if (ImageWrapper.IsValid() && ImageWrapper->SetCompressed(RawFileData.GetData(), RawFileData.Num()))
    {
        UE_LOG(LogTemp, Warning, TEXT("File Valid"));
        const TArray<uint8>* UncompressedRGBA = nullptr;
        if (ImageWrapper->GetRaw(ERGBFormat::RGBA, 8, UncompressedRGBA))
        {
            UE_LOG(LogTemp, Warning, TEXT("Raw gotten"));
            Texture = UTexture2D::CreateTransient(ImageWrapper->GetWidth(), ImageWrapper->GetHeight(), PF_R8G8B8A8);
            if (Texture != nullptr)
            {
                UE_LOG(LogTemp, Warning, TEXT("Texture Valid"));
                IsValid = true;
                OutWidth = ImageWrapper->GetWidth();
                OutHeight = ImageWrapper->GetHeight();
                void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
                FMemory::Memcpy(TextureData, UncompressedRGBA->GetData(), UncompressedRGBA->Num());
                Texture->PlatformData->Mips[0].BulkData.Unlock();
                Texture->UpdateResource();
            }
        }
    }
    return Texture;
}

bool AStickerTextActor::CreateRectTriangle(FVector& UL_Point, 
                                        FVector& UR_Point, 
                                        FVector& BR_Point, 
                                        FVector& BL_Point, 
                                        int32& DensityX,
                                        int32& DensityY)
{
    UE_LOG(LogTemp, Warning, TEXT("Start the triangulation"));
    ClearMeshData();
    // spatial coordinates
    int32 MeshSizeX = DensityX + 1;
    int32 MeshSizeY = DensityY + 1;
    // texture coordinates
    float UVSpacingY = 1.0f / ((float)DensityY);
    float UVSpacingX = 1.0f / ((float)DensityX);
    triCenterNormal = FVector::CrossProduct(
            BRPosition-ULPosition,
            BLPosition-URPosition).GetUnsafeNormal();

    FHitResult Hit(ForceInit);

    TArray<FVector> temp_vertices;
    TArray<FVector2D> temp_uvs;

    UE_LOG(LogTemp, Warning, TEXT("Start to generate low-resolution grid"));
    for (int32 y=0; y<MeshSizeY; y++)
    {
        for (int32 x=0; x<MeshSizeX; x++)
        {

            float xRelative = x * UVSpacingX;
            float yRelative = y * UVSpacingY;
            FVector UpperEdge = UL_Point + (UR_Point - UL_Point) * xRelative;
            FVector BottomEdge = BL_Point + (BR_Point - BL_Point) * xRelative;
            FVector CoarsePosition = UpperEdge + (BottomEdge - UpperEdge) * yRelative;
            bool hitflag;
            FVector elementLocation;
            CloseTraceWithHitCheck(hitflag, CoarsePosition, triCenterNormal, elementLocation, RenderThickness);

            temp_vertices.Add(elementLocation - UL_Point + triCenterNormal * 0.2f);
            temp_uvs.Add(FVector2D(x * UVSpacingX, y * UVSpacingY));
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("Start to generate high-resolution grid"));

    for (int32 y=0; y<DensityY * MeshDensityMultiplier; y++)
    {
     for (int32 x=0; x<DensityX * MeshDensityMultiplier; x++)
     {
         int32 x_div = x / MeshDensityMultiplier;
         int32 y_div = y / MeshDensityMultiplier;
         int32 x_modulo = x % MeshDensityMultiplier;
         int32 y_modulo = y % MeshDensityMultiplier;
         FVector Base_ul = temp_vertices[x_div + y_div * MeshSizeX];
         FVector Base_ur = temp_vertices[x_div + 1 + y_div * MeshSizeX];
         FVector Base_bl = temp_vertices[x_div + (y_div + 1) * MeshSizeX];
         FVector InterpolatedTime = Base_ul + 
                                    (Base_ur - Base_ul) * x_modulo / MeshDensityMultiplier +
                                    (Base_bl - Base_ul) * y_modulo / MeshDensityMultiplier;

         vertices.Add(InterpolatedTime);
         FVector2D Base_ul_uv = temp_uvs[x_div + y_div * MeshSizeX];
         FVector2D Base_ur_uv = temp_uvs[x_div + 1 + y_div * MeshSizeX];
         FVector2D Base_bl_uv = temp_uvs[x_div + (y_div + 1) * MeshSizeX];
         uvs.Add(Base_ul_uv + 
                  (Base_ur_uv - Base_ul_uv) * x_modulo / MeshDensityMultiplier +
                  (Base_bl_uv - Base_ul_uv) * y_modulo / MeshDensityMultiplier );
     }
    }
    MeshSizeX = DensityX * MeshDensityMultiplier;
    MeshSizeY = DensityY * MeshDensityMultiplier;
    // triangle number per column/row = Density
    UE_LOG(LogTemp, Warning, TEXT("Start to form triangles"));
    for (int32 y=0; y<DensityY * MeshDensityMultiplier - 1; y++)
    {
        for (int32 x=0; x<DensityX * MeshDensityMultiplier - 1; x++)
        {

            // triangle 1
            triangles.Add(x + y * MeshSizeX);
            triangles.Add(x + (y + 1) * MeshSizeX);
            triangles.Add(x + (y + 1) * MeshSizeX + 1);
            // triangle 2
            triangles.Add(x + y * MeshSizeX);
            triangles.Add(x + (y + 1) * MeshSizeX + 1);
            triangles.Add(x + y * MeshSizeX + 1);
        }
    }

    mesh->CreateMeshSection(0, vertices, triangles, TArray<FVector>(), uvs, TArray<FColor>(), TArray<FProcMeshTangent>(), false);
    mesh->SetAllPhysicsPosition(UL_Point);
    UE_LOG(LogTemp, Warning, TEXT("Triangulation finished"));
    return true;
}

void AStickerTextActor::ClearMeshData()
{
    vertices.Empty();
    triangles.Empty();
    uvs.Empty();
}

void AStickerTextActor::LoadTextPng(FString TextFilePath)
{

    static UMaterialInterface* TemplateMaterial = Cast<UMaterialInterface>(StaticLoadObject(UMaterialInterface::StaticClass(), nullptr, *(MaterialAssetFilePath)));
    if (TemplateMaterial == nullptr) {
        UE_LOG(LogTemp, Warning, TEXT(" Material Asset Template Loading Failed."));
    }

    UMaterialInstanceDynamic* MaterialInstance = UMaterialInstanceDynamic::Create(TemplateMaterial, nullptr);
    
    bool isValid;
    int32 textW, textH;
    // the text png should contain the alpha channel.
    StickerImg = this->LoadTexture2D(TextFilePath, isValid, textW, textH);
    if (!isValid||(StickerImg==nullptr)||(textW<10)||(textH<10)){
        UE_LOG(LogTemp, Warning, TEXT(" Text Image Loading Failed."));
    }

    MaterialInstance->SetTextureParameterValue(FName("Content"), StickerImg);
    MaterialInstance->SetVectorParameterValue(FName("EmissiveColor"), EmissiveColor);
    MaterialInstance->SetScalarParameterValue(FName("MetallicValue"), ParamMetallic);
    MaterialInstance->SetScalarParameterValue(FName("SpecularValue"), ParamSpecular);
    MaterialInstance->SetScalarParameterValue(FName("RoughnessValue"), ParamRoughness);

    mesh->SetMaterial(0, MaterialInstance);
    UE_LOG(LogTemp, Warning, TEXT("Text Instance Loaded."));

}

FVector AStickerTextActor::TraceHitPointLocationComputationFromScreen(float ScreenX,
                                                            float ScreenY)
{
    bool HitFlag;
    FVector WorldPosition = FVector(0.0f, 0.0f, 0.0f);
    FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);
    FHitResult HitResult;
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldPosition, WorldDirection);
    HitFlag = GetWorld()->LineTraceSingleByChannel(HitResult, WorldPosition, WorldPosition + WorldDirection * TraceDepthFar, ECC_Visibility, TraceParams);
    return FVector(HitResult.Location);
}

void AStickerTextActor::CheckVisibility(bool& isVisible, FVector WorldLoc)
{

    int32 ScreenWidth = 0;
    int32 ScreenHeight = 0;
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetViewportSize(ScreenWidth, ScreenHeight);
    FVector2D ScreenCoor;
    bool success = UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(WorldLoc, ScreenCoor, true);
    if (!success){
        isVisible = false;
        UE_LOG(LogTemp, Warning, TEXT("Failed to project to screen."));
        return;
    }
    int32 ScreenX = (int32)ScreenCoor[0];
    int32 ScreenY = (int32)ScreenCoor[1];

    if (!(ScreenX >= 0 && ScreenY >= 0 && ScreenX < ScreenWidth && ScreenY < ScreenHeight)){
        isVisible = false;
        UE_LOG(LogTemp, Warning, TEXT("Out of screen."));
        return;
    }

    bool HitFlag;
    FVector WorldPosition = FVector(0.0f, 0.0f, 0.0f);
    FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);

    FHitResult HitResult;
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldPosition, WorldDirection);
    HitFlag = GetWorld()->LineTraceSingleByChannel(HitResult, WorldPosition, WorldLoc + WorldDirection * 100.0f, ECC_Visibility, TraceParams);

    FVector hitloc(HitResult.Location);

    if ((hitloc-WorldLoc).Size() > VisThreshold){
        isVisible = false;
        UE_LOG(LogTemp, Warning, TEXT("Not hit"));
        UE_LOG(LogTemp, Warning, TEXT("hitloc  : %f %f %f"), hitloc[0], hitloc[1], hitloc[2]);
        UE_LOG(LogTemp, Warning, TEXT("WorldPos: %f %f %f"), WorldPosition[0], WorldPosition[1], WorldPosition[2]);
        UE_LOG(LogTemp, Warning, TEXT("Test Loc: %f %f %f"), WorldLoc[0], WorldLoc[1], WorldLoc[2]);
        UE_LOG(LogTemp, Warning, TEXT("size:     %f"), (hitloc-WorldLoc).Size());
        return;
    }
    isVisible = true;
}

FVector AStickerTextActor::FloatTraceHitPointLocationComputationFromScreen(float ScreenX,
                                                            float ScreenY)
{
    bool HitFlag;
    FVector WorldPosition = FVector(0.0f, 0.0f, 0.0f);
    FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectScreenPositionToWorld(ScreenX, ScreenY, WorldPosition, WorldDirection);
    return WorldPosition + WorldDirection * FloatTraceDepthFar;
}

void AStickerTextActor::CloseTraceWithHitCheck(bool& isHit,
                                            FVector InitLocation,
                                            FVector& SurfaceNormal,
                                            FVector& Location, 
                                            float ThicknessRatio=1.0f)
{
    FHitResult HitResult;
    float step = (CloseTraceThickness * ThicknessRatio - CloseTraceThickness_LB) / 5.0f;
    for(float thickness=CloseTraceThickness * ThicknessRatio;thickness > CloseTraceThickness_LB;thickness-=step)
    {
        isHit = GetWorld()->LineTraceSingleByChannel(
                        HitResult, 
                        InitLocation + thickness * SurfaceNormal, 
                        InitLocation - thickness * SurfaceNormal, 
                        ECC_Visibility, 
                        TraceParams);
        if (isHit)
        {
            Location = HitResult.Location;
            return;
        }
    }

    Location = InitLocation;
    
    
}

void AStickerTextActor::Handle_ResizeAndGenerateMesh(float TargetAspectRatio)
{
    UE_LOG(LogTemp, Warning, TEXT("Start to generate new mesh ... "));
    if (TargetAspectRatio > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("Start to resize the mesh"));
        FVector VerticalSide = BLPosition - ULPosition;
        FVector HorizontalSide = URPosition - ULPosition;
        float CurrentAspectRatio = HorizontalSide.Size() / VerticalSide.Size();
        if (CurrentAspectRatio > TargetAspectRatio)
        {  // should shorten width
            URPosition = ULPosition + VerticalSide.Size() * TargetAspectRatio * (HorizontalSide / HorizontalSide.Size());
            HorizontalSide = BRPosition - BLPosition;
            BRPosition = BLPosition + VerticalSide.Size() * TargetAspectRatio * (HorizontalSide / HorizontalSide.Size());
        }
        else
        {  // should shorten height
            BLPosition = ULPosition + HorizontalSide.Size() / TargetAspectRatio * (VerticalSide / VerticalSide.Size());
            VerticalSide = BRPosition - URPosition;
            BRPosition = URPosition + HorizontalSide.Size() / TargetAspectRatio * (VerticalSide / VerticalSide.Size());
        }
        UE_LOG(LogTemp, Warning, TEXT("mesh resized"));
    }
    
    mesh->ClearAllMeshSections();
    isTriangulationFinished = CreateRectTriangle(ULPosition, URPosition, BRPosition, BLPosition, MeshDensityX, MeshDensityY);
    isProcessed = true;
}

void AStickerTextActor::Handle_LoadTextFromPngPath()
{
    LoadTextPng(DefaultTextPngFilePath);
}

void AStickerTextActor::Handle_LoadTextFromPngPath(FString FilePath)
{
    LoadTextPng(FilePath);
}

void AStickerTextActor::Handle_GetCornerCoor(FVector2D &ULScreenPosition, FVector2D &URScreenPosition, FVector2D &BRScreenPosition, FVector2D &BLScreenPosition)
{
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(ULPosition, ULScreenPosition);
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(URPosition, URScreenPosition);
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(BRPosition, BRScreenPosition);
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->ProjectWorldLocationToScreen(BLPosition, BLScreenPosition);
}

void AStickerTextActor::Handle_SetAttr(float UL_X_, float UL_Y_, 
                                    float BR_X_, float BR_Y_,
                                    float R_, float G_, float B_,
                                    float Spe, float Met, float Rou)
{
    UL_X = UL_X_;
    UL_Y = UL_Y_;
    BR_X = BR_X_;
    BR_Y = BR_Y_;
    Color_R = R_;
    Color_G = G_;
    Color_B = B_;
    // set emissive
    EmissiveColor = FLinearColor(Color_R, Color_G, Color_B, 1.0f);
    // set materials
    ParamMetallic = Met;
    ParamSpecular = Spe;
    ParamRoughness = Rou;

    isTickAdjustAndGenMesh = true;
    ULPosition *= 0.0f;
    URPosition *= 0.0f;
    BRPosition *= 0.0f;
    BLPosition *= 0.0f;
    isProcessed = false;
}

void AStickerTextActor::BoxSanityCheck()
{
    isBoxValid = true;
    // world space location for upper-left corner
    float center_x = (UL_X + BR_X) / 2.0f;
    float center_y = (UL_Y + BR_Y) / 2.0f;
    UL_X_shrink = center_x + (UL_X - center_x) * SanityCheckRange;
    UL_Y_shrink = center_y + (UL_Y - center_y) * SanityCheckRange;
    BR_X_shrink = center_x + (BR_X - center_x) * SanityCheckRange;
    BR_Y_shrink = center_y + (BR_Y - center_y) * SanityCheckRange;

    // world space location for upper-left corner
    ULPosition = TraceHitPointLocationComputationFromScreen(UL_X_shrink, UL_Y_shrink); 
    // world space location for upper-right corner
    URPosition = TraceHitPointLocationComputationFromScreen(BR_X_shrink, UL_Y_shrink); 
    // world space location for bottom-right corner
    BRPosition = TraceHitPointLocationComputationFromScreen(BR_X_shrink, BR_Y_shrink); 
    // world space location for bottom-left corner
    BLPosition = TraceHitPointLocationComputationFromScreen(UL_X_shrink, BR_Y_shrink); 

    FVector UR2UL = ULPosition - URPosition;
    FVector UR2BR = BRPosition - URPosition;
    FVector Normal_UL_UR_BR = FVector::CrossProduct(UR2BR, UR2UL).GetUnsafeNormal();
    UE_LOG(LogTemp, Warning, TEXT("Sanity check starts.."));
    for (float x_ratio=0.2;x_ratio<0.8;x_ratio+=0.6f/SanityCheckDensity)
    {
        for (float y_ratio=0.2;y_ratio<0.8;y_ratio+=.6f/SanityCheckDensity)
            {
                FVector2D CheckPointScreen = FVector2D(UL_X_shrink + (BR_X_shrink - UL_X_shrink) * x_ratio,
                                                 UL_Y_shrink + (BR_Y_shrink - UL_Y_shrink) * y_ratio);
                FVector CheckPointWorld = TraceHitPointLocationComputationFromScreen(CheckPointScreen[0], CheckPointScreen[1]); 
                FVector CheckNormal_X = FVector::CrossProduct(CheckPointWorld-ULPosition,
                                                            CheckPointWorld-URPosition).GetUnsafeNormal();
                FVector CheckNormal_Y = FVector::CrossProduct(CheckPointWorld-BLPosition,
                                                            CheckPointWorld-ULPosition).GetUnsafeNormal();
                if ((!FVector::Parallel(Normal_UL_UR_BR, CheckNormal_X, SanityCheckThreshold))||(!FVector::Parallel(Normal_UL_UR_BR, CheckNormal_Y, SanityCheckThreshold)))
                {
                    UE_LOG(LogTemp, Warning, TEXT("ULPosition: %f %f %f"), ULPosition[0], ULPosition[1], ULPosition[2]);
                    UE_LOG(LogTemp, Warning, TEXT("URPosition: %f %f %f"), URPosition[0], URPosition[1], URPosition[2]);
                    UE_LOG(LogTemp, Warning, TEXT("BRPosition: %f %f %f"), BRPosition[0], BRPosition[1], BRPosition[2]);
                    UE_LOG(LogTemp, Warning, TEXT("BLPosition: %f %f %f"), BLPosition[0], BLPosition[1], BLPosition[2]);
                    UE_LOG(LogTemp, Warning, TEXT("UR2UL: %f %f %f"), UR2UL[0], UR2UL[1], UR2UL[2]);
                    UE_LOG(LogTemp, Warning, TEXT("UR2BR: %f %f %f"), UR2BR[0], UR2BR[1], UR2BR[2]);
                    UE_LOG(LogTemp, Warning, TEXT("CheckPointWorld: %f %f %f"), CheckPointWorld[0], CheckPointWorld[1], CheckPointWorld[2]);
                    UE_LOG(LogTemp, Warning, TEXT("Normal center: %f %f %f"), Normal_UL_UR_BR[0], Normal_UL_UR_BR[1], Normal_UL_UR_BR[2]);
                    UE_LOG(LogTemp, Warning, TEXT("Normal 1: %f %f %f"), CheckNormal_X[0], CheckNormal_X[1], CheckNormal_X[2]);
                    UE_LOG(LogTemp, Warning, TEXT("Normal 2: %f %f %f"), CheckNormal_Y[0], CheckNormal_Y[1], CheckNormal_Y[2]);
                    UE_LOG(LogTemp, Warning, TEXT("Bad location, abort"));
                    isBoxValid = false;
                    break;
                }

            }
        if (!isBoxValid)
        {
            break;
        }
    }
    if (isBoxValid)
    {
        UE_LOG(LogTemp, Warning, TEXT("Sanity check finished successfully!"));
    }
    else{
        UE_LOG(LogTemp, Warning, TEXT("Sanity check failed!"));
    }
    
}

void AStickerTextActor::Handle_FailedBox()
{
    UE_LOG(LogTemp, Warning, TEXT("Handling failed boxes"));
    // world space location for upper-left corner
    ULPosition = FloatTraceHitPointLocationComputationFromScreen(UL_X, UL_Y); 
    // world space location for upper-right corner
    URPosition = FloatTraceHitPointLocationComputationFromScreen(BR_X, UL_Y); 
    // world space location for bottom-right corner
    BRPosition = FloatTraceHitPointLocationComputationFromScreen(BR_X, BR_Y); 
    // world space location for bottom-left corner
    BLPosition = FloatTraceHitPointLocationComputationFromScreen(UL_X, BR_Y); 
}

void AStickerTextActor::Handle_AdjustBox()
{
    // Step 0: get original corner world location
    // world space location for upper-left corner
    ULPosition = TraceHitPointLocationComputationFromScreen(UL_X_shrink, UL_Y_shrink); 
    // world space location for upper-right corner
    URPosition = TraceHitPointLocationComputationFromScreen(BR_X_shrink, UL_Y_shrink); 
    // world space location for bottom-right corner
    BRPosition = TraceHitPointLocationComputationFromScreen(BR_X_shrink, BR_Y_shrink); 
    // world space location for bottom-left corner
    BLPosition = TraceHitPointLocationComputationFromScreen(UL_X_shrink, BR_Y_shrink); 

    // Step 1: get center point and normal
    FVector2D CenterPoint_Screen = FVector2D((UL_X + BR_X) / 2,
                                            (UL_Y + BR_Y) / 2);
    FVector CenterPoint_World = TraceHitPointLocationComputationFromScreen(
                                            CenterPoint_Screen[0], 
                                            CenterPoint_Screen[1]); 
    FVector CenterNormal = FVector::CrossProduct(
            BRPosition-ULPosition,
            BLPosition-URPosition).GetUnsafeNormal();
    boxCenterNormal = CenterNormal;

    // step 2: get vertical and horizontal direction
    FVector VerDir_raw = FVector(CenterNormal[0], 
                                 CenterNormal[1], 
                                0.0f);
    float nominator = FMath::Square(CenterNormal[0]) + FMath::Square(CenterNormal[1]);
    if (CenterNormal[2]<0.0001f)
    {
        VerDir_raw[2] = - 50000.0f;
    }
    else
    {
        if ((FGenericPlatformMath::Abs(CenterNormal[0]) < 0.01f) && (FGenericPlatformMath::Abs(CenterNormal[1]) < 0.01f))
        {
            UE_LOG(LogTemp, Warning, TEXT("Perpendicular to ground, adjust by heuristics"));
            VerDir_raw = (BLPosition + BRPosition) / 2.0f - (ULPosition + URPosition) / 2.0f;
        }
        else
        {
            VerDir_raw[2] = - nominator / CenterNormal[2];
        }
    }
    
    
    FVector VerDir = VerDir_raw.GetUnsafeNormal();
    boxVerCenterNormal = VerDir;
    FVector HorDir = FVector::CrossProduct(CenterNormal,VerDir).GetUnsafeNormal();
    boxHorCenterNormal = HorDir;

    // Step 3: get a heuristic step size

    VerStepSize = FMath::Min3(10000.0f,
                                (ULPosition-BLPosition).Size(),
                                (BRPosition-URPosition).Size()) / 2.0f;
    HorStepSize = FMath::Min3((ULPosition-URPosition).Size(),
                                (BRPosition-BLPosition).Size(),
                                10000.0f) / 2.0f;

    // Step 4: Initialize new bounding box
    ULPosition = CenterPoint_World - VerStepSize * VerDir + HorStepSize * HorDir;
    URPosition = CenterPoint_World - VerStepSize * VerDir - HorStepSize * HorDir;
    BLPosition = CenterPoint_World + VerStepSize * VerDir + HorStepSize * HorDir;
    BRPosition = CenterPoint_World + VerStepSize * VerDir - HorStepSize * HorDir;
    
    bool isHit;
    CloseTraceWithHitCheck(isHit, ULPosition * 1.0f, CenterNormal, ULPosition);
    CloseTraceWithHitCheck(isHit, URPosition * 1.0f, CenterNormal, URPosition);
    CloseTraceWithHitCheck(isHit, BLPosition * 1.0f, CenterNormal, BLPosition);
    CloseTraceWithHitCheck(isHit, BRPosition * 1.0f, CenterNormal, BRPosition);

    // Step 5: start to expand
    bool Expandable[4]={true, true, true, true};
    UE_LOG(LogTemp, Warning, TEXT("Start to expand box!"));
    for (int Step=0;Step<(int32)(StepDen * ExpandRatio);Step++)
    {
        // Up
        if (Expandable[0])
        {
            FVector UL_test = ULPosition - VerStepSize * VerDir;
            FVector UR_test = URPosition - VerStepSize * VerDir;
            UE_LOG(LogTemp, Warning, TEXT("before， UL: %f %f %f"), UL_test[0], UL_test[1], UL_test[2]);
            UE_LOG(LogTemp, Warning, TEXT("before， UR: %f %f %f"), UR_test[0], UR_test[1], UR_test[2]);
            bool hit1, hit2;
            CloseTraceWithHitCheck(hit1, UL_test + 0.0f, CenterNormal, UL_test);
            CloseTraceWithHitCheck(hit2, UR_test + 0.0f, CenterNormal, UR_test);
            bool hit1vis, hit2vis;
            CheckVisibility(hit1vis, UL_test);
            CheckVisibility(hit2vis, UR_test);
            if (hit1&&hit2&&hit1vis&&hit2vis)
            {
                ULPosition = UL_test;
                URPosition = UR_test;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to hit"));
                Expandable[0] = false;
            }
        }
        
        // Down
        if (Expandable[1])
        {
            FVector BL_test = BLPosition + VerStepSize * VerDir;
            FVector BR_test = BRPosition + VerStepSize * VerDir;
            UE_LOG(LogTemp, Warning, TEXT("before， BL: %f %f %f"), BL_test[0], BL_test[1], BL_test[2]);
            UE_LOG(LogTemp, Warning, TEXT("before， BR: %f %f %f"), BR_test[0], BR_test[1], BR_test[2]);
            bool hit1, hit2;
            CloseTraceWithHitCheck(hit1, BL_test + 0.0f, CenterNormal, BL_test);
            CloseTraceWithHitCheck(hit2, BR_test + 0.0f, CenterNormal, BR_test);
            bool hit1vis, hit2vis;
            CheckVisibility(hit1vis, BL_test);
            CheckVisibility(hit2vis, BR_test);
            if (hit1&&hit2&&hit1vis&&hit2vis)
            {
                BLPosition = BL_test;
                BRPosition = BR_test;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to hit"));
                Expandable[1] = false;
            }
        }
        // Left
        if (Expandable[2])
        {
            FVector UL_test = ULPosition + HorStepSize * HorDir;
            FVector BL_test = BLPosition + HorStepSize * HorDir;
            UE_LOG(LogTemp, Warning, TEXT("before， UL: %f %f %f"), UL_test[0], UL_test[1], UL_test[2]);
            UE_LOG(LogTemp, Warning, TEXT("before， BL: %f %f %f"), BL_test[0], BL_test[1], BL_test[2]);
            bool hit1, hit2;
            CloseTraceWithHitCheck(hit1, UL_test + 0.0f, CenterNormal, UL_test);
            CloseTraceWithHitCheck(hit2, BL_test + 0.0f, CenterNormal, BL_test);
            bool hit1vis, hit2vis;
            CheckVisibility(hit1vis, UL_test);
            CheckVisibility(hit2vis, BL_test);
            if (hit1&&hit2&&hit1vis&&hit2vis)
            {
                ULPosition = UL_test;
                BLPosition = BL_test;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to hit"));
                Expandable[2] = false;
            }
        }
        // Right
        if (Expandable[3])
        {
            FVector UR_test = URPosition - HorStepSize * HorDir;
            FVector BR_test = BRPosition - HorStepSize * HorDir;
            UE_LOG(LogTemp, Warning, TEXT("before， UR: %f %f %f"), UR_test[0], UR_test[1], UR_test[2]);
            UE_LOG(LogTemp, Warning, TEXT("before， BR: %f %f %f"), BR_test[0], BR_test[1], BR_test[2]);
            bool hit1, hit2;
            CloseTraceWithHitCheck(hit1, UR_test + 0.0f, CenterNormal, UR_test);
            CloseTraceWithHitCheck(hit2, BR_test + 0.0f, CenterNormal, BR_test);
            bool hit1vis, hit2vis;
            CheckVisibility(hit1vis, UR_test);
            CheckVisibility(hit2vis, BR_test);
            if (hit1&&hit2&&hit1vis&&hit2vis)
            {
                URPosition = UR_test;
                BRPosition = BR_test;
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to hit"));
                Expandable[3] = false;
            }
        }
        if (!Expandable[0]&&!Expandable[1]&&!Expandable[2]&&!Expandable[3])
        {
            break;
        }
    }
    // Finish
    UE_LOG(LogTemp, Warning, TEXT("Box Expansion finished!"));
    
    // check aspect ratio, and adjust those that are too narrow
    float VerEdgeSize = FMath::Min3(10000.0f,
                                (ULPosition-BLPosition).Size(),
                                (BRPosition-URPosition).Size());
    float HorEdgeSize = FMath::Min3((ULPosition-URPosition).Size(),
                                (BRPosition-BLPosition).Size(),
                                10000.0f);
    
    if (VerEdgeSize / HorEdgeSize > MaxAspectRatio)
    {
        UE_LOG(LogTemp, Warning, TEXT("Abnormal Aspect Ratio, ver/hor=%f, start to adjust"), VerEdgeSize / HorEdgeSize);
        FVector LeftCenter = (ULPosition + BLPosition) / 2.0f;
        FVector RightCenter = (URPosition + BRPosition) / 2.0f;
        float AdjustedVerEdgeSize = HorEdgeSize * MaxAspectRatio;
        ULPosition = LeftCenter + (ULPosition - LeftCenter).GetSafeNormal() * AdjustedVerEdgeSize / 2;
        BLPosition = LeftCenter + (BLPosition - LeftCenter).GetSafeNormal() * AdjustedVerEdgeSize / 2;
        URPosition = RightCenter + (URPosition - RightCenter).GetSafeNormal() * AdjustedVerEdgeSize / 2;
        BRPosition = RightCenter + (BRPosition - RightCenter).GetSafeNormal() * AdjustedVerEdgeSize / 2;
        UE_LOG(LogTemp, Warning, TEXT("After adjusting aspect, ULPosition: %f %f %f"), ULPosition[0], ULPosition[1], ULPosition[2]);
        UE_LOG(LogTemp, Warning, TEXT("After adjusting aspect, URPosition: %f %f %f"), URPosition[0], URPosition[1], URPosition[2]);
        UE_LOG(LogTemp, Warning, TEXT("After adjusting aspect, BRPosition: %f %f %f"), BRPosition[0], BRPosition[1], BRPosition[2]);
        UE_LOG(LogTemp, Warning, TEXT("After adjusting aspect, BLPosition: %f %f %f"), BLPosition[0], BLPosition[1], BLPosition[2]);
    }


}
