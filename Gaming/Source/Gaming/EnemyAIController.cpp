// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAIController.h"
#include "Enemy/BasicEnemy.h"
#include "Perception/AIPerceptionComponent.h"
#include "Player/Hero.h"

AEnemyAIController::AEnemyAIController()
{
	//AIPerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("AIPerception Component"));
	//SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("Sight Config"));

	//SightConfig->SightRadius = 500.0f;
	//SightConfig->LoseSightRadius = (500.0f + 20.0f);
	//SightConfig->PeripheralVisionAngleDegrees = 90.0f;
	//SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	//SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	//SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	//AIPerceptionComponent->ConfigureSense(*SightConfig);
	//AIPerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
	//AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this,&AEnemyAIController::SenseStuff);
	//UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, SightConfig->GetSenseImplementation(), GetPawn());
	
	PerceptionComponent = CreateDefaultSubobject<UAIPerceptionComponent>(TEXT("Perception"));
	SightConfig = CreateDefaultSubobject<UAISenseConfig_Sight>(TEXT("SR Sight Config"));

	SightConfig->SightRadius = 640.0f;
	SightConfig->PeripheralVisionAngleDegrees = 142.0f;
	SightConfig->DetectionByAffiliation.bDetectEnemies = true;
	SightConfig->DetectionByAffiliation.bDetectFriendlies = true;
	SightConfig->DetectionByAffiliation.bDetectNeutrals = true;
	SightConfig->SetMaxAge(0);
	
	PerceptionComponent->ConfigureSense(*SightConfig);
	PerceptionComponent->SetDominantSense(SightConfig->GetSenseImplementation());
	//AIPerceptionComponent->OnPerceptionUpdated.Add;
	PrimaryActorTick.bCanEverTick = true;
}

void AEnemyAIController::BeginPlay()
{
	Super::BeginPlay();

	PerceptionComponent->OnTargetPerceptionUpdated.AddDynamic(this, &AEnemyAIController::SenseStuff);
}

void AEnemyAIController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AEnemyAIController::SenseStuff(AActor* Actor, FAIStimulus Stimulus)
{
	APawn* Ahoj2 = GetPawn();
	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, Ahoj2->GetName());
	UE_LOG(LogTemp, Warning, TEXT("I just started running"));

}
