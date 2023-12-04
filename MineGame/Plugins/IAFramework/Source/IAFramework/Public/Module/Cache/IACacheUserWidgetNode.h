// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IACacheNode.h"
#include "IACacheUserWidgetNode.generated.h"


class UIAUserWidget;

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIACacheUserWidgetNode : public UIACacheNode
{
	GENERATED_BODY()

public:

	TArray<TSharedPtr<UIAUserWidget>> Widgets;
};
