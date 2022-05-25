// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyHUD.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "GameFramework/SpringArmComponent.h"
#include "Gaming/Items/Item.h"
#include "Hero.generated.h"

UCLASS()
class GAMING_API AHero : public ACharacter
{
	GENERATED_BODY()
	

public:
	UPROPERTY(EditAnywhere)
	UCameraComponent* CameraComponent;

	UPROPERTY(EditAnywhere)
	USpringArmComponent* SpringArmComponent;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float HP;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float DMG;
	
	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool bInventoryShow;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	UUserWidget* InventoryWidget;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	TArray<AItem*> Inventory;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	float InventorySlots;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	AItem* WeaponSlot;

	UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
	AHUD* MyHUD;
	
	// Sets default values for this character's properties
	AHero();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
	void MoveForward(float Direction);
	void MoveSideways(float Direction);	
	void LeftClick();	
	void EquipWeapon();	
	TArray<FHitResult> HitResults;
};
