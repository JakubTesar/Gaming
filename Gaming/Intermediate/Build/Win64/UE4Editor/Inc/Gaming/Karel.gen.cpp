// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Gaming/Karel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKarel() {}
// Cross Module References
	GAMING_API UClass* Z_Construct_UClass_AKarel_NoRegister();
	GAMING_API UClass* Z_Construct_UClass_AKarel();
	GAMING_API UClass* Z_Construct_UClass_ANPC();
	UPackage* Z_Construct_UPackage__Script_Gaming();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	GAMING_API UClass* Z_Construct_UClass_AItem_NoRegister();
// End Cross Module References
	void AKarel::StaticRegisterNativesAKarel()
	{
	}
	UClass* Z_Construct_UClass_AKarel_NoRegister()
	{
		return AKarel::StaticClass();
	}
	struct Z_Construct_UClass_AKarel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComponent2_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComponent2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShopItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShopItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ShopItems;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AKarel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANPC,
		(UObject* (*)())Z_Construct_UPackage__Script_Gaming,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKarel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Karel.h" },
		{ "ModuleRelativePath", "Karel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKarel_Statics::NewProp_CapsuleComponent2_MetaData[] = {
		{ "Category", "Karel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Karel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKarel_Statics::NewProp_CapsuleComponent2 = { "CapsuleComponent2", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKarel, CapsuleComponent2), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKarel_Statics::NewProp_CapsuleComponent2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKarel_Statics::NewProp_CapsuleComponent2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKarel_Statics::NewProp_SpringArmComponent_MetaData[] = {
		{ "Category", "Karel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Karel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKarel_Statics::NewProp_SpringArmComponent = { "SpringArmComponent", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKarel, SpringArmComponent), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AKarel_Statics::NewProp_SpringArmComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKarel_Statics::NewProp_SpringArmComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems_Inner = { "ShopItems", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems_MetaData[] = {
		{ "Category", "Karel" },
		{ "ModuleRelativePath", "Karel.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems = { "ShopItems", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AKarel, ShopItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AKarel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKarel_Statics::NewProp_CapsuleComponent2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKarel_Statics::NewProp_SpringArmComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AKarel_Statics::NewProp_ShopItems,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AKarel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AKarel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AKarel_Statics::ClassParams = {
		&AKarel::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AKarel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AKarel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AKarel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AKarel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AKarel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AKarel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AKarel, 2610130245);
	template<> GAMING_API UClass* StaticClass<AKarel>()
	{
		return AKarel::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AKarel(Z_Construct_UClass_AKarel, &AKarel::StaticClass, TEXT("/Script/Gaming"), TEXT("AKarel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AKarel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
