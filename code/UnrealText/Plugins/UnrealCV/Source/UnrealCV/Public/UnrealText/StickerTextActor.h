// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Core.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h" // add ProceduralMeshComponent to [name].Build.cs
#include "Components/DecalComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformMath.h"
#include "stdlib.h"
#include "random"
#include "StickerTextActor.generated.h"

UCLASS()
class UNREALCV_API AStickerTextActor : public AActor
{
    GENERATED_BODY()
    
public: 
    // Sets default values for this actor's properties
    AStickerTextActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public: 
    // Called every frame
    virtual void Tick(float DeltaTime) override;

// ===== ===== ===== ===== text actor members and methods ===== ===== ===== ===== 

    // low level CG data
    UPROPERTY(VisibleAnywhere)
    UProceduralMeshComponent* mesh;
    TArray<FVector> vertices;
    TArray<int32> triangles;
    TArray<FVector2D> uvs; // for the texture

    UPROPERTY(EditAnywhere)
    FString DefaultTextPngFilePath;

    UPROPERTY(EditAnywhere)
    FString MaterialAssetFilePath;

    // text-instance level data
    // location&rotation are bound to RootComponent
    // use RootComponent->SetWorldLocation/SetWorldRotation/SetWorldLocationAndRotation to modify
    // use GetActorLocation/GetActorRotation to retrieve

    UPROPERTY(EditAnywhere)
    int32 MeshDensityMultiplier;
    UPROPERTY(EditAnywhere)
    int32 MeshDensityX; // mesh density in the horizonal direction 
    UPROPERTY(EditAnywhere)
    int32 MeshDensityY; // mesh density in the vertical direction
    UPROPERTY(EditAnywhere)
    FVector ULPosition; // world space location for upper-left corner
    UPROPERTY(EditAnywhere)
    FVector URPosition; // world space location for upper-right corner
    UPROPERTY(EditAnywhere)
    FVector BRPosition; // world space location for bottom-right corner
    UPROPERTY(EditAnywhere)
    FVector BLPosition; // world space location for bottom-left corner

    // text materials
    UPROPERTY(EditAnywhere)
    FLinearColor EmissiveColor; // should be larger than 1 to glow
    UPROPERTY(EditAnywhere)
    float ParamSpecular; 
    UPROPERTY(EditAnywhere)
    float ParamMetallic; 
    UPROPERTY(EditAnywhere)
    float ParamRoughness;
    
    // text instance data
    // ratio, computed as mesh coordinate UVs
    // currently not usedful...
    UTexture2D *StickerImg;

    // Method: loading text png as textures
    // load StickerImg, and assign it to the text material object
    virtual void LoadTextPng(FString TextFilePath);
    // load png files as UTexture2D objects
    UTexture2D* LoadTexture2D(const FString Path, bool& IsValid, int32& OutWidth, int32& OutHeight);
    // create a rectangular triangle mesh
    virtual bool CreateRectTriangle(FVector& UL_Point, FVector& UR_Point, FVector& BR_Point, FVector& BL_Point, int32& DensityX, int32& DensityY);
    virtual void ClearMeshData();
    
