// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Enemy/EnemyBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyBoss() {}
// Cross Module References
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ABaseCharacter();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AEnemyBoss();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AEnemyBoss_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void AEnemyBoss::StaticRegisterNativesAEnemyBoss()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEnemyBoss);
	UClass* Z_Construct_UClass_AEnemyBoss_NoRegister()
	{
		return AEnemyBoss::StaticClass();
	}
	struct Z_Construct_UClass_AEnemyBoss_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyBoss.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBoss_Statics::ClassParams = {
		&AEnemyBoss::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemyBoss()
	{
		if (!Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton, Z_Construct_UClass_AEnemyBoss_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEnemyBoss.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<AEnemyBoss>()
	{
		return AEnemyBoss::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemyBoss);
	AEnemyBoss::~AEnemyBoss() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEnemyBoss, AEnemyBoss::StaticClass, TEXT("AEnemyBoss"), &Z_Registration_Info_UClass_AEnemyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBoss), 1155162436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_4015835855(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
