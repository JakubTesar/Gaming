// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMING_Karel_generated_h
#error "Karel.generated.h already included, missing '#pragma once' in Karel.h"
#endif
#define GAMING_Karel_generated_h

#define Gaming_Source_Gaming_Karel_h_18_SPARSE_DATA
#define Gaming_Source_Gaming_Karel_h_18_RPC_WRAPPERS
#define Gaming_Source_Gaming_Karel_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Gaming_Source_Gaming_Karel_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAKarel(); \
	friend struct Z_Construct_UClass_AKarel_Statics; \
public: \
	DECLARE_CLASS(AKarel, ANPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AKarel)


#define Gaming_Source_Gaming_Karel_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAKarel(); \
	friend struct Z_Construct_UClass_AKarel_Statics; \
public: \
	DECLARE_CLASS(AKarel, ANPC, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AKarel)


#define Gaming_Source_Gaming_Karel_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AKarel(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AKarel) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKarel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKarel); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKarel(AKarel&&); \
	NO_API AKarel(const AKarel&); \
public:


#define Gaming_Source_Gaming_Karel_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AKarel(AKarel&&); \
	NO_API AKarel(const AKarel&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AKarel); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AKarel); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AKarel)


#define Gaming_Source_Gaming_Karel_h_18_PRIVATE_PROPERTY_OFFSET
#define Gaming_Source_Gaming_Karel_h_15_PROLOG
#define Gaming_Source_Gaming_Karel_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_Karel_h_18_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_Karel_h_18_SPARSE_DATA \
	Gaming_Source_Gaming_Karel_h_18_RPC_WRAPPERS \
	Gaming_Source_Gaming_Karel_h_18_INCLASS \
	Gaming_Source_Gaming_Karel_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gaming_Source_Gaming_Karel_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_Karel_h_18_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_Karel_h_18_SPARSE_DATA \
	Gaming_Source_Gaming_Karel_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Gaming_Source_Gaming_Karel_h_18_INCLASS_NO_PURE_DECLS \
	Gaming_Source_Gaming_Karel_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMING_API UClass* StaticClass<class AKarel>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gaming_Source_Gaming_Karel_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
