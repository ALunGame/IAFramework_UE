// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/IAPanelWidget.h"
#include "IAFramework/Public/Common/IATypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAPanelWidget() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAPanelWidget();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAPanelWidget_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUserWidget();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUINature();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	struct IAPanelWidget_eventDisplayEnterMovie_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		IAPanelWidget_eventDisplayEnterMovie_Parms()
			: ReturnValue(0)
		{
		}
	};
	struct IAPanelWidget_eventDisplayLeaveMovie_Parms
	{
		float ReturnValue;

		/** Constructor, initializes return property only **/
		IAPanelWidget_eventDisplayLeaveMovie_Parms()
			: ReturnValue(0)
		{
		}
	};
	static FName NAME_UIAPanelWidget_DisplayEnterMovie = FName(TEXT("DisplayEnterMovie"));
	float UIAPanelWidget::DisplayEnterMovie()
	{
		IAPanelWidget_eventDisplayEnterMovie_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UIAPanelWidget_DisplayEnterMovie),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UIAPanelWidget_DisplayLeaveMovie = FName(TEXT("DisplayLeaveMovie"));
	float UIAPanelWidget::DisplayLeaveMovie()
	{
		IAPanelWidget_eventDisplayLeaveMovie_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UIAPanelWidget_DisplayLeaveMovie),&Parms);
		return Parms.ReturnValue;
	}
	void UIAPanelWidget::StaticRegisterNativesUIAPanelWidget()
	{
	}
	struct Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAPanelWidget_eventDisplayEnterMovie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\x8a\xa8\xe7\x94\xbb\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/UI/IAPanelWidget.h" },
		{ "ToolTip", "\xe5\x8a\xa8\xe7\x94\xbb\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAPanelWidget, nullptr, "DisplayEnterMovie", nullptr, nullptr, sizeof(IAPanelWidget_eventDisplayEnterMovie_Parms), Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAPanelWidget_eventDisplayLeaveMovie_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UI/IAPanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAPanelWidget, nullptr, "DisplayLeaveMovie", nullptr, nullptr, sizeof(IAPanelWidget_eventDisplayLeaveMovie_Parms), Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAPanelWidget);
	UClass* Z_Construct_UClass_UIAPanelWidget_NoRegister()
	{
		return UIAPanelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIAPanelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UINature_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UINature;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAPanelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAPanelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAPanelWidget_DisplayEnterMovie, "DisplayEnterMovie" }, // 2849526652
		{ &Z_Construct_UFunction_UIAPanelWidget_DisplayLeaveMovie, "DisplayLeaveMovie" }, // 405018921
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAPanelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IAPanelWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IAPanelWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAPanelWidget_Statics::NewProp_UINature_MetaData[] = {
		{ "Category", "IAPanelWidget" },
		{ "ModuleRelativePath", "Public/UI/IAPanelWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIAPanelWidget_Statics::NewProp_UINature = { "UINature", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAPanelWidget, UINature), Z_Construct_UScriptStruct_FUINature, METADATA_PARAMS(Z_Construct_UClass_UIAPanelWidget_Statics::NewProp_UINature_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAPanelWidget_Statics::NewProp_UINature_MetaData)) }; // 2429838510
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAPanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAPanelWidget_Statics::NewProp_UINature,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAPanelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAPanelWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAPanelWidget_Statics::ClassParams = {
		&UIAPanelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIAPanelWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAPanelWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAPanelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAPanelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAPanelWidget()
	{
		if (!Z_Registration_Info_UClass_UIAPanelWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAPanelWidget.OuterSingleton, Z_Construct_UClass_UIAPanelWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAPanelWidget.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAPanelWidget>()
	{
		return UIAPanelWidget::StaticClass();
	}
	UIAPanelWidget::UIAPanelWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAPanelWidget);
	UIAPanelWidget::~UIAPanelWidget() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAPanelWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAPanelWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAPanelWidget, UIAPanelWidget::StaticClass, TEXT("UIAPanelWidget"), &Z_Registration_Info_UClass_UIAPanelWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAPanelWidget), 3413582972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAPanelWidget_h_666644748(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAPanelWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAPanelWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
