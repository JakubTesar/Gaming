// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMING_BasicEnemy_generated_h
#error "BasicEnemy.generated.h already included, missing '#pragma once' in BasicEnemy.h"
#endif
#define GAMING_BasicEnemy_generated_h

#define Gaming_Source_Gaming_BasicEnemy_h_15_SPARSE_DATA
#define Gaming_Source_Gaming_BasicEnemy_h_15_RPC_WRAPPERS
#define Gaming_Source_Gaming_BasicEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Gaming_Source_Gaming_BasicEnemy_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicEnemy(); \
	friend struct Z_Construct_UClass_ABasicEnemy_Statics; \
public: \
	DECLARE_CLASS(ABasicEnemy, ANPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(ABasicEnemy)


#define Gaming_Source_Gaming_BasicEnemy_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABasicEnemy(); \
	friend struct Z_Construct_UClass_ABasicEnemy_Statics; \
public: \
	DECLARE_CLASS(ABasicEnemy, ANPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(ABasicEnemy)


#define Gaming_Source_Gaming_BasicEnemy_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicEnemy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicEnemy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicEnemy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicEnemy(ABasicEnemy&&); \
	NO_API ABasicEnemy(const ABasicEnemy&); \
public:


#define Gaming_Source_Gaming_BasicEnemy_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicEnemy() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicEnemy(ABasicEnemy&&); \
	NO_API ABasicEnemy(const ABasicEnemy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicEnemy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicEnemy); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicEnemy)


#define Gaming_Source_Gaming_BasicEnemy_h_15_PRIVATE_PROPERTY_OFFSET
#define Gaming_Source_Gaming_BasicEnemy_h_12_PROLOG
#define Gaming_Source_Gaming_BasicEnemy_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_BasicEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_BasicEnemy_h_15_SPARSE_DATA \
	Gaming_Source_Gaming_BasicEnemy_h_15_RPC_WRAPPERS \
	Gaming_Source_Gaming_BasicEnemy_h_15_INCLASS \
	Gaming_Source_Gaming_BasicEnemy_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gaming_Source_Gaming_BasicEnemy_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_BasicEnemy_h_15_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_BasicEnemy_h_15_SPARSE_DATA \
	Gaming_Source_Gaming_BasicEnemy_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Gaming_Source_Gaming_BasicEnemy_h_15_INCLASS_NO_PURE_DECLS \
	Gaming_Source_Gaming_BasicEnemy_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMING_API UClass* StaticClass<class ABasicEnemy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gaming_Source_Gaming_BasicEnemy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
