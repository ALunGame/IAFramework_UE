// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Object/IAOO.h"
#include "IAActor.generated.h"

UCLASS()
class IAFRAMEWORK_API AIAActor : public AActor, public IIAOO
{
	GENERATED_BODY()

public:

	AIAActor();

	virtual void IADestroy() override;

	//设置缓存名
	void SetCacheName(FName InCacheName);
	
	//设置缓存名
	FName GetCacheName() const;

	//回收
	void Recycle();

private:

	FName CacheName;
};
