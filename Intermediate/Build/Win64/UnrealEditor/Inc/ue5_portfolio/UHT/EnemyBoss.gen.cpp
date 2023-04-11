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
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ABaseCharacter();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AEnemyBoss();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AEnemyBoss_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_EEnemyState();
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
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnemyState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnemyState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnemyState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTreeAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTreeAsset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CombatTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombatRadius_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CombatRadius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemyBoss_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/EnemyBoss.h" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState_MetaData[] = {
		{ "Category", "EnemyBoss" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState = { "EnemyState", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBoss, EnemyState), Z_Construct_UEnum_ue5_portfolio_EEnemyState, METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState_MetaData)) }; // 3785408285
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_BehaviorTreeAsset_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_BehaviorTreeAsset = { "BehaviorTreeAsset", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBoss, BehaviorTreeAsset), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_BehaviorTreeAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_BehaviorTreeAsset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_HealthBarWidget_MetaData[] = {
		{ "Category", "EnemyBoss" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBoss, HealthBarWidget), Z_Construct_UClass_UHealthBarComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_HealthBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_HealthBarWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatTarget = { "CombatTarget", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBoss, CombatTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatRadius_MetaData[] = {
		{ "Category", "EnemyBoss" },
		{ "ModuleRelativePath", "Public/Enemy/EnemyBoss.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatRadius = { "CombatRadius", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEnemyBoss, CombatRadius), METADATA_PARAMS(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatRadius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemyBoss_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_EnemyState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_BehaviorTreeAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_HealthBarWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemyBoss_Statics::NewProp_CombatRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemyBoss_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemyBoss>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEnemyBoss_Statics::ClassParams = {
		&AEnemyBoss::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEnemyBoss_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEnemyBoss_Statics::PropPointers),
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
		{ Z_Construct_UClass_AEnemyBoss, AEnemyBoss::StaticClass, TEXT("AEnemyBoss"), &Z_Registration_Info_UClass_AEnemyBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEnemyBoss), 3519697417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_2441245820(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_EnemyBoss_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
