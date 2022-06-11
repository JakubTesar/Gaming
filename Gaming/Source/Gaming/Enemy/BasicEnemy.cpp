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
	UAIPerceptionSystem::RegisterPerceptionStimuliSource(this, SightConfig->GetSenseImplementation(), this);
	AIPerceptionComponent->OnPerceptionUpdated.AddDynamic(this,  &ABasicEnemy::PrintSmthk);
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	
}

// Called when the game starts or when spawned
void ABasicEnemy::BeginPlay()
{
	TSubclassOf<AActor> ClassToFind;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ClassToFind, FoundActors);
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
void ABasicEnemy::PrintSmthk(const TArray<AActor*>& TestActors)
{
	UE_LOG(LogTemp, Warning, TEXT("I just started running"));
}