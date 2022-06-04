// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Gaming/NPC.h"
#include "Perception/AIPerceptionComponent.h"

#include "BasicEnemy.generated.h"

/**
 * 
 */
UCLASS()
class GAMING_API ABasicEnemy : public ANPC
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UAIPerceptionComponent* AIPerceptionComponent;
	// Sets default values for this character's properties
	ABasicEnemy();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
};
