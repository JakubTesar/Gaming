// Fill out your copyright notice in the Description page of Project Settings.


#include "Karel.h"

#include "Components/CapsuleComponent.h"
#include "Items/Sword.h"

AKarel::AKarel()
{
	SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>("Arm");
	SpringArmComponent->SetupAttachment(RootComponent);
	SpringArmComponent->TargetArmLength = 0;
	SpringArmComponent->bUsePawnControlRotation = true;
	
	CapsuleComponent2 = CreateDefaultSubobject<UCapsuleComponent>("Capsule2");
	CapsuleComponent2->SetupAttachment(SpringArmComponent, USpringArmComponent::SocketName);
	
	PrimaryActorTick.bCanEverTick = true;
}
void AKarel::BeginPlay()
{
	Super::BeginPlay();
}
void AKarel::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}