    // methods and members related to adjusting quadrilaterals
    FCollisionQueryParams TraceParams;
    UPROPERTY(EditAnywhere)
    float OrthogonalCosineThreshold;
    UPROPERTY(EditAnywhere)
    float OrthogonalDegreeThreshold;
    UPROPERTY(EditAnywhere)
    int32 MaximumShrinkTrialNumber;
    UPROPERTY(EditAnywhere)
    float ShrinkRatio;
    UPROPERTY(EditAnywhere)
    int32 ShrinkTrialCount;
    UPROPERTY(EditAnywhere)
    float VertexCosine[4];
    UPROPERTY(EditAnywhere)
    float TraceDepth; // used in setting mesh vertexes
    UPROPERTY(EditAnywhere)
    float TraceDepthFar;
    UPROPERTY(EditAnywhere)
    float FloatTraceDepthFar;
    float pi;
    // given the coordinates of quadrilateral
    // return the adjudsted near-retangle
    virtual FVector TraceHitPointLocationComputationFromScreen(float ScreenX, float ScreenY);
    virtual FVector FloatTraceHitPointLocationComputationFromScreen(float ScreenX, float ScreenY);
    virtual void CloseTraceWithHitCheck(bool& isHit, FVector InitLocation, FVector& SurfaceNormal, FVector& Location, float ThicknessRatio);
    virtual void CheckVisibility(bool& isVisible, FVector WorldLoc);
    UPROPERTY(EditAnywhere)
    float UL_X;
    UPROPERTY(EditAnywhere)
    float UL_Y;
    UPROPERTY(EditAnywhere)
    float BR_X;
    UPROPERTY(EditAnywhere)
    float BR_Y;
    UPROPERTY(EditAnywhere)
    float UL_X_shrink;
    UPROPERTY(EditAnywhere)
    float UL_Y_shrink;
    UPROPERTY(EditAnywhere)
    float BR_X_shrink;
    UPROPERTY(EditAnywhere)
    float BR_Y_shrink;
    UPROPERTY(EditAnywhere)
    float Color_R;
    UPROPERTY(EditAnywhere)
    float Color_G;
    UPROPERTY(EditAnywhere)
    float Color_B;
    UPROPERTY(EditAnywhere)
    bool isTickAdjustAndGenMesh;
    UPROPERTY(EditAnywhere)
    bool isBoxValid;
    UPROPERTY(EditAnywhere)
    int32 SanityCheckDensity;
    UPROPERTY(EditAnywhere)
    float CloseTraceThickness;
    UPROPERTY(EditAnywhere)
    float CloseTraceThickness_LB;
    UPROPERTY(EditAnywhere)
    int32 StepDen;
    UPROPERTY(EditAnywhere)
    bool isTriangulationFinished;
    UPROPERTY(EditAnywhere)
    FVector triCenterNormal;
    UPROPERTY(EditAnywhere)
    FVector boxCenterNormal;
    UPROPERTY(EditAnywhere)
    FVector boxVerCenterNormal;
    UPROPERTY(EditAnywhere)
    FVector boxHorCenterNormal;
    UPROPERTY(EditAnywhere)
    float VerStepSize;
    UPROPERTY(EditAnywhere)
    float HorStepSize;
    UPROPERTY(EditAnywhere)
    float ExpandRatio;
    UPROPERTY(EditAnywhere)
    float SanityCheckRange;
    UPROPERTY(EditAnywhere)
    bool isProcessed;
    UPROPERTY(EditAnywhere)
    float MaxAspectRatio; // ver / hor
    UPROPERTY(EditAnywhere)
    float SanityCheckThreshold;
    UPROPERTY(EditAnywhere)
    float RenderThickness;
    UPROPERTY(EditAnywhere)
    float VisThreshold;
    UPROPERTY(EditAnywhere)
    float roughness;
    
    // random
    std::default_random_engine generator;
    std::normal_distribution<float> normal_dist;


    // new unreal text core methods
    virtual void BoxSanityCheck();

    // UnrealCV interface APIs
    virtual void Handle_SetAttr(float UL_X_, float UL_Y_, 
                                float BR_X_, float BR_Y_,
                                float R_, float G_, float B_,
                                float Spe, float Met, float Rou);
    virtual void Handle_AdjustBox();
    virtual void Handle_FailedBox();
    virtual void Handle_ResizeAndGenerateMesh(float TargetAspectRatio); // AR = width / height
    virtual void Handle_LoadTextFromPngPath();
    virtual void Handle_LoadTextFromPngPath(FString FilePath);
    virtual void Handle_GetCornerCoor(FVector2D &ULScreenPosition, FVector2D &URScreenPosition, FVector2D &BRScreenPosition, FVector2D &BLScreenPosition);
};
