// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Object/IAOO.h"
#include "IAUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAUserWidget : public UUserWidget, public IIAOO
{
	GENERATED_BODY()

public:

	virtual void IARelease() override;
};
