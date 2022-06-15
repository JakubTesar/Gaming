// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gaming/Enemy/BasicEnemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicEnemy() {}
// Cross Module References
	GAMING_API UClass* Z_Construct_UClass_ABasicEnemy_NoRegister();
	GAMING_API UClass* Z_Construct_UClass_ABasicEnemy();
	GAMING_API UClass* Z_Construct_UClass_ANPC();
	UPackage* Z_Construct_UPackage__Script_Gaming();
// End Cross Module References
	void ABasicEnemy::StaticRegisterNativesABasicEnemy()
	{
	}
	UClass* Z_Construct_UClass_ABasicEnemy_NoRegister()
	{
		return ABasicEnemy::StaticClass();
	}
	struct Z_Construct_UClass_ABasicEnemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicEnemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANPC,
		(UObject* (*)())Z_Construct_UPackage__Script_Gaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/BasicEnemy.h" },
		{ "ModuleRelativePath", "Enemy/BasicEnemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicEnemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicEnemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicEnemy_Statics::ClassParams = {
		&ABasicEnemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicEnemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicEnemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicEnemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicEnemy, 1437635502);
	template<> GAMING_API UClass* StaticClass<ABasicEnemy>()
	{
		return ABasicEnemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicEnemy(Z_Construct_UClass_ABasicEnemy, &ABasicEnemy::StaticClass, TEXT("/Script/Gaming"), TEXT("ABasicEnemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicEnemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
