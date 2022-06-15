// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Enemy/BasicEnemy.h"
#include "Perception/AISenseConfig_Sight.h"
#include "EnemyAIController.generated.h"

/**
 * 
 */
UCLASS()
class GAMING_API AEnemyAIController : public AAIController
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	UAIPerceptionComponent* AIPerceptionComponent;

	UPROPERTY(EditAnywhere)
	UAISenseConfig_Sight* SightConfig;

	UPROPERTY(EditAnywhere)
	TArray<AActor*> FoundActors;
	

	// Sets default values for this character's properties
	AEnemyAIController();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	void SenseStuff(const TArray<AActor*>&);
};
