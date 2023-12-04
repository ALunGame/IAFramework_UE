// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/IAOO.h"

#include "Core/IADriver.h"

void IIAOO::IAClear()
{
	StopTimers();
}

void IIAOO::IADestroy()
{
	IAClear();
}

UWorld* IIAOO::GetIAWorld() const
{
	if (UIACommon::Get()->GetDriver())
		return UIACommon::Get()->GetDriver()->GetWorld();
	return nullptr;
}

template <class UserClass>
void IIAOO::SetTimer(FName TimerName, UserClass* UserObj, typename IATimerEvent::TUObjectMethodDelegate<UserClass>::FMethodPtr InMethod,
	float InRateTime, int InTotalRunTimes, float InFirstDelayTime)
{
	UIACommon::Get()->GetTimerModule()->SetTimer(TimerName,UserObj,InMethod,InRateTime,InTotalRunTimes,InFirstDelayTime);
}

void IIAOO::StopTimer(FName TimerName)
{
	UIACommon::Get()->GetTimerModule()->StopTimer(this,TimerName);
}

void IIAOO::StopTimers()
{
	UIACommon::Get()->GetTimerModule()->StopTimers(this);
}