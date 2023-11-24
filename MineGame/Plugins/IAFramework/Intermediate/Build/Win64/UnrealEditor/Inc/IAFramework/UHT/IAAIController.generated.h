// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Object/Controller/IAAIController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef IAFRAMEWORK_IAAIController_generated_h
#error "IAAIController.generated.h already included, missing '#pragma once' in IAAIController.h"
#endif
#define IAFRAMEWORK_IAAIController_generated_h

#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_SPARSE_DATA
#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_RPC_WRAPPERS
#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_ACCESSORS
#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAIAAIController(); \
	friend struct Z_Construct_UClass_AIAAIController_Statics; \
public: \
	DECLARE_CLASS(AIAAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IAFramework"), NO_API) \
	DECLARE_SERIALIZER(AIAAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AIAAIController*>(this); }


#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAIAAIController(); \
	friend struct Z_Construct_UClass_AIAAIController_Statics; \
public: \
	DECLARE_CLASS(AIAAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/IAFramework"), NO_API) \
	DECLARE_SERIALIZER(AIAAIController) \
	virtual UObject* _getUObject() const override { return const_cast<AIAAIController*>(this); }


#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AIAAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AIAAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIAAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIAAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIAAIController(AIAAIController&&); \
	NO_API AIAAIController(const AIAAIController&); \
public: \
	NO_API virtual ~AIAAIController();


#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AIAAIController(AIAAIController&&); \
	NO_API AIAAIController(const AIAAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AIAAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AIAAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AIAAIController) \
	NO_API virtual ~AIAAIController();


#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_10_PROLOG
#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_SPARSE_DATA \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_RPC_WRAPPERS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_ACCESSORS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_INCLASS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_SPARSE_DATA \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_ACCESSORS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_INCLASS_NO_PURE_DECLS \
	FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> IAFRAMEWORK_API UClass* StaticClass<class AIAAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitProject_UEFramework_Mine_MineGame_Plugins_IAFramework_Source_IAFramework_Public_Object_Controller_IAAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
