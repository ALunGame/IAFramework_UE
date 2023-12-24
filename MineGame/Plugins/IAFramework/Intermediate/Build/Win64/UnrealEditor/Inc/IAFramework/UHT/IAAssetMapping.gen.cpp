// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Asset/DataAsset/IAAssetMapping.h"
#include "IAFramework/Public/Asset/IAAssetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAAssetMapping() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetMapping();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetMapping_NoRegister();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FClassAsset();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FObjectAsset();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAAssetMapping::StaticRegisterNativesUIAAssetMapping()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAAssetMapping);
	UClass* Z_Construct_UClass_UIAAssetMapping_NoRegister()
	{
		return UIAAssetMapping::StaticClass();
	}
	struct Z_Construct_UClass_UIAAssetMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ObjectData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ObjectData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClassData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ClassData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAAssetMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAAssetMapping_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \xe9\x80\x9a\xe7\x94\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\x98\xa0\xe5\xb0\x84\n */" },
		{ "IncludePath", "Asset/DataAsset/IAAssetMapping.h" },
		{ "ModuleRelativePath", "Public/Asset/DataAsset/IAAssetMapping.h" },
		{ "ToolTip", "\xe9\x80\x9a\xe7\x94\xa8\xe7\x9a\x84\xe8\xb5\x84\xe6\xba\x90\xe6\x98\xa0\xe5\xb0\x84" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData_Inner = { "ObjectData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FObjectAsset, METADATA_PARAMS(nullptr, 0) }; // 1274688051
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData_MetaData[] = {
		{ "Category", "IAAssetMapping" },
		{ "ModuleRelativePath", "Public/Asset/DataAsset/IAAssetMapping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData = { "ObjectData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAAssetMapping, ObjectData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData_MetaData)) }; // 1274688051
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData_Inner = { "ClassData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FClassAsset, METADATA_PARAMS(nullptr, 0) }; // 3651871645
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData_MetaData[] = {
		{ "Category", "IAAssetMapping" },
		{ "ModuleRelativePath", "Public/Asset/DataAsset/IAAssetMapping.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData = { "ClassData", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIAAssetMapping, ClassData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData_MetaData)) }; // 3651871645
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIAAssetMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ObjectData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIAAssetMapping_Statics::NewProp_ClassData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAAssetMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAAssetMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAAssetMapping_Statics::ClassParams = {
		&UIAAssetMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIAAssetMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetMapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAAssetMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAAssetMapping()
	{
		if (!Z_Registration_Info_UClass_UIAAssetMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAAssetMapping.OuterSingleton, Z_Construct_UClass_UIAAssetMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAAssetMapping.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAAssetMapping>()
	{
		return UIAAssetMapping::StaticClass();
	}
	UIAAssetMapping::UIAAssetMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAAssetMapping);
	UIAAssetMapping::~UIAAssetMapping() {}
	struct Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_DataAsset_IAAssetMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_DataAsset_IAAssetMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAAssetMapping, UIAAssetMapping::StaticClass, TEXT("UIAAssetMapping"), &Z_Registration_Info_UClass_UIAAssetMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAAssetMapping), 3575331896U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_DataAsset_IAAssetMapping_h_2981403919(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_DataAsset_IAAssetMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_DataAsset_IAAssetMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
