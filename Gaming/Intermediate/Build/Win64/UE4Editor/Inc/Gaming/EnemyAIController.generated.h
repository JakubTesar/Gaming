// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef GAMING_EnemyAIController_generated_h
#error "EnemyAIController.generated.h already included, missing '#pragma once' in EnemyAIController.h"
#endif
#define GAMING_EnemyAIController_generated_h

#define Gaming_Source_Gaming_EnemyAIController_h_17_SPARSE_DATA
#define Gaming_Source_Gaming_EnemyAIController_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSenseStuff);


#define Gaming_Source_Gaming_EnemyAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSenseStuff);


#define Gaming_Source_Gaming_EnemyAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define Gaming_Source_Gaming_EnemyAIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAIController(); \
	friend struct Z_Construct_UClass_AEnemyAIController_Statics; \
public: \
	DECLARE_CLASS(AEnemyAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAIController)


#define Gaming_Source_Gaming_EnemyAIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public:


#define Gaming_Source_Gaming_EnemyAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAIController(AEnemyAIController&&); \
	NO_API AEnemyAIController(const AEnemyAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAIController)


#define Gaming_Source_Gaming_EnemyAIController_h_17_PRIVATE_PROPERTY_OFFSET
#define Gaming_Source_Gaming_EnemyAIController_h_14_PROLOG
#define Gaming_Source_Gaming_EnemyAIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_EnemyAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_EnemyAIController_h_17_SPARSE_DATA \
	Gaming_Source_Gaming_EnemyAIController_h_17_RPC_WRAPPERS \
	Gaming_Source_Gaming_EnemyAIController_h_17_INCLASS \
	Gaming_Source_Gaming_EnemyAIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gaming_Source_Gaming_EnemyAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_EnemyAIController_h_17_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_EnemyAIController_h_17_SPARSE_DATA \
	Gaming_Source_Gaming_EnemyAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Gaming_Source_Gaming_EnemyAIController_h_17_INCLASS_NO_PURE_DECLS \
	Gaming_Source_Gaming_EnemyAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMING_API UClass* StaticClass<class AEnemyAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gaming_Source_Gaming_EnemyAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
