// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Define/MineGameTypes.h"
#include "GameFramework/Character.h"
#include "MainGameEnemyCharacter.generated.h"

UCLASS()
class MINEGAME_API AMainGameEnemyCharacter : public ACharacter
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (DisplayName = "阵营"))
	EEnemyCamp EnemyCamp;

public:
	// Sets default values for this character's properties
	AMainGameEnemyCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
