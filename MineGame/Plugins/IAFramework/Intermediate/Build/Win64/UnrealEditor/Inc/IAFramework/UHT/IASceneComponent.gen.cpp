// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Object/Actor/IASceneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIASceneComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAOO_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIASceneComponent();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIASceneComponent_NoRegister();
	IAFRAMEWORK_API UEnum* Z_Construct_UEnum_IAFramework_EGameModule();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIASceneComponent::StaticRegisterNativesUIASceneComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIASceneComponent);
	UClass* Z_Construct_UClass_UIASceneComponent_NoRegister()
	{
		return UIASceneComponent::StaticClass();
	}
	struct Z_Construct_UClass_UIASceneComponent_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIASceneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIASceneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "Object/Actor/IASceneComponent.h" },
		{ "ModuleRelativePath", "Public/Object/Actor/IASceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType_MetaData[] = {
		{ "Category", "IA" },
		{ "DisplayName", "\xe6\xa8\xa1\xe7\xbb\x84\xe7\xb1\xbb\xe5\x9e\x8b" },
		{ "ModuleRelativePath", "Public/Object/Actor/IASceneComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType = { "ModuleType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIASceneComponent, ModuleType), Z_Construct_UEnum_IAFramework_EGameModule, METADATA_PARAMS(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType_MetaData)) }; // 1814171180
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "//\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d\xe5\xad\x97,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba,\xe8\xaf\xb4\xe6\x98\x8e\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a,\xe4\xb8\x8d\xe4\xb8\xba\xe7\xa9\xba\xe5\xb0\xb1\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a\n" },
		{ "ModuleRelativePath", "Public/Object/Actor/IASceneComponent.h" },
		{ "ToolTip", "\xe5\xaf\xb9\xe8\xb1\xa1\xe5\x90\x8d\xe5\xad\x97,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba,\xe8\xaf\xb4\xe6\x98\x8e\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a,\xe4\xb8\x8d\xe4\xb8\xba\xe7\xa9\xba\xe5\xb0\xb1\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIASceneComponent, ObjectName), METADATA_PARAMS(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ClassName_MetaData[] = {
		{ "Category", "IA" },
		{ "Comment", "//\xe7\xb1\xbb\xe5\x90\x8d\xe5\xad\x97,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba,\xe8\xaf\xb4\xe6\x98\x8e\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a,\xe4\xb8\x8d\xe4\xb8\xba\xe7\xa9\xba\xe5\xb0\xb1\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a\n" },
		{ "ModuleRelativePath", "Public/Object/Actor/IASceneComponent.h" },
		{ "ToolTip", "\xe7\xb1\xbb\xe5\x90\x8d\xe5\xad\x97,\xe5\xa6\x82\xe6\x9e\x9c\xe4\xb8\xba\xe7\xa9\xba,\xe8\xaf\xb4\xe6\x98\x8e\xe8\xa6\x81\xe6\x89\x8b\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a,\xe4\xb8\x8d\xe4\xb8\xba\xe7\xa9\xba\xe5\xb0\xb1\xe6\x98\xaf\xe8\x87\xaa\xe5\x8a\xa8\xe6\x8c\x87\xe5\xae\x9a" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ClassName = { "ClassName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIASceneComponent, ClassName), METADATA_PARAMS(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIASceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ModuleType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIASceneComponent_Statics::NewProp_ClassName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UIASceneComponent_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIAOO_NoRegister, (int32)VTABLE_OFFSET(UIASceneComponent, IIAOO), false },  // 1876789362
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIASceneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIASceneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIASceneComponent_Statics::ClassParams = {
		&UIASceneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIASceneComponent_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIASceneComponent_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UIASceneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIASceneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIASceneComponent()
	{
		if (!Z_Registration_Info_UClass_UIASceneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIASceneComponent.OuterSingleton, Z_Construct_UClass_UIASceneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIASceneComponent.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIASceneComponent>()
	{
		return UIASceneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIASceneComponent);
	UIASceneComponent::~UIASceneComponent() {}
	struct Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Actor_IASceneComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Actor_IASceneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIASceneComponent, UIASceneComponent::StaticClass, TEXT("UIASceneComponent"), &Z_Registration_Info_UClass_UIASceneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIASceneComponent), 3885311276U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Actor_IASceneComponent_h_3644577035(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Actor_IASceneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Actor_IASceneComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
