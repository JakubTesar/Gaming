// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMING_Hero_generated_h
#error "Hero.generated.h already included, missing '#pragma once' in Hero.h"
#endif
#define GAMING_Hero_generated_h

#define Gaming_Source_Gaming_Player_Hero_h_16_SPARSE_DATA
#define Gaming_Source_Gaming_Player_Hero_h_16_RPC_WRAPPERS
#define Gaming_Source_Gaming_Player_Hero_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define Gaming_Source_Gaming_Player_Hero_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define Gaming_Source_Gaming_Player_Hero_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAHero(); \
	friend struct Z_Construct_UClass_AHero_Statics; \
public: \
	DECLARE_CLASS(AHero, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Gaming"), NO_API) \
	DECLARE_SERIALIZER(AHero)


#define Gaming_Source_Gaming_Player_Hero_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHero(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHero) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public:


#define Gaming_Source_Gaming_Player_Hero_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHero(AHero&&); \
	NO_API AHero(const AHero&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHero); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHero); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHero)


#define Gaming_Source_Gaming_Player_Hero_h_16_PRIVATE_PROPERTY_OFFSET
#define Gaming_Source_Gaming_Player_Hero_h_13_PROLOG
#define Gaming_Source_Gaming_Player_Hero_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_Player_Hero_h_16_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_Player_Hero_h_16_SPARSE_DATA \
	Gaming_Source_Gaming_Player_Hero_h_16_RPC_WRAPPERS \
	Gaming_Source_Gaming_Player_Hero_h_16_INCLASS \
	Gaming_Source_Gaming_Player_Hero_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Gaming_Source_Gaming_Player_Hero_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Gaming_Source_Gaming_Player_Hero_h_16_PRIVATE_PROPERTY_OFFSET \
	Gaming_Source_Gaming_Player_Hero_h_16_SPARSE_DATA \
	Gaming_Source_Gaming_Player_Hero_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Gaming_Source_Gaming_Player_Hero_h_16_INCLASS_NO_PURE_DECLS \
	Gaming_Source_Gaming_Player_Hero_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMING_API UClass* StaticClass<class AHero>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Gaming_Source_Gaming_Player_Hero_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
