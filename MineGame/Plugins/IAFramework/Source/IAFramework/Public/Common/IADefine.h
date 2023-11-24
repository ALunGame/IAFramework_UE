// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IATypes.h"
#include "IADefine.generated.h"

/**
 * 框架宏定义
 */
UCLASS()
class IAFRAMEWORK_API UIADefine : public UObject
{
	GENERATED_BODY()
};



#define IAOBJFUNC_ONE(FuncName, ParamType1, ParamName1); \
	struct FuncName##Param : IAParam \
	{ \
		struct \
		{ \
			ParamType1 ParamName1; \
		} Parameter; \
		ParamType1 ParamName1() { return Parameter.ParamName1; } \
		FuncName##Param() { ParamPtr = &Parameter; } \
	};\
	FuncName##Param* FuncName##RT(EGameModule ModuleType, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup = ObjectGroup; \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	FuncName##Param* FuncName##RT(EGameModule ModuleType, EAgreementType AgreementType, FName ObjName, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	FuncName##Param* FuncName##RT(EGameModule ModuleType, FName ObjName, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = EAgreementType::SelfObject; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	void FuncName(EGameModule ModuleType, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup = ObjectGroup; \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	} \
	void FuncName(EGameModule ModuleType, EAgreementType AgreementType, FName ObjName, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	} \
	void FuncName(EGameModule ModuleType, FName ObjName, FName FunctionName, ParamType1 ParamName1) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = EAgreementType::SelfObject; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	}

#define IAOBJFUNC_TWO(FuncName, ParamType1, ParamName1, ParamType2, ParamName2); \
	struct FuncName##Param : IAParam \
	{ \
		struct \
		{ \
			ParamType1 ParamName1; \
			ParamType2 ParamName2; \
		} Parameter; \
		ParamType1 ParamName1() { return Parameter.ParamName1; } \
		ParamType2 ParamName2() { return Parameter.ParamName2; } \
		FuncName##Param() { ParamPtr = &Parameter; } \
	};\
	FuncName##Param* FuncName##RT(EGameModule ModuleType, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup = ObjectGroup; \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	FuncName##Param* FuncName##RT(EGameModule ModuleType, EAgreementType AgreementType, FName ObjName, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	FuncName##Param* FuncName##RT(EGameModule ModuleType, FName ObjName, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = EAgreementType::SelfObject; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		return Param; \
	} \
	void FuncName(EGameModule ModuleType, EAgreementType AgreementType, TArray<FName> ObjectGroup, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup = ObjectGroup; \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	} \
	void FuncName(EGameModule ModuleType, EAgreementType AgreementType, FName ObjName, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = AgreementType; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	} \
	void FuncName(EGameModule ModuleType, FName ObjName, FName FunctionName, ParamType1 ParamName1, ParamType2 ParamName2) \
	{ \
		IAObjectAgreement Agreement; \
		Agreement.ModuleType = ModuleType; \
		Agreement.AgreementType = EAgreementType::SelfObject; \
		Agreement.ObjectGroup.Add(ObjName); \
		Agreement.FunctionName = FunctionName; \
		FuncName##Param* Param = new FuncName##Param(); \
		Param->Parameter.ParamName1 = ParamName1; \
		Param->Parameter.ParamName2 = ParamName2; \
		ExecuteFunction(Agreement, Param); \
		delete Param; \
	}