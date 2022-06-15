// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicEnemy.h"

#include "Gaming/EnemyAIController.h"
#include "Gaming/Karel.h"
#include "Gaming/Items/Item.h"
#include "Kismet/GameplayStatics.h"
#include "Perception/AIPerceptionComponent.h"
#include "Perception/AISenseConfig_Sight.h"

class UAIPerceptionComponent;

ABasicEnemy::ABasicEnemy()
{
	
	
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	
	Super::BeginPlay();
}

// Called every frame
void ABasicEnemy::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
// Called to bind functionality to input
void ABasicEnemy::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
