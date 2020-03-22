// Fill out your copyright notice in the Description page of Project Settings.


#include "EnvJitterActor.h"


// Sets default values
AEnvJitterActor::AEnvJitterActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
	// light
    Light_int_ub = 20.0f;
    Light_row_yaw = 45.0f;
	Light_row_pitch = 30.0f;
	Light_color_power = 0.5f;
	Light_dir_point_mul = 1000.0f;

	// fog
	max_fog_density = 0.08f;
	max_fog_opacity = 0.2f;
}

// Called when the game starts or when spawned
void AEnvJitterActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEnvJitterActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AEnvJitterActor::Handle_Command(FString command)
{
	// light
	if ((command == "light-int")||(command == "All"))
	{
		Light_Intensity();
		UE_LOG(LogTemp, Warning, TEXT("Light intensity Changed"));
	}
	if ((command == "light-dir")||(command == "All"))
	{
		Light_Direction();
		UE_LOG(LogTemp, Warning, TEXT("Light direction Changed"));
	}
	if ((command == "light-color")||(command == "All"))
	{
		Light_Color();
		UE_LOG(LogTemp, Warning, TEXT("Light color Changed"));
	}
	if ((command == "fog")||(command == "All"))
	{
		Fog_multiplier();
		UE_LOG(LogTemp, Warning, TEXT("Fog condition Changed"));
	}
}

// TODO: the pointlight and spotlight intensity has different scale from directionallight
void AEnvJitterActor::Light_Intensity()
{
	TArray<AActor*> FoundActors;
	// intensity
	float new_intensity = FMath::FRandRange(0.1f, Light_int_ub);
	
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADirectionalLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ADirectionalLight* LightInstance = Cast<ADirectionalLight>(FoundActors[i]);
		// float intensity = LightInstance->GetBrightness();
		LightInstance->SetBrightness(new_intensity);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpotLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ASpotLight* LightInstance = Cast<ASpotLight>(FoundActors[i]);
		// float intensity = LightInstance->GetBrightness();
		LightInstance->SetBrightness(new_intensity * Light_dir_point_mul);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APointLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		APointLight* LightInstance = Cast<APointLight>(FoundActors[i]);
		// float intensity = LightInstance->GetBrightness();
		LightInstance->SetBrightness(new_intensity * Light_dir_point_mul);
	}
}

void AEnvJitterActor::Light_Direction()
{
	TArray<AActor*> FoundActors;
	// pitch, yaw
	float yaw_delta = FMath::FRandRange(-Light_row_yaw, Light_row_yaw);
	float pitch_delta = FMath::FRandRange(-Light_row_pitch, Light_row_pitch);
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADirectionalLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ADirectionalLight* LightInstance = Cast<ADirectionalLight>(FoundActors[i]);
		FRotator rotation = LightInstance->GetActorRotation();
		UE_LOG(LogTemp, Warning, 
					TEXT("Old rotation: %f %f %f"), 
					rotation.Pitch, rotation.Yaw, rotation.Roll);
		rotation.Yaw += yaw_delta;
		rotation.Pitch += pitch_delta;
		UE_LOG(LogTemp, Warning, 
					TEXT("New rotation: %f %f %f"), 
					rotation.Pitch, rotation.Yaw, rotation.Roll);
		LightInstance->SetActorRelativeRotation(rotation);
		if (rotation.Pitch < -175.0f)
		{
			rotation.Pitch += 100.0f;
		}
		if (rotation.Pitch > -5.0f)
		{
			rotation.Pitch -= 100.0f;
		}
		UE_LOG(LogTemp, Warning, 
					TEXT("Regularized rotation: %f %f %f"), 
					rotation.Pitch, rotation.Yaw, rotation.Roll);
		LightInstance->SetActorRelativeRotation(rotation);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpotLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ASpotLight* LightInstance = Cast<ASpotLight>(FoundActors[i]);
		FRotator rotation = LightInstance->GetActorRotation();
		rotation.Yaw += yaw_delta;
		rotation.Pitch += pitch_delta;
		if (rotation.Pitch < 190.0f)
		{
			rotation.Pitch += 100.0f;
		}
		if (rotation.Pitch > 350.0f)
		{
			rotation.Pitch -= 100.0f;
		}
		LightInstance->SetActorRelativeRotation(rotation);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APointLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		APointLight* LightInstance = Cast<APointLight>(FoundActors[i]);
		FRotator rotation = LightInstance->GetActorRotation();
		rotation.Yaw += yaw_delta;
		rotation.Pitch += pitch_delta;
		if (rotation.Pitch < 190.0f)
		{
			rotation.Pitch += 100.0f;
		}
		if (rotation.Pitch > 350.0f)
		{
			rotation.Pitch -= 100.0f;
		}
		LightInstance->SetActorRelativeRotation(rotation);
	}
}

