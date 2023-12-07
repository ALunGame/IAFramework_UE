// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/IAUIModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAUIModule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIARootWidget_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUIModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUIModule_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUIPanelConfig_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAUIModule::StaticRegisterNativesUIAUIModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAUIModule);
	UClass* Z_Construct_UClass_UIAUIModule_NoRegister()
	{
		return UIAUIModule::StaticClass();
	}
	struct Z_Construct_UClass_UIAUIModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIRootWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_UIRootWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UIPanelConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UIPanelConfig;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAUIModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAModule,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "UI/IAUIModule.h" },
		{ "ModuleRelativePath", "Public/UI/IAUIModule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIRootWidgetClass_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "//UI\xe6\xa0\xb9\n" },
		{ "ModuleRelativePath", "Public/UI/IAUIModule.h" },
		{ "ToolTip", "UI\xe6\xa0\xb9" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIRootWidgetClass = { "UIRootWidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAUIModule, UIRootWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UIARootWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIRootWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIRootWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIPanelConfig_MetaData[] = {
		{ "Category", "IA" },
		{ "ModuleRelativePath", "Public/UI/IAUIModule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIPanelConfig = { "UIPanelConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAUIModule, UIPanelConfig), Z_Construct_UClass_UIAUIPanelConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIPanelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIPanelConfig_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIModule_Statics::NewProp_RootWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/IAUIModule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIAUIModule_Statics::NewProp_RootWidget = { "RootWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAUIModule, RootWidget), Z_Construct_UClass_UIARootWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UIAUIModule_Statics::NewProp_RootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIModule_Statics::NewProp_RootWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAUIModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIRootWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAUIModule_Statics::NewProp_UIPanelConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAUIModule_Statics::NewProp_RootWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAUIModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAUIModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAUIModule_Statics::ClassParams = {
		&UIAUIModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAUIModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIAUIModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAUIModule()
	{
		if (!Z_Registration_Info_UClass_UIAUIModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAUIModule.OuterSingleton, Z_Construct_UClass_UIAUIModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAUIModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAUIModule>()
	{
		return UIAUIModule::StaticClass();
	}
	UIAUIModule::UIAUIModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAUIModule);
	UIAUIModule::~UIAUIModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAUIModule, UIAUIModule::StaticClass, TEXT("UIAUIModule"), &Z_Registration_Info_UClass_UIAUIModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAUIModule), 678050318U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIModule_h_1388298937(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
