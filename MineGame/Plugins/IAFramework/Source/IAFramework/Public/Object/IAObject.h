// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Object/IAOO.h"
#include "UObject/Object.h"
#include "IAObject.generated.h"

/**
 * 
 */
UCLASS()
class IAFRAMEWORK_API UIAObject : public UObject, public IIAOO
{
	GENERATED_BODY()

public:
	
	//重写释放函数
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
