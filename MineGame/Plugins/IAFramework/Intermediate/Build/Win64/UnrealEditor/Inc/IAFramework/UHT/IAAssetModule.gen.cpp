// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Asset/IAAssetModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAAssetModule() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetModule_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAAssetModule::StaticRegisterNativesUIAAssetModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAAssetModule);
	UClass* Z_Construct_UClass_UIAAssetModule_NoRegister()
	{
		return UIAAssetModule::StaticClass();
	}
	struct Z_Construct_UClass_UIAAssetModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAAssetModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAModule,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAAssetModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Asset/IAAssetModule.h" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAAssetModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAAssetModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAAssetModule_Statics::ClassParams = {
		&UIAAssetModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIAAssetModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAAssetModule()
	{
		if (!Z_Registration_Info_UClass_UIAAssetModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAAssetModule.OuterSingleton, Z_Construct_UClass_UIAAssetModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAAssetModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAAssetModule>()
	{
		return UIAAssetModule::StaticClass();
	}
	UIAAssetModule::UIAAssetModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAAssetModule);
	UIAAssetModule::~UIAAssetModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAAssetModule, UIAAssetModule::StaticClass, TEXT("UIAAssetModule"), &Z_Registration_Info_UClass_UIAAssetModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAAssetModule), 1135966609U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetModule_h_2610689129(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
