// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Enemy/BasicEnemy.h"
#include "Perception/AIPerceptionComponent.h"
#include "Player/Hero.h"

AEnemyAIController::AEnemyAIController()
{
	AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	//EAIController = CreateDefaultSubobject<AEnemyAIController>(TEXT("EnemyAIController"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	SightConfig->SightRadius = 500.0f;
	SightConfig->LoseSightRadius = (500.0f + 20.0f);
	SightConfig->PeripheralVisionAngleDegrees = 90.0f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	
	AIPerceptionComponent->ConfigureSense(*SightConfig);
	AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
	
	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this,&AEnemyAIController::SenseStuff);
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, SightConfig->GetSenseImplementation(), GetPawn());
	//AIPerceptionComponent->OnPerceptionUpdated.Add;
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();
	APawn* Ahoj = GetPawn();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Ahoj->GetName());
	//GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "I see you!");
}

void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyAIController::SenseStuff(const TArray<AActor*>& Actors)
{
	APawn* Ahoj2 = GetPawn();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Ahoj2->GetName());
	UE_LOG(LogTemp, Warning, TEXT("I just started running"));

}
