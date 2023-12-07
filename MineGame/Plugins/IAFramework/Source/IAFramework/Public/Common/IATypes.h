// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IATypes.generated.h"

/**
 * 框架结构
 */
UCLASS()
class IAFRAMEWORK_API UIATypes : public UObject
{
	GENERATED_BODY()
};

//框架自定义Debug输出类
#pragma region LogDebug

class IAFRAMEWORK_API DDRecord
{
private:
	//自身单例
	static TSharedPtr<DDRecord> RecordInst;

	//生成的字符串
	FString RecordInfo;

	//显示时间
	float ShowTime;

	//显示颜色
	FColor ShowColor;

public:

	//打印模式, 0 : Debug, 1 : Log, 2 : Warning, 3 : Error
	uint8 PatternID;

public:

	//构造函数
	inline DDRecord(): ShowTime(0), PatternID(0)
	{
	}

	~DDRecord() {}

	static TSharedPtr<DDRecord> Get();

	//设定参数
	void InitParam(float InTime, FColor InColor)
	{
		ShowTime = InTime;
		ShowColor = InColor;
	}

	//执行打印方法
	void Output() {
		switch (PatternID)
		{
		case 0:
		{
			if (GEngine)
				GEngine->AddOnScreenDebugMessage(-1, ShowTime, ShowColor, TCHAR_TO_UTF8(*RecordInfo));
		}
		break;
		case 1:
		{
			UE_LOG(LogTemp, Log,  TEXT("%s"), *RecordInfo);
		}
		break;
		case 2:
		{
			UE_LOG(LogTemp, Warning, TEXT("%s"), *RecordInfo);
		}
		break;
		case 3:
		{
			UE_LOG(LogTemp, Error, TEXT("%s"), *RecordInfo);
		}
		break;
	default: 
		break;
		}
		//清空字符串
		RecordInfo.Empty();
	}

	//重写操作符<<
	DDRecord& operator<<(FString Info) { RecordInfo.Append(Info); return *this; }
	DDRecord& operator<<(FName Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FText Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(const char* Info) { RecordInfo += Info; return *this; }
	DDRecord& operator<<(const char Info) { RecordInfo.AppendChar(Info); return *this; }
	DDRecord& operator<<(const TCHAR* Info) { RecordInfo += Info; return *this; }
	DDRecord& operator<<(int32 Info) { RecordInfo.Append(FString::FromInt(Info)); return *this; }
	DDRecord& operator<<(float Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	DDRecord& operator<<(double Info) { RecordInfo.Append(FString::SanitizeFloat(Info)); return *this; }
	DDRecord& operator<<(bool Info) { RecordInfo.Append(Info ? FString("true") : FString("false")); return *this; }
	DDRecord& operator<<(FVector2D Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FVector Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FRotator Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FQuat Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FTransform Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FMatrix Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FLinearColor Info) { RecordInfo.Append(Info.ToString()); return *this; }
	DDRecord& operator<<(FMargin Info) { RecordInfo.Append((FString::SanitizeFloat(Info.Left) + FString(" , ") + FString::SanitizeFloat(Info.Top) + FString(" , ") + FString::SanitizeFloat(Info.Right) + FString(" , ") + FString::SanitizeFloat(Info.Bottom))); return *this; }

	/*
	 * 根据上一次日志上下文，直接输出
	 */
	void operator<<(DDRecord& Record) const { Record.Output(); }
	
};

//优先级从左至右
//DDRecord::Get() << FString("sfdewhe") << FName << int << float << DDRecord::Get();

#pragma endregion

