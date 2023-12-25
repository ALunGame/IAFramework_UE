// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Asset/IAAssetTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAAssetTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftClassPath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetTypes();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAAssetTypes_NoRegister();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FClassAsset();
	IAFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FObjectAsset();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIAAssetTypes::StaticRegisterNativesUIAAssetTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIAAssetTypes);
	UClass* Z_Construct_UClass_UIAAssetTypes_NoRegister()
	{
		return UIAAssetTypes::StaticClass();
	}
	struct Z_Construct_UClass_UIAAssetTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIAAssetTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIAAssetTypes_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Asset/IAAssetTypes.h" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIAAssetTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIAAssetTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIAAssetTypes_Statics::ClassParams = {
		&UIAAssetTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIAAssetTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIAAssetTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIAAssetTypes()
	{
		if (!Z_Registration_Info_UClass_UIAAssetTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIAAssetTypes.OuterSingleton, Z_Construct_UClass_UIAAssetTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIAAssetTypes.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIAAssetTypes>()
	{
		return UIAAssetTypes::StaticClass();
	}
	UIAAssetTypes::UIAAssetTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIAAssetTypes);
	UIAAssetTypes::~UIAAssetTypes() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ObjectAsset;
class UScriptStruct* FObjectAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ObjectAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ObjectAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FObjectAsset, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ObjectAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ObjectAsset.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FObjectAsset>()
{
	return FObjectAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FObjectAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectAsset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FObjectAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FObjectAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ObjectAsset" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectAsset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "ObjectAsset" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectAsset, AssetPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Object_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FObjectAsset, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Object_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FObjectAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FObjectAsset_Statics::NewProp_Object,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FObjectAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"ObjectAsset",
		sizeof(FObjectAsset),
		alignof(FObjectAsset),
		Z_Construct_UScriptStruct_FObjectAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FObjectAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FObjectAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FObjectAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_ObjectAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ObjectAsset.InnerSingleton, Z_Construct_UScriptStruct_FObjectAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ObjectAsset.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClassAsset;
class UScriptStruct* FClassAsset::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClassAsset.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClassAsset.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClassAsset, (UObject*)Z_Construct_UPackage__Script_IAFramework(), TEXT("ClassAsset"));
	}
	return Z_Registration_Info_UScriptStruct_ClassAsset.OuterSingleton;
}
template<> IAFRAMEWORK_API UScriptStruct* StaticStruct<FClassAsset>()
{
	return FClassAsset::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClassAsset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Class_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Class;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassAsset_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClassAsset_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClassAsset>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ClassAsset" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe5\x90\x8d" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassAsset, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "ClassAsset" },
		{ "Comment", "//\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe8\xb5\x84\xe6\xba\x90\xe9\x93\xbe\xe6\x8e\xa5" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassAsset, AssetPath), Z_Construct_UScriptStruct_FSoftClassPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Class_MetaData[] = {
		{ "Comment", "//\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1\n" },
		{ "ModuleRelativePath", "Public/Asset/IAAssetTypes.h" },
		{ "ToolTip", "\xe5\x8a\xa0\xe8\xbd\xbd\xe5\x87\xba\xe6\x9d\xa5\xe7\x9a\x84\xe5\xaf\xb9\xe8\xb1\xa1" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Class = { "Class", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClassAsset, Class), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Class_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Class_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClassAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClassAsset_Statics::NewProp_Class,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClassAsset_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
		nullptr,
		&NewStructOps,
		"ClassAsset",
		sizeof(FClassAsset),
		alignof(FClassAsset),
		Z_Construct_UScriptStruct_FClassAsset_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassAsset_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClassAsset_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClassAsset_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClassAsset()
	{
		if (!Z_Registration_Info_UScriptStruct_ClassAsset.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClassAsset.InnerSingleton, Z_Construct_UScriptStruct_FClassAsset_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClassAsset.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ScriptStructInfo[] = {
		{ FObjectAsset::StaticStruct, Z_Construct_UScriptStruct_FObjectAsset_Statics::NewStructOps, TEXT("ObjectAsset"), &Z_Registration_Info_UScriptStruct_ObjectAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FObjectAsset), 1274688051U) },
		{ FClassAsset::StaticStruct, Z_Construct_UScriptStruct_FClassAsset_Statics::NewStructOps, TEXT("ClassAsset"), &Z_Registration_Info_UScriptStruct_ClassAsset, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClassAsset), 3651871645U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIAAssetTypes, UIAAssetTypes::StaticClass, TEXT("UIAAssetTypes"), &Z_Registration_Info_UClass_UIAAssetTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIAAssetTypes), 1743578866U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_3319732691(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Asset_IAAssetTypes_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
