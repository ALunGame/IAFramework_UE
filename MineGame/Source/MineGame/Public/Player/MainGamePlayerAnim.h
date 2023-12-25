// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MainGamePlayerCharacter.h"
#include "Animation/AnimInstance.h"
#include "MainGamePlayerAnim.generated.h"

/**
 * 
 */
UCLASS()
class MINEGAME_API UMainGamePlayerAnim : public UAnimInstance
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PlayAnim)
	float Speed;

	//朝向
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = PlayAnim)
	float Direction;

public:

	UMainGamePlayerAnim();

	virtual void NativeUpdateAnimation(float DeltaSeconds) override;
	
	void UpdateAnimParam();

private:

	AMainGamePlayerCharacter* MainGamePlayerCharacter;
};
