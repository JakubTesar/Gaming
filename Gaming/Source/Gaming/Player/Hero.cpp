// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"

#include "DrawDebugHelpers.h"
#include "MySaveGame.h"
#include "Gaming/Enemy/BasicEnemy.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AHero::AHero()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("Arm");
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 0;
	SpringArmComponent->bUsePawnControlRotation = true;
	
	CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
	CameraComponent->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	HP = 100;
	DMG = 10; // Hand
	InventorySlots = 10;
}

// Called when the game starts or when spawned
void AHero::BeginPlay()
{
	Super::BeginPlay();
	// MyHUD = Cast<AHUD>(UGameplayStatics::GetPlayerController(GetWorld(), 0)->GetHUD());
}

// Called every frame
void AHero::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
	FVector Location = CameraComponent->GetComponentLocation() + (CameraComponent->GetForwardVector() * 100);
	FVector ForwardVector = CameraComponent->GetForwardVector() * 10000;
	//DrawDebugLine(GetWorld(), Location, ForwardVector, FColor::Blue, false
	//	,-1, 0,5);
	bool Result = GetWorld()->LineTraceMultiByChannel(
		HitResults, Location, ForwardVector, ECC_GameTraceChannel1);
}

// Called to bind functionality to input
void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis("Forward", this, &AHero::MoveForward);
	PlayerInputComponent->BindAxis("Sideways", this, &AHero::MoveSideways);
	PlayerInputComponent->BindAxis("MouseMovementX", this, &AHero::AddControllerYawInput);
	PlayerInputComponent->BindAxis("MouseMovementY", this, &AHero::AddControllerPitchInput);
	PlayerInputComponent->BindAction("MouseClick", IE_Pressed, this, &AHero::LeftClick);
}

void AHero::MoveForward(float Direction){
	AddMovementInput(GetActorForwardVector(), Direction);
}
void AHero::MoveSideways(float Direction){
	AddMovementInput(GetActorRightVector(), Direction);
}
void AHero::LeftClick(){
	for (FHitResult HitResult : HitResults) {
		ABasicEnemy* Enemy = Cast<ABasicEnemy>(HitResult.GetActor());
		if (Enemy != nullptr) {
			FVector CubeLoc = HitResult.GetActor()->GetActorLocation();
			FVector HitDir = CubeLoc - HitResult.ImpactPoint;
			DrawDebugBox(GetWorld(), HitResult.ImpactPoint, FVector(4,4,4), FColor::Red, false, 1, 0, 1);
			Enemy->HP -= 50;
		}
	}
}

void AHero::EquipWeapon()
{

}

void AHero::SavePosition()
{
	if (UMySaveGame* SaveGameInstance = Cast<UMySaveGame>(UGameplayStatics::CreateSaveGameObject(UMySaveGame::StaticClass())))
	{
		SaveGameInstance->PlayerPosition = GetActorLocation();
		
		if (UGameplayStatics::SaveGameToSlot(SaveGameInstance, "Slot0", 0))
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Game saved!"));
		}
	}
}

void AHero::LoadPosition()
{
	if (const UMySaveGame* LoadedGame = Cast<UMySaveGame>(UGameplayStatics::LoadGameFromSlot("Slot0", 0)))
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Game loaded!"));
		SetActorLocation(LoadedGame->PlayerPosition);
	}
}