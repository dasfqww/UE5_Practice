// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/HUD/HealthBarComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHealthBarComponent() {}
// Cross Module References
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHealthBar_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHealthBarComponent();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UHealthBarComponent::StaticRegisterNativesUHealthBarComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHealthBarComponent);
	UClass* Z_Construct_UClass_UHealthBarComponent_NoRegister()
	{
		return UHealthBarComponent::StaticClass();
	}
	struct Z_Construct_UClass_UHealthBarComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBarWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBarWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHealthBarComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidgetComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Object Activation Components|Activation Sockets Base Lighting LOD Mesh Mobility Trigger" },
		{ "IncludePath", "HUD/HealthBarComponent.h" },
		{ "ModuleRelativePath", "Public/HUD/HealthBarComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/HealthBarComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget = { "HealthBarWidget", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UHealthBarComponent, HealthBarWidget), Z_Construct_UClass_UHealthBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHealthBarComponent_Statics::NewProp_HealthBarWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHealthBarComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHealthBarComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams = {
		&UHealthBarComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::PropPointers),
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHealthBarComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHealthBarComponent()
	{
		if (!Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton, Z_Construct_UClass_UHealthBarComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHealthBarComponent.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UHealthBarComponent>()
	{
		return UHealthBarComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHealthBarComponent);
	UHealthBarComponent::~UHealthBarComponent() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_HealthBarComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_HealthBarComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHealthBarComponent, UHealthBarComponent::StaticClass, TEXT("UHealthBarComponent"), &Z_Registration_Info_UClass_UHealthBarComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHealthBarComponent), 2450828104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_HealthBarComponent_h_2902590385(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_HealthBarComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_HealthBarComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
