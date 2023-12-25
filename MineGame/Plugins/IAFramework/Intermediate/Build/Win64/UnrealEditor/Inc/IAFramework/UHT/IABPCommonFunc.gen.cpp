// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Common/IABPCommonFunc.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIABPCommonFunc() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIABPCommonFunc();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIABPCommonFunc_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EUIPanelType();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	DEFINE_FUNCTION(UIABPCommonFunc::execHideUI)
	{
		P_GET_ENUM(EUIPanelType,Z_Param_InPanelType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIABPCommonFunc::HideUI(EUIPanelType(Z_Param_InPanelType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIABPCommonFunc::execShowUI)
	{
		P_GET_ENUM(EUIPanelType,Z_Param_InPanelType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UIABPCommonFunc::ShowUI(EUIPanelType(Z_Param_InPanelType));
		P_NATIVE_END;
	}
	void UIABPCommonFunc::StaticRegisterNativesUIABPCommonFunc()
	{
		UClass* Class = UIABPCommonFunc::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideUI", &UIABPCommonFunc::execHideUI },
			{ "ShowUI", &UIABPCommonFunc::execShowUI },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics
	{
		struct IABPCommonFunc_eventHideUI_Parms
		{
			EUIPanelType InPanelType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPanelType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPanelType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::NewProp_InPanelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::NewProp_InPanelType = { "InPanelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IABPCommonFunc_eventHideUI_Parms, InPanelType), Z_Construct_UEnum_IAFramework_EUIPanelType, METADATA_PARAMS(nullptr, 0) }; // 1432966391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::NewProp_InPanelType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::NewProp_InPanelType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "IABP" },
		{ "ModuleRelativePath", "Public/Common/IABPCommonFunc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIABPCommonFunc, nullptr, "HideUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::IABPCommonFunc_eventHideUI_Parms), Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIABPCommonFunc_HideUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIABPCommonFunc_HideUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics
	{
		struct IABPCommonFunc_eventShowUI_Parms
		{
			EUIPanelType InPanelType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPanelType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPanelType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::NewProp_InPanelType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::NewProp_InPanelType = { "InPanelType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IABPCommonFunc_eventShowUI_Parms, InPanelType), Z_Construct_UEnum_IAFramework_EUIPanelType, METADATA_PARAMS(nullptr, 0) }; // 1432966391
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::NewProp_InPanelType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::NewProp_InPanelType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "IABP" },
		{ "ModuleRelativePath", "Public/Common/IABPCommonFunc.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIABPCommonFunc, nullptr, "ShowUI", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::IABPCommonFunc_eventShowUI_Parms), Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIABPCommonFunc_ShowUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIABPCommonFunc_ShowUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIABPCommonFunc);
	UClass* Z_Construct_UClass_UIABPCommonFunc_NoRegister()
	{
		return UIABPCommonFunc::StaticClass();
	}
	struct Z_Construct_UClass_UIABPCommonFunc_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIABPCommonFunc_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIABPCommonFunc_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIABPCommonFunc_HideUI, "HideUI" }, // 3464955645
		{ &Z_Construct_UFunction_UIABPCommonFunc_ShowUI, "ShowUI" }, // 3420450908
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIABPCommonFunc_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe8\x93\x9d\xe5\x9b\xbe\xe5\x85\xa8\xe5\xb1\x80\xe6\x96\xb9\xe6\xb3\x95\n */" },
		{ "IncludePath", "Common/IABPCommonFunc.h" },
		{ "ModuleRelativePath", "Public/Common/IABPCommonFunc.h" },
		{ "ToolTip", "\xe8\x93\x9d\xe5\x9b\xbe\xe5\x85\xa8\xe5\xb1\x80\xe6\x96\xb9\xe6\xb3\x95" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIABPCommonFunc_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIABPCommonFunc>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIABPCommonFunc_Statics::ClassParams = {
		&UIABPCommonFunc::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIABPCommonFunc_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIABPCommonFunc_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIABPCommonFunc()
	{
		if (!Z_Registration_Info_UClass_UIABPCommonFunc.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIABPCommonFunc.OuterSingleton, Z_Construct_UClass_UIABPCommonFunc_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIABPCommonFunc.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIABPCommonFunc>()
	{
		return UIABPCommonFunc::StaticClass();
	}
	UIABPCommonFunc::UIABPCommonFunc(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIABPCommonFunc);
	UIABPCommonFunc::~UIABPCommonFunc() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IABPCommonFunc_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IABPCommonFunc_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIABPCommonFunc, UIABPCommonFunc::StaticClass, TEXT("UIABPCommonFunc"), &Z_Registration_Info_UClass_UIABPCommonFunc, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIABPCommonFunc), 1843218563U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IABPCommonFunc_h_2313980879(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IABPCommonFunc_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Common_IABPCommonFunc_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
