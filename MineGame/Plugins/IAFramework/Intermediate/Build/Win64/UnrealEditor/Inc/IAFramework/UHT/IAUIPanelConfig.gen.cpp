// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/UI/IAUIPanelConfig.h"
#include "IAFramework/Public/Game/IAGameTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAUIPanelConfig() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUIPanelConfig();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAUIPanelConfig_NoRegister();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIPanelConfig();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAUIPanelConfig::StaticRegisterNativesUIAUIPanelConfig()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAUIPanelConfig);
	UClass* Z_Construct_UClass_UIAUIPanelConfig_NoRegister()
	{
		return UIAUIPanelConfig::StaticClass();
	}
	struct Z_Construct_UClass_UIAUIPanelConfig_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PanelConfig_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PanelConfig_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PanelConfig;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAUIPanelConfig_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIPanelConfig_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UI/IAUIPanelConfig.h" },
		{ "ModuleRelativePath", "Public/UI/IAUIPanelConfig.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig_Inner = { "PanelConfig", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FUIPanelConfig, METADATA_PARAMS(nullptr, 0) }; // 4281990429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig_MetaData[] = {
		{ "Category", "IAUIPanelConfig" },
		{ "DisplayName", "UI\xe7\x95\x8c\xe9\x9d\xa2\xe9\x85\x8d\xe7\xbd\xae" },
		{ "ModuleRelativePath", "Public/UI/IAUIPanelConfig.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig = { "PanelConfig", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAUIPanelConfig, PanelConfig), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig_MetaData)) }; // 4281990429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAUIPanelConfig_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAUIPanelConfig_Statics::NewProp_PanelConfig,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAUIPanelConfig_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAUIPanelConfig>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAUIPanelConfig_Statics::ClassParams = {
		&UIAUIPanelConfig::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAUIPanelConfig_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIPanelConfig_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAUIPanelConfig_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAUIPanelConfig_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAUIPanelConfig()
	{
		if (!Z_Registration_Info_UClass_UIAUIPanelConfig.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAUIPanelConfig.OuterSingleton, Z_Construct_UClass_UIAUIPanelConfig_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAUIPanelConfig.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAUIPanelConfig>()
	{
		return UIAUIPanelConfig::StaticClass();
	}
	UIAUIPanelConfig::UIAUIPanelConfig(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAUIPanelConfig);
	UIAUIPanelConfig::~UIAUIPanelConfig() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIPanelConfig_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIPanelConfig_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAUIPanelConfig, UIAUIPanelConfig::StaticClass, TEXT("UIAUIPanelConfig"), &Z_Registration_Info_UClass_UIAUIPanelConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAUIPanelConfig), 2914663118U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIPanelConfig_h_3632292828(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIPanelConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_UI_IAUIPanelConfig_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
