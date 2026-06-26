// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

float MoveTimer = 0.0f;
float VelocityMod = 1.0f;

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	SetActorLocation(InitialLocation);
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator CurrentRotation = GetActorRotation();
	SetActorRotation(CurrentRotation + RotationPace);

	FVector CurrentLocation = GetActorLocation();

	MoveTimer += DeltaTime;

	if (MoveTimer >= MoveFrequency)
	{
		VelocityMod *= -1.0f;
		MoveTimer = 0.0f;
	}

	SetActorLocation(CurrentLocation + (Velocity * VelocityMod));
}

