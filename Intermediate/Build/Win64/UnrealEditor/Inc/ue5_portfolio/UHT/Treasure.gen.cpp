// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Items/Treasure.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreasure() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AItem();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ATreasure();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ATreasure_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void ATreasure::StaticRegisterNativesATreasure()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATreasure);
	UClass* Z_Construct_UClass_ATreasure_NoRegister()
	{
		return ATreasure::StaticClass();
	}
	struct Z_Construct_UClass_ATreasure_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickupSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickupSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Gold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Gold;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATreasure_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AItem,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Items/Treasure.h" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound_MetaData[] = {
		{ "Category", "Sounds" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound = { "PickupSound", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, PickupSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATreasure_Statics::NewProp_Gold_MetaData[] = {
		{ "Category", "Treasure Properties" },
		{ "ModuleRelativePath", "Public/Items/Treasure.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATreasure_Statics::NewProp_Gold = { "Gold", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATreasure, Gold), METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::NewProp_Gold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::NewProp_Gold_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATreasure_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_PickupSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATreasure_Statics::NewProp_Gold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATreasure_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATreasure>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATreasure_Statics::ClassParams = {
		&ATreasure::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATreasure_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATreasure_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATreasure()
	{
		if (!Z_Registration_Info_UClass_ATreasure.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATreasure.OuterSingleton, Z_Construct_UClass_ATreasure_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATreasure.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<ATreasure>()
	{
		return ATreasure::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATreasure);
	ATreasure::~ATreasure() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Items_Treasure_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Items_Treasure_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATreasure, ATreasure::StaticClass, TEXT("ATreasure"), &Z_Registration_Info_UClass_ATreasure, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATreasure), 193908525U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Items_Treasure_h_585282651(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Items_Treasure_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Items_Treasure_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
