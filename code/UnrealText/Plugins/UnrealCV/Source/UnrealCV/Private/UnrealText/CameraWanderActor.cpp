// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraWanderActor.h"
#include "Runtime/Core/Public/Modules/ModuleManager.h"
#include "UnrealcvServer.h"
// #include "iostream"

UFusionCamSensor* GetCamera()
{

    UFusionCamSensor* FusionSensor = USensorBPLib::GetSensorById(0);
    if (!IsValid(FusionSensor)) 
    {
        FString Msg = TEXT("Invalid sensor id");
        UE_LOG(LogTemp, Warning, TEXT("%s"), *Msg);
        return nullptr;
    }
    UE_LOG(LogTemp, Warning, TEXT("Camera Found"));
    return FusionSensor;
}

// Sets default values
ACameraWanderActor::ACameraWanderActor()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;
    MaxStepSize = 3000;
    MinStepSize = 300;
    WindowsHeight = 720;
    WindowsWidth = 1080;
    pitch_sigma = 30;
    yaw_sigma = 30;
    roll_abs_range = 15;
    MaxStepRatio = 0.75;
    MinStepRatio = 0.25;
    bIsUseNormal = true;

    // get camera
    TraceParams = FCollisionQueryParams(FName(TEXT("TraceUsableActor")), true, this);
    TraceParams.bReturnPhysicalMaterial = false;
    TraceParams.bTraceComplex = true;
    TraceParams.bReturnFaceIndex = true;

    normal_dist = std::normal_distribution<float>(0.0f, 1.0f);
    
}

// Called when the game starts or when spawned
void ACameraWanderActor::BeginPlay()
{
    Super::BeginPlay();
    
}

// Called every frame
void ACameraWanderActor::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ACameraWanderActor::Handle_TakeOneStep()
{
    UFusionCamSensor * Camera = GetCamera();
    FRotator CurrentRotation = GetRotation(Camera);
    UE_LOG(LogTemp, Warning, TEXT("Rotation %.3f %.3f %.3f"), 
             (CurrentRotation.Pitch), 
             (CurrentRotation.Yaw),
             (CurrentRotation.Roll));

    float pitch_delta, yaw_delta, roll_delta;
    if (!bIsUseNormal)
    {
        pitch_delta = FMath::FRandRange(-1.0f, 1.0f) * pitch_sigma;
        yaw_delta = FMath::FRandRange(-1.0f, 1.0f) * yaw_sigma;
        roll_delta = FMath::FRandRange(-1.0f, 1.0f) * roll_abs_range;
    }
    else
    {
        pitch_delta = normal_dist(generator) * pitch_sigma;
        yaw_delta = normal_dist(generator) * yaw_sigma;
        roll_delta = normal_dist(generator) * roll_abs_range;
    }
    
    CurrentRotation.Pitch = pitch_delta;
    CurrentRotation.Yaw += yaw_delta;
    CurrentRotation.Roll = 0.0f;

    UE_LOG(LogTemp, Warning, TEXT("New rotation computed"));
    UE_LOG(LogTemp, Warning, TEXT("New Rotation %.3f %.3f %.3f"), 
             (CurrentRotation.Pitch), 
             (CurrentRotation.Yaw),
             (CurrentRotation.Roll));
    SetRotation(Camera, CurrentRotation);

    UE_LOG(LogTemp, Warning, TEXT("New rotation set"));
    bool isTooClose;
    FVector NextLocation = SampleNextLocation(Camera, isTooClose);
    UE_LOG(LogTemp, Warning, TEXT("New location obtained"));
    if (!isTooClose){
        SetLocation(Camera, NextLocation);
        UE_LOG(LogTemp, Warning, TEXT("New location set"));
    }
    else{
        UE_LOG(LogTemp, Warning, TEXT("Too close, no new location"));
    }
    
    if (FMath::FRandRange(0.0f, 1.0f) < 0.4)
    {
        CurrentRotation.Roll = roll_delta;
    }
    pitch_delta = FMath::FRandRange(-1.0f, 1.0f) * pitch_sigma;
    CurrentRotation.Pitch += pitch_delta;
    if (isTooClose)
    {
        CurrentRotation.Yaw += 180.0f * (normal_dist(generator) / 3.0f + 1.0f);
    }
    UE_LOG(LogTemp, Warning, TEXT("New rotation computed"));
    UE_LOG(LogTemp, Warning, TEXT("Rolled Rotation %.3f %.3f %.3f"), 
             (CurrentRotation.Pitch), 
             (CurrentRotation.Yaw),
             (CurrentRotation.Roll));
    SetRotation(Camera, CurrentRotation);
    UE_LOG(LogTemp, Warning, TEXT("New rotation set"));

}

