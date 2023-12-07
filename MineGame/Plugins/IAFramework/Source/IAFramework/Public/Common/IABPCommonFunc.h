// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IABPCommonFunc.generated.h"

enum class EUIPanelType : uint8;
/**
 * 蓝图全局方法
 */
UCLASS()
class IAFRAMEWORK_API UIABPCommonFunc : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "IABP")
	static void ShowUI(EUIPanelType InPanelType);

	UFUNCTION(BlueprintCallable, Category = "IABP")
	static void HideUI(EUIPanelType InPanelType);
};