void AEnvJitterActor::Light_Color()
{
	TArray<AActor*> FoundActors;
	// intensity

	float New_Red = FMath::FRandRange(0.0, 1.0f);
	New_Red = FMath::Pow(New_Red, Light_color_power);
	float New_Green = FMath::FRandRange(0.0, 1.0f);
	New_Green = FMath::Pow(New_Green, Light_color_power);
	float New_Blue = FMath::FRandRange(0.0, 1.0f);
	New_Blue = FMath::Pow(New_Blue, Light_color_power);

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ADirectionalLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ADirectionalLight* LightInstance = Cast<ADirectionalLight>(FoundActors[i]);
		FLinearColor color = LightInstance->GetLightColor();
		UE_LOG(LogTemp, Warning, TEXT("Old Color: %f %f %f"), color.R, color.G, color.B);
		color.R = New_Red;
		color.G = New_Green;
		color.B = New_Blue;
		UE_LOG(LogTemp, Warning, TEXT("Color Changed"));
		UE_LOG(LogTemp, Warning, TEXT("New Color: %f %f %f"), color.R, color.G, color.B);
		LightInstance->SetLightColor(color);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpotLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		ASpotLight* LightInstance = Cast<ASpotLight>(FoundActors[i]);
		FLinearColor color = LightInstance->GetLightColor();
		UE_LOG(LogTemp, Warning, TEXT("Old Color: %f %f %f"), color.R, color.G, color.B);
		color.R = New_Red;
		color.G = New_Green;
		color.B = New_Blue;
		UE_LOG(LogTemp, Warning, TEXT("Color Changed"));
		UE_LOG(LogTemp, Warning, TEXT("New Color: %f %f %f"), color.R, color.G, color.B);
		LightInstance->SetLightColor(color);
	}

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APointLight::StaticClass(), FoundActors);
	for (int32 i=0; i<FoundActors.Num(); i++)
	{
		APointLight* LightInstance = Cast<APointLight>(FoundActors[i]);
		FLinearColor color = LightInstance->GetLightColor();
		UE_LOG(LogTemp, Warning, TEXT("Old Color: %f %f %f"), color.R, color.G, color.B);
		color.R = New_Red;
		color.G = New_Green;
		color.B = New_Blue;
		UE_LOG(LogTemp, Warning, TEXT("Color Changed"));
		UE_LOG(LogTemp, Warning, TEXT("New Color: %f %f %f"), color.R, color.G, color.B);
		LightInstance->SetLightColor(color);
	}
}

void AEnvJitterActor::Fog_multiplier()
{
	float fog_density;
	float fog_opacity;
	if (FMath::FRandRange(0.0f, 1.0f) < 0.2)
	{
		fog_density = FMath::FRandRange(0.0f, max_fog_density);
		fog_opacity = FMath::FRandRange(0.0f, max_fog_opacity);
	}
	else
	{
		fog_density = 0.0f;
		fog_opacity = 0.0f;
	}
	
    
	TArray<AActor*> FoundActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AExponentialHeightFog::StaticClass(), FoundActors);
	if (FoundActors.Num() <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("No fog actor found"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Fog actor found... "));
		AExponentialHeightFog * FogActor = Cast<AExponentialHeightFog>(FoundActors[0]);
		UExponentialHeightFogComponent * FogComponent = FogActor->GetComponent();
		FogComponent->SetFogDensity(fog_density);
		FogComponent->SetFogMaxOpacity(fog_opacity);
	}
}
