// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Components/EnemyAIPerceptionComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemyAIPerceptionComponent() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UEnemyAIPerceptionComponent();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UEnemyAIPerceptionComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UEnemyAIPerceptionComponent::StaticRegisterNativesUEnemyAIPerceptionComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnemyAIPerceptionComponent);
	UClass* Z_Construct_UClass_UEnemyAIPerceptionComponent_NoRegister()
	{
		return UEnemyAIPerceptionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIPerceptionComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Activation Collision" },
		{ "IncludePath", "Components/EnemyAIPerceptionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/EnemyAIPerceptionComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnemyAIPerceptionComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::ClassParams = {
		&UEnemyAIPerceptionComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnemyAIPerceptionComponent()
	{
		if (!Z_Registration_Info_UClass_UEnemyAIPerceptionComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnemyAIPerceptionComponent.OuterSingleton, Z_Construct_UClass_UEnemyAIPerceptionComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnemyAIPerceptionComponent.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UEnemyAIPerceptionComponent>()
	{
		return UEnemyAIPerceptionComponent::StaticClass();
	}
	UEnemyAIPerceptionComponent::UEnemyAIPerceptionComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnemyAIPerceptionComponent);
	UEnemyAIPerceptionComponent::~UEnemyAIPerceptionComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_EnemyAIPerceptionComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_EnemyAIPerceptionComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnemyAIPerceptionComponent, UEnemyAIPerceptionComponent::StaticClass, TEXT("UEnemyAIPerceptionComponent"), &Z_Registration_Info_UClass_UEnemyAIPerceptionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnemyAIPerceptionComponent), 3284251546U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_EnemyAIPerceptionComponent_h_2880750457(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_EnemyAIPerceptionComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_EnemyAIPerceptionComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
