// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/HUD/PlayerOverlay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerOverlay() {}
// Cross Module References
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UPlayerOverlay();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UPlayerOverlay::StaticRegisterNativesUPlayerOverlay()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerOverlay);
	UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister()
	{
		return UPlayerOverlay::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerOverlay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthStatText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthStatText;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerOverlay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HUD/PlayerOverlay.h" },
		{ "ModuleRelativePath", "Public/HUD/PlayerOverlay.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar = { "HealthBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerOverlay, HealthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ManaBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ManaBar = { "ManaBar", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerOverlay, ManaBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ManaBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ManaBar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthStatText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HUD/PlayerOverlay.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthStatText = { "HealthStatText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerOverlay, HealthStatText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthStatText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthStatText_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_ManaBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerOverlay_Statics::NewProp_HealthStatText,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerOverlay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerOverlay>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams = {
		&UPlayerOverlay::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerOverlay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerOverlay()
	{
		if (!Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton, Z_Construct_UClass_UPlayerOverlay_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerOverlay.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UPlayerOverlay>()
	{
		return UPlayerOverlay::StaticClass();
	}
	UPlayerOverlay::UPlayerOverlay(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerOverlay);
	UPlayerOverlay::~UPlayerOverlay() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_PlayerOverlay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_PlayerOverlay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerOverlay, UPlayerOverlay::StaticClass, TEXT("UPlayerOverlay"), &Z_Registration_Info_UClass_UPlayerOverlay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerOverlay), 4175113488U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_PlayerOverlay_h_3146846317(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_PlayerOverlay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_HUD_PlayerOverlay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
