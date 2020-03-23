// This is the random-walker for camera location selection

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ProceduralMeshComponent.h" // add ProceduralMeshComponent to [name].Build.cs to include this header
#include "Components/DecalComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformMath.h"
#include "FusionCameraActor.h"
#include "CommandDispatcher.h"
#include "FusionCamSensor.h"
#include "SensorBPLib.h"
#include "stdlib.h"
#include "random"
#include "CameraWanderActor.generated.h"

UCLASS()
class UNREALCV_API ACameraWanderActor : public AActor
{
    GENERATED_BODY()
    
public: 
    // Sets default values for this actor's properties
    ACameraWanderActor();

protected:
    // Called when the game starts or when spawned
    virtual void BeginPlay() override;

public: 
    // Called every frame
    virtual void Tick(float DeltaTime) override;
    
    // Hyper parameters
    UPROPERTY(EditAnywhere)
    int32 MaxStepSize;
    UPROPERTY(EditAnywhere)
    int32 MinStepSize;
    UPROPERTY(EditAnywhere)
    int32 WindowsHeight;
    UPROPERTY(EditAnywhere)
    int32 WindowsWidth;
    UPROPERTY(EditAnywhere)
    float pitch_sigma;
    UPROPERTY(EditAnywhere)
    float yaw_sigma;
    UPROPERTY(EditAnywhere)
    float roll_abs_range;
    UPROPERTY(EditAnywhere)
    float MaxStepRatio;
    UPROPERTY(EditAnywhere)
    float MinStepRatio;
    UPROPERTY(EditAnywhere)
    bool bIsUseNormal;

    virtual void Handle_TakeOneStep();
    virtual bool Handle_SetParam(FString ParamName, float Value);
    virtual FRotator GetRotation(UFusionCamSensor * Camera);
    virtual FVector GetLocation(UFusionCamSensor * Camera);
    virtual FVector SampleNextLocation(UFusionCamSensor * Camera, bool & bisTooClose);
    virtual void SetLocation(UFusionCamSensor * Camera, FVector Location);
    virtual void SetRotation(UFusionCamSensor * Camera, FRotator Rotation);

    // camera
    // UFusionCamSensor * Camera;
    FCollisionQueryParams TraceParams;

    // random
    std::default_random_engine generator;
    std::normal_distribution<float> normal_dist;

};
