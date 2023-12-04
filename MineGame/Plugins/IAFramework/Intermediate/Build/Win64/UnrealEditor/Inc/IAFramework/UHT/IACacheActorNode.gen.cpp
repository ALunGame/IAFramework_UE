// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAFramework/Public/Module/Cache/IACacheActorNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIACacheActorNode() {}
// Cross Module References
	IAFRAMEWORK_API UClass* Z_Construct_UClass_AIAActor_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheActorNode();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheActorNode_NoRegister();
	IAFRAMEWORK_API UClass* Z_Construct_UClass_UIACacheNode();
	UPackage* Z_Construct_UPackage__Script_IAFramework();
// End Cross Module References
	void UIACacheActorNode::StaticRegisterNativesUIACacheActorNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIACacheActorNode);
	UClass* Z_Construct_UClass_UIACacheActorNode_NoRegister()
	{
		return UIACacheActorNode::StaticClass();
	}
	struct Z_Construct_UClass_UIACacheActorNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIACacheActorNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIACacheNode,
		(UObject* (*)())Z_Construct_UPackage__Script_IAFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheActorNode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Module/Cache/IACacheActorNode.h" },
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheActorNode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AIAActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Module/Cache/IACacheActorNode.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIACacheActorNode, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIACacheActorNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIACacheActorNode_Statics::NewProp_Actors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIACacheActorNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIACacheActorNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIACacheActorNode_Statics::ClassParams = {
		&UIACacheActorNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIACacheActorNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheActorNode_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIACacheActorNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIACacheActorNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIACacheActorNode()
	{
		if (!Z_Registration_Info_UClass_UIACacheActorNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIACacheActorNode.OuterSingleton, Z_Construct_UClass_UIACacheActorNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIACacheActorNode.OuterSingleton;
	}
	template<> IAFRAMEWORK_API UClass* StaticClass<UIACacheActorNode>()
	{
		return UIACacheActorNode::StaticClass();
	}
	UIACacheActorNode::UIACacheActorNode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIACacheActorNode);
	UIACacheActorNode::~UIACacheActorNode() {}
	struct Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheActorNode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheActorNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIACacheActorNode, UIACacheActorNode::StaticClass, TEXT("UIACacheActorNode"), &Z_Registration_Info_UClass_UIACacheActorNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIACacheActorNode), 1524158869U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheActorNode_h_3255716689(TEXT("/Script/IAFramework"),
		Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheActorNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitProject_IAFramework_UE_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Module_Cache_IACacheActorNode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
