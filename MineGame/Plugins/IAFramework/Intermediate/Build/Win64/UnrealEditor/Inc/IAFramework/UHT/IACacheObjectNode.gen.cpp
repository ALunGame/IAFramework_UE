// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/Cache/IACacheObjectNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACacheObjectNode() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheObjectNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheObjectNode_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIAObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACacheObjectNode::StaticRegisterNativesUIACacheObjectNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACacheObjectNode);
	UClass* Z_Construct_UClass_UIACacheObjectNode_NoRegister()
	{
		return UIACacheObjectNode::StaticClass();
	}
	struct Z_Construct_UClass_UIACacheObjectNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Objects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Objects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Objects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACacheObjectNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIACacheNode,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheObjectNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Module/Cache/IACacheObjectNode.h" },
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheObjectNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects_Inner = { "Objects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UIAObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheObjectNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects = { "Objects", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIACacheObjectNode, Objects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIACacheObjectNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheObjectNode_Statics::NewProp_Objects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACacheObjectNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACacheObjectNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACacheObjectNode_Statics::ClassParams = {
		&UIACacheObjectNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIACacheObjectNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheObjectNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIACacheObjectNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheObjectNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACacheObjectNode()
	{
		if (!Z_Registration_Info_UClass_UIACacheObjectNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACacheObjectNode.OuterSingleton, Z_Construct_UClass_UIACacheObjectNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACacheObjectNode.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACacheObjectNode>()
	{
		return UIACacheObjectNode::StaticClass();
	}
	UIACacheObjectNode::UIACacheObjectNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACacheObjectNode);
	UIACacheObjectNode::~UIACacheObjectNode() {}
	struct Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheObjectNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheObjectNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACacheObjectNode, UIACacheObjectNode::StaticClass, TEXT("UIACacheObjectNode"), &Z_Registration_Info_UClass_UIACacheObjectNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACacheObjectNode), 3621326538U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheObjectNode_h_2033524757(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheObjectNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheObjectNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
