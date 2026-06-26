// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractivePlatform.h"
#include "MovingPlatform.generated.h"

UCLASS()
class FORESTSWIRL_API AMovingPlatform : public AInteractivePlatform
{
	GENERATED_BODY()

public:	
	// Sets default values for this actor's properties
	AMovingPlatform();

private:
	UPROPERTY(EditAnywhere)
	FVector InitialLocation = FVector(100.0f, 100.0f, 100.0f);
	UPROPERTY(EditAnywhere)
	FRotator RotationPace = FRotator(0.0f, 00.0f, 10.0f);
	UPROPERTY(EditAnywhere)
	FVector Velocity = FVector(0.0f, 0.0f, 10.0f);
	UPROPERTY(EditAnywhere)
	float MoveFrequency = 10.0f;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
