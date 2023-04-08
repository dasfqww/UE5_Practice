// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/ue5_portfolioGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeue5_portfolioGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioGameMode();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void Aue5_portfolioGameMode::StaticRegisterNativesAue5_portfolioGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aue5_portfolioGameMode);
	UClass* Z_Construct_UClass_Aue5_portfolioGameMode_NoRegister()
	{
		return Aue5_portfolioGameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aue5_portfolioGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aue5_portfolioGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ue5_portfolioGameMode.h" },
		{ "ModuleRelativePath", "ue5_portfolioGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aue5_portfolioGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aue5_portfolioGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aue5_portfolioGameMode_Statics::ClassParams = {
		&Aue5_portfolioGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aue5_portfolioGameMode()
	{
		if (!Z_Registration_Info_UClass_Aue5_portfolioGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aue5_portfolioGameMode.OuterSingleton, Z_Construct_UClass_Aue5_portfolioGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aue5_portfolioGameMode.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<Aue5_portfolioGameMode>()
	{
		return Aue5_portfolioGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aue5_portfolioGameMode);
	Aue5_portfolioGameMode::~Aue5_portfolioGameMode() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aue5_portfolioGameMode, Aue5_portfolioGameMode::StaticClass, TEXT("Aue5_portfolioGameMode"), &Z_Registration_Info_UClass_Aue5_portfolioGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aue5_portfolioGameMode), 1384693539U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioGameMode_h_28176606(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
