// Fill out your copyright notice in the Description page of Project Settings.


#include "AnchorRecordPawn.h"
#include <stdio.h>
#include <stdlib.h>
#include "Engine/Classes/Components/InputComponent.h"
#include "GameFramework/Controller.h"


// Sets default values
AAnchorRecordPawn::AAnchorRecordPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	moving_speed = 20.0f;
}

// Called when the game starts or when spawned
void AAnchorRecordPawn::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("Now using anchor record pawn to record camera anchors"));
}

// Called every frame
void AAnchorRecordPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAnchorRecordPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("SaveCurrent", IE_Pressed, this, &AAnchorRecordPawn::MouseLBegin);
	PlayerInputComponent->BindAction("SaveCurrent", IE_Released, this, &AAnchorRecordPawn::MouseLStop);

	PlayerInputComponent->BindAxis("MoveForward", this, &AAnchorRecordPawn::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &AAnchorRecordPawn::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &AAnchorRecordPawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &AAnchorRecordPawn::AddControllerPitchInput);
}

void AAnchorRecordPawn::MouseLBegin()
{

}

void AAnchorRecordPawn::MouseLStop()
{
	FVector currentLocation = GetActorLocation();
	FILE* info_file = fopen("camera_trajectory.txt","a");
	fprintf(info_file, "%.3f", currentLocation.X);
	fprintf(info_file, " %.3f", currentLocation.Y);
	fprintf(info_file, " %.3f\n", currentLocation.Z);
	fclose(info_file);
	UE_LOG(LogTemp, Warning, TEXT("Saved a position."));
}

void AAnchorRecordPawn::MoveForward(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::X);
	FVector currentLocation = GetActorLocation();
    if(Value != 0.0)
	{
		currentLocation += Direction * Value * moving_speed;
		SetActorLocation(currentLocation);
	}
}

void AAnchorRecordPawn::MoveRight(float Value)
{
	FVector Direction = FRotationMatrix(Controller->GetControlRotation()).GetScaledAxis(EAxis::Y);
	FVector currentLocation = GetActorLocation();
	if(Value != 0.0)
	{
		currentLocation += Direction * Value * moving_speed;
		SetActorLocation(currentLocation);
	}
}

void AAnchorRecordPawn::Turn(float Value)
{
	FRotator currentRotation = GetActorRotation();
	if (Value != 0)
	{
		currentRotation.Yaw += Value;
	}
}

void AAnchorRecordPawn::Lookup(float Value)
{
	FRotator currentRotation = GetActorRotation();
	if (Value != 0)
	{
		currentRotation.Pitch += Value;
	}
}
