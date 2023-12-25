// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BlackboardData.h"
#include "MainGameEnemyBlackboard.generated.h"

/**
 * 
 */
UCLASS()
class MINEGAME_API UMainGameEnemyBlackboard : public UBlackboardData
{
	GENERATED_BODY()
	
public:

	virtual void PostLoad() override;
};
