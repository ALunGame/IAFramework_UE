// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "IAModule.h"
#include "IATimerModule.generated.h"

DECLARE_DELEGATE(IATimerEvent)

struct IATimerNode
{
	FName Name;

	IATimerEvent TimerEvent;

	float Timer;
	float CheckTimer;

	float RateTime;
	float FirstDelayTime;

	int CurrRunTimes;
	int TotalRunTimes;

	template<class UserClass>
	IATimerNode(UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, float InRateTime, int InTotalRunTimes = -1, float InFirstDelayTime = -1.f)
	{
		Timer = 0;
		CheckTimer = InRateTime;

		RateTime = InRateTime;
		FirstDelayTime = InFirstDelayTime;

		CurrRunTimes = 0;
		TotalRunTimes = InTotalRunTimes;
		
		TimerEvent.BindUObject(UserObj,InMethod);
	}

	void FirstCheckExecute()
	{
		if (FirstDelayTime <= 0)
		{
			TimerEvent.ExecuteIfBound();
			CurrRunTimes ++;
		}
	}

	bool Execute(float DeltaSeconds)
	{
		Timer += DeltaSeconds;

		//第一次延时
		if (FirstDelayTime > 0 && CurrRunTimes == 0)
		{
			if (Timer >= FirstDelayTime)
			{
				CurrRunTimes ++;
				TimerEvent.ExecuteIfBound();
				
				CheckTimer = Timer + RateTime;
			}

			return false;
		}

		//检测次数
		if (TotalRunTimes > 0 && CurrRunTimes > TotalRunTimes)
		{
			return true;
		}

		//达到时间
		if (Timer > CheckTimer)
		{
			CheckTimer = Timer + RateTime;
			CurrRunTimes ++;
			TimerEvent.ExecuteIfBound();

			if (TotalRunTimes > 0 && CurrRunTimes > TotalRunTimes)
			{
				return true;
			}
		}

		return false;
	}
	
};


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class IAFRAMEWORK_API UIATimerModule : public UIAModule
{
	GENERATED_BODY()

public:

	virtual void ModuleTick(float DeltaSeconds) override;

	template<class UserClass>
	void SetTimer(FName TimerName,UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, float InRateTime, int InTotalRunTimes = 1, float InFirstDelayTime = -1.f);

	template <class UserClass>
	void StopTimer(UserClass* UserObj, FName TimerName);

	template <class UserClass>
	void StopTimers(UserClass* UserObj);
	
private:

	TMap<UObject*,TMap<FName,IATimerNode*>> TimerNodeMap;
};

template <class UserClass>
void UIATimerModule::SetTimer(FName TimerName, UserClass* UserObj,
	typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod, float InRateTime,
	int InTotalRunTimes, float InFirstDelayTime)
{
	if (TimerNodeMap.Contains(UserObj) && !(TimerNodeMap.Find(UserObj)->Contains(TimerName)))
	{
		IA::Error() << "SetTimer》》出错！相同计时器！！" << TimerName << IA::Endl();
		return;
	}

	if (!TimerNodeMap.Contains(UserObj))
	{
		TMap<FName,IATimerNode*> NewMap;
		TimerNodeMap.Add(UserObj,NewMap);
	}

	IATimerNode* TimerNode = new IATimerNode(UserObj,InMethod,InRateTime,InTotalRunTimes,InFirstDelayTime);
	TimerNodeMap.Find(UserObj)->Add(TimerName,TimerNode);
	delete TimerNode;
	TimerNode->FirstCheckExecute();
}

template <class UserClass>
void UIATimerModule::StopTimer(UserClass* UserObj, FName TimerName)
{
	if (Cast<UObject>(UserObj))
	{
		UObject* UserObjPtr = Cast<UObject>(UserObj);
		if (!TimerNodeMap.Contains(UserObjPtr) || TimerNodeMap.Find(UserObjPtr)->Contains(TimerName) == false)
		{
			return;
		}

		TimerNodeMap.Find(UserObjPtr)->Remove(TimerName);
	}
	
}

template <class UserClass>
void UIATimerModule::StopTimers(UserClass* UserObj)
{
	if (Cast<UObject>(UserObj))
	{
		UObject* UserObjPtr = Cast<UObject>(UserObj);
		if (!TimerNodeMap.Contains(UserObjPtr))
		{
			return;
		}
	
		TimerNodeMap.Remove(UserObjPtr);
	}
	
}
