// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Core/IADriver.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIADriver() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIADriver();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIADriver_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACenterModule_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void AIADriver::StaticRegisterNativesAIADriver()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AIADriver);
	UClass* Z_Construct_UClass_AIADriver_NoRegister()
	{
		return AIADriver::StaticClass();
	}
	struct Z_Construct_UClass_AIADriver_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Center;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AIADriver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIADriver_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\n* \xe6\xa1\x86\xe6\x9e\xb6\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83\n*/" },
		{ "IncludePath", "Core/IADriver.h" },
		{ "ModuleRelativePath", "Public/Core/IADriver.h" },
		{ "ToolTip", "* \xe6\xa1\x86\xe6\x9e\xb6\xe7\x9a\x84\xe4\xb8\xad\xe5\xbf\x83" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIADriver_Statics::NewProp_RootScene_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "//\xe7\xbb\x84\xe4\xbb\xb6\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/IADriver.h" },
		{ "ToolTip", "\xe7\xbb\x84\xe4\xbb\xb6" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIADriver_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x001000000208001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIADriver, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIADriver_Statics::NewProp_RootScene_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIADriver_Statics::NewProp_RootScene_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AIADriver_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "//\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/IADriver.h" },
		{ "ToolTip", "\xe4\xb8\xad\xe5\xa4\xae\xe6\xa8\xa1\xe7\xbb\x84" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AIADriver_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x001000000208001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AIADriver, Center), Z_Construct_UClass_UIACenterModule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AIADriver_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AIADriver_Statics::NewProp_Center_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AIADriver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIADriver_Statics::NewProp_RootScene,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AIADriver_Statics::NewProp_Center,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AIADriver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AIADriver>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AIADriver_Statics::ClassParams = {
		&AIADriver::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AIADriver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AIADriver_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AIADriver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AIADriver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AIADriver()
	{
		if (!Z_Registration_Info_UClass_AIADriver.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AIADriver.OuterSingleton, Z_Construct_UClass_AIADriver_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AIADriver.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<AIADriver>()
	{
		return AIADriver::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AIADriver);
	AIADriver::~AIADriver() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IADriver_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IADriver_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AIADriver, AIADriver::StaticClass, TEXT("AIADriver"), &Z_Registration_Info_UClass_AIADriver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AIADriver), 2694939798U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IADriver_h_3815518007(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IADriver_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Core_IADriver_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
