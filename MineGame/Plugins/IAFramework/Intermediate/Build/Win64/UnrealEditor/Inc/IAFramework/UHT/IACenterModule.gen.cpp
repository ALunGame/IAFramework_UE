// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/IACenterModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACenterModule() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACenterModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACenterModule_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACenterModule::StaticRegisterNativesUIACenterModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACenterModule);
	UClass* Z_Construct_UClass_UIACenterModule_NoRegister()
	{
		return UIACenterModule::StaticClass();
	}
	struct Z_Construct_UClass_UIACenterModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACenterModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAModule,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACenterModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n * \xe4\xb8\xad\xe5\xbf\x83\xe6\xa8\xa1\xe7\xbb\x84\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Module/IACenterModule.h" },
		{ "ModuleRelativePath", "Public/Module/IACenterModule.h" },
		{ "ToolTip", "* \xe4\xb8\xad\xe5\xbf\x83\xe6\xa8\xa1\xe7\xbb\x84" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACenterModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACenterModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACenterModule_Statics::ClassParams = {
		&UIACenterModule::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIACenterModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACenterModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACenterModule()
	{
		if (!Z_Registration_Info_UClass_UIACenterModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACenterModule.OuterSingleton, Z_Construct_UClass_UIACenterModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACenterModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACenterModule>()
	{
		return UIACenterModule::StaticClass();
	}
	UIACenterModule::UIACenterModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACenterModule);
	UIACenterModule::~UIACenterModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACenterModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACenterModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACenterModule, UIACenterModule::StaticClass, TEXT("UIACenterModule"), &Z_Registration_Info_UClass_UIACenterModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACenterModule), 3141412496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACenterModule_h_132404714(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACenterModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACenterModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
