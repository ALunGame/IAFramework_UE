// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IACacheNode.h"
#include "IACacheObjectNode.generated.h"

class UIAObject;

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIACacheObjectNode : public UIACacheNode
{
	GENERATED_BODY()

public:

	UPROPERTY()
	TArray<UIAObject*> Objects;
};
