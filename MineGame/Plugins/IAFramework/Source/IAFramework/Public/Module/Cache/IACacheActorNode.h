// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IACacheNode.h"
#include "IACacheActorNode.generated.h"

class AIAActor;

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIACacheActorNode : public UIACacheNode
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TArray<AIAActor*> Actors;
};
