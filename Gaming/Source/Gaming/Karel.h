// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NPC.h"
#include "GameFramework/SpringArmComponent.h"
#include "Karel.generated.h"

/**
 * 
 */
UCLASS()
class GAMING_API AKarel : public ANPC
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* CapsuleComponent2;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmComponent;
	AKarel();
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
