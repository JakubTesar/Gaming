// Fill out your copyright notice in the Description page of Project Settings.


#include "Hero.h"

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
}

// Called when the game starts or when spawned
void AHero::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AHero::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector Location = GetActorLocation() + (GetActorForwardVector() * 100);
	FVector ForwardVector = CameraComponent->GetForwardVector() * 10000;
	
	bool Result = GetWorld()->LineTraceMultiByChannel(
		HitResults, Location, ForwardVector, ECC_GameTraceChannel1);
}

// Called to bind functionality to input
void AHero::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
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
		/*ACube* Chest = Cast<ACube>(HitResult.GetActor());
		if (Chest != nullptr) {
			FVector CubeLoc = HitResult.GetActor()->GetActorLocation();
			FVector HitDir = CubeLoc - HitResult.ImpactPoint;
			Chest->StaticMeshComponent->AddImpulse(HitDir*100000);
			DrawDebugBox(GetWorld(), HitResult.ImpactPoint, FVector(4,4,4), FColor::Red, false, 1, 0, 1);
			Chest->HP -= 50;
			Chest->Die();
		}*/
	}
}