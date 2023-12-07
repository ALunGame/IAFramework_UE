// Fill out your copyright notice in the Description page of Project Settings.


#include "Module/IATimerModule.h"

void UIATimerModule::ModuleInit()
{
	Super::ModuleInit();

	UIACommon::Get()->SetTimerModule(this);
}

void UIATimerModule::ModuleTick(float DeltaSeconds)
{
	Super::ModuleTick(DeltaSeconds);

	TMap<UObject*, TArray<FName>> CompleteTimer;

	TArray<UObject*> EmptyTimer;
	for (TMap<UObject*,TMap<FName,IATimerNode*>>::TIterator It(TimerNodeMap); It; ++It)
	{
		if (!It.Key())
		{
			EmptyTimer.Add(It.Key());
			continue;
		}
		
		for (TMap<FName,IATimerNode*>::TIterator Ih(It->Value); Ih; ++Ih)
		{
			if (Ih.Value()->Execute(DeltaSeconds))
			{
				if (!CompleteTimer.Contains(It.Key()))
				{
					TArray<FName> NewNames;
					CompleteTimer.Add(It.Key(),NewNames);
				}
				CompleteTimer.Find(It.Key())->Add(Ih.Key());
			}
		}
	}

	//清理
	for (TMap<UObject*, TArray<FName>>::TIterator It(CompleteTimer); It; ++It)
	{
		for (TArray<FName>::TIterator Ih(It->Value); Ih; ++Ih)
		{
			TimerNodeMap.Find(It.Key())->Remove(*Ih);
		}

		if (TimerNodeMap.Find(It.Key())->Num() == 0)
		{
			EmptyTimer.Add(It.Key());
		}
	}

	for (TArray<UObject*>::TIterator It(EmptyTimer); It; ++It)
	{
		TimerNodeMap.Remove(*It);
	}
	
}
