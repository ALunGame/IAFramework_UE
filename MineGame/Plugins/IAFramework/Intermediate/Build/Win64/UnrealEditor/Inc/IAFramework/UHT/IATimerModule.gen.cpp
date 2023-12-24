// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/IATimerModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIATimerModule() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATimerModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIATimerModule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIATimerModule::StaticRegisterNativesUIATimerModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIATimerModule);
	UClass* Z_Construct_UClass_UIATimerModule_NoRegister()
	{
		return UIATimerModule::StaticClass();
	}
	struct Z_Construct_UClass_UIATimerModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIATimerModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAModule,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIATimerModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Module/IATimerModule.h" },
		{ "ModuleRelativePath", "Public/Module/IATimerModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIATimerModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIATimerModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIATimerModule_Statics::ClassParams = {
		&UIATimerModule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIATimerModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIATimerModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIATimerModule()
	{
		if (!Z_Registration_Info_UClass_UIATimerModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIATimerModule.OuterSingleton, Z_Construct_UClass_UIATimerModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIATimerModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIATimerModule>()
	{
		return UIATimerModule::StaticClass();
	}
	UIATimerModule::UIATimerModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIATimerModule);
	UIATimerModule::~UIATimerModule() {}
	struct Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IATimerModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IATimerModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIATimerModule, UIATimerModule::StaticClass, TEXT("UIATimerModule"), &Z_Registration_Info_UClass_UIATimerModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIATimerModule), 946542064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IATimerModule_h_122174721(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IATimerModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IATimerModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
