// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IADefine.h"
#include "IACommon.generated.h"

class AIADriver;
class UIATimerModule;
class UIAAssetModule;
class UIACacheModule;
class UIAUIModule;

namespace IA
{
	/*
	 * 输出到屏幕
	 */
	FORCEINLINE DDRecord& Debug(float InTime = 3000.f, FColor InColor = FColor::Yellow)
	{
		DDRecord::Get()->PatternID = 0;
		DDRecord::Get()->InitParam(InTime, InColor);
		return *DDRecord::Get();
	}

	/*
	* 输出到屏幕
	*/
	FORCEINLINE DDRecord& Debug(FColor InColor)
	{
		return Debug(3000.f, InColor);
	}

	/*
	* 打印日志
	*/
	FORCEINLINE DDRecord& Log()
	{
		DDRecord::Get()->PatternID = 1;
		return *DDRecord::Get();
	}
	
	/*
	* 打印警告日志
	*/
	FORCEINLINE DDRecord& Warning()
	{
		DDRecord::Get()->PatternID = 2;
		return *DDRecord::Get();
	}

	/*
	* 打印错误日志
	*/
	FORCEINLINE DDRecord& Error()
	{
		DDRecord::Get()->PatternID = 3;
		return *DDRecord::Get();
	}

	/*
	* 日志结束标识
	*/
	FORCEINLINE DDRecord& Endl()
	{
		return *DDRecord::Get();
	}


#pragma region 枚举
	
	//将传入的Enum值对应的FString输出, 直接输出Value对应的值
	template<typename TEnum>
	FORCEINLINE FString GetEnumValueAsString(TEnum Value)
	{
		if (!TIsUEnumClass<TEnum>::Value)
		{
			return FString("InValid");
		}
		return StaticEnum<TEnum>()->GetNameStringByIndex((int32)Value);
	}

	//将传入的Enum值对应的FName输出
	template<typename TEnum>
	FORCEINLINE FName GetEnumValueAsName(TEnum Value)
	{
		if (!TIsUEnumClass<TEnum>::Value)
		{
			return FName("InValid");
		}
		return StaticEnum<TEnum>()->GetNameByIndex((int32)Value);
	}

	//将传入的FName对应的Enum输出
	template<typename TEnum>
	FORCEINLINE TEnum GetEnumValueFromName(FName Value)
	{
		if (!TIsUEnumClass<TEnum>::Value)
		{
			return TEnum(0);
		}
		return (TEnum)StaticEnum<TEnum>()->GetValueByName(Value);
	}

	//将传入的FName对应的Enum的序号输出
	template<typename TEnum>
	FORCEINLINE int32 GetEnumIndexFromName(FName Value)
	{
		if (!TIsUEnumClass<TEnum>::Value)
		{
			return -1;
		}
		return (TEnum)StaticEnum<TEnum>()->GetIndexByName(Value);
	}
	
#pragma endregion
	
}

/**
 * 通用公共方法
 */
UCLASS()
class IAFRAMEWORK_API UIACommon : public UObject
{
	GENERATED_BODY()

private:

	static UIACommon* IAInst;

	AIADriver* Driver;

	UIATimerModule* TimerModule;
	
	UIAAssetModule* AssetModule;
	
	UIACacheModule* CacheModule;

	UIAUIModule* UIModule;
	
	APlayerController* PlayerController;
	
public:

	static UIACommon* Get();

	void SetDriver(AIADriver* InDriver);

	AIADriver* GetDriver() const;

	void SetTimerModule(UIATimerModule* InTimerModule);

	UIATimerModule* GetTimerModule() const;

	void SetAssetModule(UIAAssetModule* InAssetModule);

	UIAAssetModule* GetAssetModule() const;

	void SetCacheModule(UIACacheModule* InCacheModule);

	UIACacheModule* GetCacheModule() const;

	void SetUIModule(UIAUIModule* InUIModule);

	UIAUIModule* GetUIModule() const;
	
	void InitController(APlayerController* InController);

	APlayerController* GetController();

	//暂停游戏
	void SetPauseGame(bool IsPause);

	//获取是否暂停了游戏
	const bool IsPauseGame() const;
};
