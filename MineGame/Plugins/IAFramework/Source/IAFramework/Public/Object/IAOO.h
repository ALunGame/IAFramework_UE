// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Module/IAModule.h"
#include "Common/IACommon.h"
#include "Game/IAGameTypes.h"
#include "Module/IATimerModule.h"
#include "UObject/Interface.h"
#include "IAOO.generated.h"

// This class does not need to be modified.
UINTERFACE()
class UIAOO : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class IAFRAMEWORK_API IIAOO
{
	GENERATED_BODY()

public:
	
	//清理数据
	virtual void IAClear();

	//释放内存
	virtual void IADestroy();

	//框架获取世界函数
	UWorld* GetIAWorld() const;
	

protected:

	//设置计时器
	template<class UserClass>
	void SetTimer(FName TimerName, UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, float InRateTime, int InTotalRunTimes = 1, float InFirstDelayTime = -1.f);

	//暂停计时器
	void StopTimer(FName TimerName);

	//清空所有计时器
	void StopTimers();
};


