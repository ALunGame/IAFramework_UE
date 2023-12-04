// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/IAModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAModule() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAModule::StaticRegisterNativesUIAModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAModule);
	UClass* Z_Construct_UClass_UIAModule_NoRegister()
	{
		return UIAModule::StaticClass();
	}
	struct Z_Construct_UClass_UIAModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ModuleType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ModuleType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "Comment", "/*\n * \xe6\xa8\xa1\xe7\xbb\x84\n */" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Module/IAModule.h" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
		{ "ToolTip", "* \xe6\xa8\xa1\xe7\xbb\x84" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "/*\n\x09 * \n\x09 */" },
		{ "DisplayName", "\xe6\xa8\xa1\xe7\xbb\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Module/IAModule.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAModule, ModuleType), Z_Construct_UEnum_IAFramework_EGameModule, METADATA_PARAMS(Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_MetaData)) }; // 769984659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAModule_Statics::NewProp_ModuleType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAModule_Statics::ClassParams = {
		&UIAModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAModule()
	{
		if (!Z_Registration_Info_UClass_UIAModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAModule.OuterSingleton, Z_Construct_UClass_UIAModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAModule>()
	{
		return UIAModule::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAModule);
	UIAModule::~UIAModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAModule, UIAModule::StaticClass, TEXT("UIAModule"), &Z_Registration_Info_UClass_UIAModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAModule), 104149066U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_1001809070(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IAModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
