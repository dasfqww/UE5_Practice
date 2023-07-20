// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Breakable/BreakableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ABreakableActor();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ABreakableActor_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ATreasure_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void ABreakableActor::StaticRegisterNativesABreakableActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABreakableActor);
	UClass* Z_Construct_UClass_ABreakableActor_NoRegister()
	{
		return ABreakableActor::StaticClass();
	}
	struct Z_Construct_UClass_ABreakableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GeometryCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_box_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_box;
		static const UECodeGen_Private::FClassPropertyParams NewProp_TreasureClasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TreasureClasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TreasureClasses;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABreakableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Breakable/BreakableActor.h" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection_MetaData[] = {
		{ "Category", "BreakableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection = { "GeometryCollection", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABreakableActor, GeometryCollection), Z_Construct_UClass_UGeometryCollectionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableActor_Statics::NewProp_box_MetaData[] = {
		{ "Category", "BreakableActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_box = { "box", nullptr, (EPropertyFlags)0x00200800000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABreakableActor, box), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABreakableActor_Statics::NewProp_box_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::NewProp_box_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses_Inner = { "TreasureClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_ATreasure_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses_MetaData[] = {
		{ "Category", "Breakable Properties" },
		{ "ModuleRelativePath", "Public/Breakable/BreakableActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses = { "TreasureClasses", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ABreakableActor, TreasureClasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABreakableActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_GeometryCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_box,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABreakableActor_Statics::NewProp_TreasureClasses,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABreakableActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHitInterface_NoRegister, (int32)VTABLE_OFFSET(ABreakableActor, IHitInterface), false },  // 3186978084
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABreakableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABreakableActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABreakableActor_Statics::ClassParams = {
		&ABreakableActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABreakableActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABreakableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABreakableActor()
	{
		if (!Z_Registration_Info_UClass_ABreakableActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABreakableActor.OuterSingleton, Z_Construct_UClass_ABreakableActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABreakableActor.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<ABreakableActor>()
	{
		return ABreakableActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABreakableActor);
	ABreakableActor::~ABreakableActor() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Breakable_BreakableActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Breakable_BreakableActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABreakableActor, ABreakableActor::StaticClass, TEXT("ABreakableActor"), &Z_Registration_Info_UClass_ABreakableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABreakableActor), 2740699513U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Breakable_BreakableActor_h_1101308497(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Breakable_BreakableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Breakable_BreakableActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