bool ACameraWanderActor::Handle_SetParam(FString ParamName, float Value)
{
    if (ParamName == "MaxStepSize")
    {
        MaxStepSize = (int32)Value;
        return true;
    }
    if (ParamName == "MinStepSize")
    {
        MinStepSize = (int32)Value;
        return true;
    }
    if (ParamName == "WindowsHeight")
    {
        WindowsHeight = (int32)Value;
        return true;
    }
    if (ParamName == "WindowsWidth")
    {
        WindowsWidth = (int32)Value;
        return true;
    }
    if (ParamName == "pitch_sigma")
    {
        pitch_sigma = (float)Value;
        return true;
    }
    if (ParamName == "yaw_sigma")
    {
        yaw_sigma = (float)Value;
        return true;
    }
    if (ParamName == "roll_abs_range")
    {
        roll_abs_range = (float)Value;
        return true;
    }
    if (ParamName == "MaxStepRatio")
    {
        MaxStepRatio = (float)Value;
        return true;
    }
    if (ParamName == "MinStepRatio")
    {
        MinStepRatio = (float)Value;
        return true;
    }
    return false;
}

FRotator ACameraWanderActor::GetRotation(UFusionCamSensor * Camera)
{
    return Camera->GetSensorRotation();
}

FVector ACameraWanderActor::GetLocation(UFusionCamSensor * Camera)
{
    return Camera->GetSensorLocation();
}

FVector ACameraWanderActor::SampleNextLocation(UFusionCamSensor * Camera, bool & bisTooClose)
{
    FVector CurrentLocation = GetLocation(Camera);
    FVector2D Center = FVector2D(WindowsWidth / 2, WindowsHeight / 2);
    FVector WorldPosition = FVector(0.0f, 0.0f, 0.0f);
    FVector WorldDirection = FVector(0.0f, 0.0f, 0.0f);
    FHitResult HitResult;
    UGameplayStatics::GetPlayerController(GetWorld(), 0)->DeprojectScreenPositionToWorld(Center[0], Center[1], WorldPosition, WorldDirection);
    UE_LOG(LogTemp, Warning, TEXT("Location %.3f %.3f %.3f"), 
             (CurrentLocation.X), 
             (CurrentLocation.Y),
             (CurrentLocation.Z));
    bool HitFlag = GetWorld()->LineTraceSingleByChannel(HitResult, WorldPosition, WorldPosition + MaxStepSize * WorldDirection, ECC_Visibility, TraceParams);
    FVector HitPointLocation;
    if (HitFlag)
    {
        HitPointLocation = HitResult.Location;
    }
    else
    {
        HitPointLocation = WorldPosition + WorldDirection * MaxStepSize;
    }
    UE_LOG(LogTemp, Warning, TEXT("Hit Location %.3f %.3f %.3f"), 
             (HitPointLocation.X), 
             (HitPointLocation.Y),
             (HitPointLocation.Z));
    float RandomPositionRatio = FMath::FRandRange(MinStepRatio, MaxStepRatio);
    FVector vectorized_path = (HitPointLocation - CurrentLocation);
    if (vectorized_path.Size() < MinStepSize)
    {
        RandomPositionRatio = 0.0f;
        bisTooClose = true;
    }
    FVector NewLocation = CurrentLocation + RandomPositionRatio * vectorized_path;
    UE_LOG(LogTemp, Warning, TEXT("New Location %.3f %.3f %.3f"), 
             (NewLocation.X), 
             (NewLocation.Y),
             (NewLocation.Z));
    return NewLocation;

}

void ACameraWanderActor::SetLocation(UFusionCamSensor * Camera, FVector Location)
{
    APawn* Pawn = FUnrealcvServer::Get().GetPawn();
    if (!IsValid(Pawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("The Pawn of the scene is invalid."));
        return;
    }
    Pawn->SetActorLocation(Location, false, NULL, ETeleportType::TeleportPhysics);
}

void ACameraWanderActor::SetRotation(UFusionCamSensor * Camera, FRotator Rotation)
{
    APawn* Pawn = FUnrealcvServer::Get().GetPawn();
    if (!IsValid(Pawn))
    {
        UE_LOG(LogTemp, Warning, TEXT("The Pawn of the scene is invalid."));
        return;
    }
    AController* Controller = Pawn->GetController();
    if (!IsValid(Controller))
        {
            UE_LOG(LogTemp, Warning, TEXT("The Controller of the Pawn is invalid."));
            return;
        }
    Controller->ClientSetRotation(Rotation);
}