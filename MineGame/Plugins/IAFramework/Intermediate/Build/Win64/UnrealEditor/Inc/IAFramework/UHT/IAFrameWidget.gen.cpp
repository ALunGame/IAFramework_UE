// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/IAFrameWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAFrameWidget() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAFrameWidget();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAFrameWidget_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUserWidget();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_ELayoutType();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	DEFINE_FUNCTION(UIAFrameWidget::execExitCallBack)
	{
		P_GET_ENUM(ELayoutType,Z_Param_LayoutType);
		P_GET_OBJECT(UPanelWidget,Z_Param_InLayout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitCallBack(ELayoutType(Z_Param_LayoutType),Z_Param_InLayout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execAcceptPanelWidget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BackName);
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptPanelWidget(Z_Param_BackName,Z_Param_BackWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execAcceptAdvancePanel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_BackName);
		P_GET_OBJECT(UUserWidget,Z_Param_BackWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AcceptAdvancePanel(Z_Param_BackName,Z_Param_BackWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execExitUIPanel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PanelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExitUIPanel(Z_Param_PanelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execHideUIPanel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PanelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideUIPanel(Z_Param_PanelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execShowUIPanel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PanelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowUIPanel(Z_Param_PanelName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UIAFrameWidget::execAdvanceLoadPanel)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PanelName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AdvanceLoadPanel(Z_Param_PanelName);
		P_NATIVE_END;
	}
	void UIAFrameWidget::StaticRegisterNativesUIAFrameWidget()
	{
		UClass* Class = UIAFrameWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AcceptAdvancePanel", &UIAFrameWidget::execAcceptAdvancePanel },
			{ "AcceptPanelWidget", &UIAFrameWidget::execAcceptPanelWidget },
			{ "AdvanceLoadPanel", &UIAFrameWidget::execAdvanceLoadPanel },
			{ "ExitCallBack", &UIAFrameWidget::execExitCallBack },
			{ "ExitUIPanel", &UIAFrameWidget::execExitUIPanel },
			{ "HideUIPanel", &UIAFrameWidget::execHideUIPanel },
			{ "ShowUIPanel", &UIAFrameWidget::execShowUIPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics
	{
		struct IAFrameWidget_eventAcceptAdvancePanel_Parms
		{
			FName BackName;
			UUserWidget* BackWidget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackName = { "BackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventAcceptAdvancePanel_Parms, BackName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget = { "BackWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventAcceptAdvancePanel_Parms, BackWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::NewProp_BackWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x8f\x90\xe5\x89\x8d\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe6\x8f\x90\xe5\x89\x8d\xe5\x8a\xa0\xe8\xbd\xbd\xe9\x9d\xa2\xe6\x9d\xbf\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "AcceptAdvancePanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::IAFrameWidget_eventAcceptAdvancePanel_Parms), Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics
	{
		struct IAFrameWidget_eventAcceptPanelWidget_Parms
		{
			FName BackName;
			UUserWidget* BackWidget;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_BackName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackName = { "BackName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventAcceptPanelWidget_Parms, BackName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget = { "BackWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventAcceptPanelWidget_Parms, BackWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::NewProp_BackWidget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe6\x97\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe6\x97\xb6\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x9b\x9e\xe8\xb0\x83\xe5\x87\xbd\xe6\x95\xb0" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "AcceptPanelWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::IAFrameWidget_eventAcceptPanelWidget_Parms), Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics
	{
		struct IAFrameWidget_eventAdvanceLoadPanel_Parms
		{
			FName PanelName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventAdvanceLoadPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x8f\x90\xe5\x89\x8d\xe5\x8a\xa0\xe8\xbd\xbd\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe6\x8f\x90\xe5\x89\x8d\xe5\x8a\xa0\xe8\xbd\xbd" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "AdvanceLoadPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::IAFrameWidget_eventAdvanceLoadPanel_Parms), Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics
	{
		struct IAFrameWidget_eventExitCallBack_Parms
		{
			ELayoutType LayoutType;
			UPanelWidget* InLayout;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_LayoutType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LayoutType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InLayout_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InLayout;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_LayoutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_LayoutType = { "LayoutType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventExitCallBack_Parms, LayoutType), Z_Construct_UEnum_IAFramework_ELayoutType, METADATA_PARAMS(nullptr, 0) }; // 3482150685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_InLayout = { "InLayout", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventExitCallBack_Parms, InLayout), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_InLayout_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_LayoutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_LayoutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::NewProp_InLayout,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe5\xa4\x84\xe7\x90\x86UI\xe9\x9d\xa2\xe6\x9d\xbf\xe9\x94\x80\xe6\xaf\x81\xe5\x90\x8e\xe7\x9a\x84\xe7\x88\xb6\xe6\x8e\xa7\xe4\xbb\xb6\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe5\xa4\x84\xe7\x90\x86UI\xe9\x9d\xa2\xe6\x9d\xbf\xe9\x94\x80\xe6\xaf\x81\xe5\x90\x8e\xe7\x9a\x84\xe7\x88\xb6\xe6\x8e\xa7\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "ExitCallBack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::IAFrameWidget_eventExitCallBack_Parms), Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_ExitCallBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_ExitCallBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics
	{
		struct IAFrameWidget_eventExitUIPanel_Parms
		{
			FName PanelName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventExitUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe9\x94\x80\xe6\xaf\x81UI\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe9\x94\x80\xe6\xaf\x81UI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "ExitUIPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::IAFrameWidget_eventExitUIPanel_Parms), Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics
	{
		struct IAFrameWidget_eventHideUIPanel_Parms
		{
			FName PanelName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventHideUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe9\x9a\x90\xe8\x97\x8fUI\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe9\x9a\x90\xe8\x97\x8fUI" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "HideUIPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::IAFrameWidget_eventHideUIPanel_Parms), Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_HideUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_HideUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics
	{
		struct IAFrameWidget_eventShowUIPanel_Parms
		{
			FName PanelName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PanelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::NewProp_PanelName = { "PanelName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(IAFrameWidget_eventShowUIPanel_Parms, PanelName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::NewProp_PanelName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//\xe6\x98\xbe\xe7\xa4\xba\xe9\x9d\xa2\xe6\x9d\xbf \xe9\x9d\xa2\xe6\x9d\xbf = UI\xe5\x8a\x9f\xe8\x83\xbd\xe9\x9d\xa2\xe6\x9d\xbf\n" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe6\x98\xbe\xe7\xa4\xba\xe9\x9d\xa2\xe6\x9d\xbf \xe9\x9d\xa2\xe6\x9d\xbf = UI\xe5\x8a\x9f\xe8\x83\xbd\xe9\x9d\xa2\xe6\x9d\xbf" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UIAFrameWidget, nullptr, "ShowUIPanel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::IAFrameWidget_eventShowUIPanel_Parms), Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAFrameWidget);
	UClass* Z_Construct_UClass_UIAFrameWidget_NoRegister()
	{
		return UIAFrameWidget::StaticClass();
	}
	struct Z_Construct_UClass_UIAFrameWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveOverlay_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveOverlay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnActiveOverlay_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnActiveOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnActiveOverlay;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveCanvas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCanvas;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UnActiveCanvas_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnActiveCanvas_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_UnActiveCanvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskPanel_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaskPanel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAFrameWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UIAFrameWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UIAFrameWidget_AcceptAdvancePanel, "AcceptAdvancePanel" }, // 2037743703
		{ &Z_Construct_UFunction_UIAFrameWidget_AcceptPanelWidget, "AcceptPanelWidget" }, // 2465445268
		{ &Z_Construct_UFunction_UIAFrameWidget_AdvanceLoadPanel, "AdvanceLoadPanel" }, // 3663447590
		{ &Z_Construct_UFunction_UIAFrameWidget_ExitCallBack, "ExitCallBack" }, // 836102127
		{ &Z_Construct_UFunction_UIAFrameWidget_ExitUIPanel, "ExitUIPanel" }, // 3659371509
		{ &Z_Construct_UFunction_UIAFrameWidget_HideUIPanel, "HideUIPanel" }, // 2149281232
		{ &Z_Construct_UFunction_UIAFrameWidget_ShowUIPanel, "ShowUIPanel" }, // 2100946037
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe7\xae\xa1\xe7\x90\x86\xe7\xb1\xbbWidget\n */" },
		{ "IncludePath", "UI/IAFrameWidget.h" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe7\xae\xa1\xe7\x90\x86\xe7\xb1\xbbWidget" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay_Inner = { "ActiveOverlay", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay_MetaData[] = {
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98Overlay\xe6\x8e\xa7\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98Overlay\xe6\x8e\xa7\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay = { "ActiveOverlay", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAFrameWidget, ActiveOverlay), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay_Inner = { "UnActiveOverlay", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay = { "UnActiveOverlay", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAFrameWidget, UnActiveOverlay), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas_Inner = { "ActiveCanvas", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas_MetaData[] = {
		{ "Comment", "//\xe4\xbf\x9d\xe5\xad\x98""Canvas\xe6\x8e\xa7\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98""Canvas\xe6\x8e\xa7\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas = { "ActiveCanvas", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAFrameWidget, ActiveCanvas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas_Inner = { "UnActiveCanvas", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas = { "UnActiveCanvas", nullptr, (EPropertyFlags)0x0020088000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAFrameWidget, UnActiveCanvas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_MaskPanel_MetaData[] = {
		{ "Comment", "//\xe9\x81\xae\xe7\xbd\xa9\xe5\x9b\xbe\xe7\x89\x87\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAFrameWidget.h" },
		{ "ToolTip", "\xe9\x81\xae\xe7\xbd\xa9\xe5\x9b\xbe\xe7\x89\x87" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_MaskPanel = { "MaskPanel", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAFrameWidget, MaskPanel), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_MaskPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_MaskPanel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAFrameWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveOverlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_ActiveCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_UnActiveCanvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAFrameWidget_Statics::NewProp_MaskPanel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAFrameWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAFrameWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAFrameWidget_Statics::ClassParams = {
		&UIAFrameWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UIAFrameWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAFrameWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAFrameWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAFrameWidget()
	{
		if (!Z_Registration_Info_UClass_UIAFrameWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAFrameWidget.OuterSingleton, Z_Construct_UClass_UIAFrameWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAFrameWidget.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAFrameWidget>()
	{
		return UIAFrameWidget::StaticClass();
	}
	UIAFrameWidget::UIAFrameWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAFrameWidget);
	UIAFrameWidget::~UIAFrameWidget() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAFrameWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAFrameWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAFrameWidget, UIAFrameWidget::StaticClass, TEXT("UIAFrameWidget"), &Z_Registration_Info_UClass_UIAFrameWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAFrameWidget), 3018154819U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAFrameWidget_h_4068498706(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAFrameWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAFrameWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
