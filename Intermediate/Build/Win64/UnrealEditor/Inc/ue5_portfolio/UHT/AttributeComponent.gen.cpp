// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Components/AttributeComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAttributeComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UAttributeComponent();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UAttributeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UAttributeComponent::StaticRegisterNativesUAttributeComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAttributeComponent);
	UClass* Z_Construct_UClass_UAttributeComponent_NoRegister()
	{
		return UAttributeComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAttributeComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAttributeComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/AttributeComponent.h" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_health_MetaData[] = {
		{ "Category", "Actor Attributes" },
		{ "Comment", "//current Hp\n" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
		{ "ToolTip", "current Hp" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeComponent, health), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAttributeComponent_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Actor Attributes" },
		{ "ModuleRelativePath", "Public/Components/AttributeComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAttributeComponent_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAttributeComponent, maxHealth), METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_maxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::NewProp_maxHealth_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAttributeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAttributeComponent_Statics::NewProp_maxHealth,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAttributeComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAttributeComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAttributeComponent_Statics::ClassParams = {
		&UAttributeComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAttributeComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAttributeComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAttributeComponent()
	{
		if (!Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton, Z_Construct_UClass_UAttributeComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAttributeComponent.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UAttributeComponent>()
	{
		return UAttributeComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAttributeComponent);
	UAttributeComponent::~UAttributeComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_AttributeComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_AttributeComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAttributeComponent, UAttributeComponent::StaticClass, TEXT("UAttributeComponent"), &Z_Registration_Info_UClass_UAttributeComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAttributeComponent), 133081128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_AttributeComponent_h_704075069(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_AttributeComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Components_AttributeComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
