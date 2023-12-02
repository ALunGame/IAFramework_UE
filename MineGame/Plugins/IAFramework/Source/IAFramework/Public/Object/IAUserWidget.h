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

	//设置缓存名
	void SetCacheName(FName InCacheName);
	
	//设置缓存名
	FName GetCacheName() const;

	//回收
	void Recycle();

private:

	FName CacheName;
};
