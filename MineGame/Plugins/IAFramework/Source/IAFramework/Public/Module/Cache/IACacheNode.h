// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IACacheNode.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIACacheNode : public UObject
{
	GENERATED_BODY()

public:
	FName CacheName;
	
};
