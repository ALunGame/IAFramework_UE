// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "Object/IAOO.h"
#include "IAGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAGameInstance : public UGameInstance, public IIAOO
{
	GENERATED_BODY()
};
