// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/Light.h"
#include "Engine/DirectionalLight.h"
#include "Engine/SpotLight.h"
#include "Engine/PointLight.h"
#include "Engine/ExponentialHeightFog.h"
#include "Engine/Classes/Components/ExponentialHeightFogComponent.h"

#include "random"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Core/Public/GenericPlatform/GenericPlatformMath.h"
#include "EnvJitterActor.generated.h"

UCLASS()
class UNREALCV_API AEnvJitterActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEnvJitterActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Handle_Command(FString command);

	// light status
	virtual void Light_Intensity();
	virtual void Light_Direction();
	virtual void Light_Color();

	// light hyper-param
	UPROPERTY(EditAnywhere)
	float Light_int_ub;
	UPROPERTY(EditAnywhere)
	float Light_row_yaw;
	UPROPERTY(EditAnywhere)
	float Light_row_pitch;
	UPROPERTY(EditAnywhere)
	float Light_color_power;
	UPROPERTY(EditAnywhere)
	float Light_dir_point_mul;

	// fog status
	virtual void Fog_multiplier();

    UPROPERTY(EditAnywhere)
	float max_fog_density;
	UPROPERTY(EditAnywhere)
	float max_fog_opacity;
	
};
