// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/IACacheModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACacheModule() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheActorNode_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheModule();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheModule_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheObjectNode_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheUserWidgetNode_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACacheModule::StaticRegisterNativesUIACacheModule()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACacheModule);
	UClass* Z_Construct_UClass_UIACacheModule_NoRegister()
	{
		return UIACacheModule::StaticClass();
	}
	struct Z_Construct_UClass_UIACacheModule_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorCache_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorCache;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ObjectCache_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ObjectCache;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WidgetCache_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetCache_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetCache_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_WidgetCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACacheModule_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIAModule,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheModule_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Module/IACacheModule.h" },
		{ "ModuleRelativePath", "Public/Module/IACacheModule.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_ValueProp = { "ActorCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UIACacheActorNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_Key_KeyProp = { "ActorCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Module/IACacheModule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache = { "ActorCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIACacheModule, ActorCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_ValueProp = { "ObjectCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UIACacheObjectNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_Key_KeyProp = { "ObjectCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Module/IACacheModule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache = { "ObjectCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIACacheModule, ObjectCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_ValueProp = { "WidgetCache", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UIACacheUserWidgetNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_Key_KeyProp = { "WidgetCache_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_MetaData[] = {
		{ "ModuleRelativePath", "Public/Module/IACacheModule.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache = { "WidgetCache", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIACacheModule, WidgetCache), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIACacheModule_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ActorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_ObjectCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheModule_Statics::NewProp_WidgetCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACacheModule_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACacheModule>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACacheModule_Statics::ClassParams = {
		&UIACacheModule::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIACacheModule_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheModule_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIACacheModule_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheModule_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACacheModule()
	{
		if (!Z_Registration_Info_UClass_UIACacheModule.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACacheModule.OuterSingleton, Z_Construct_UClass_UIACacheModule_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACacheModule.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACacheModule>()
	{
		return UIACacheModule::StaticClass();
	}
	UIACacheModule::UIACacheModule() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACacheModule);
	UIACacheModule::~UIACacheModule() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACacheModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACacheModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACacheModule, UIACacheModule::StaticClass, TEXT("UIACacheModule"), &Z_Registration_Info_UClass_UIACacheModule, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACacheModule), 2370838996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACacheModule_h_3436141370(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACacheModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_IACacheModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
