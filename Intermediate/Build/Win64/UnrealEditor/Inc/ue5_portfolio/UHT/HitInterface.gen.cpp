// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Interfaces/HitInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHitInterface();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UHitInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	DEFINE_FUNCTION(IHitInterface::execGetHit)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_impactPoint);
		P_GET_OBJECT(AActor,Z_Param_Hitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetHit_Implementation(Z_Param_Out_impactPoint,Z_Param_Hitter);
		P_NATIVE_END;
	}
	struct HitInterface_eventGetHit_Parms
	{
		FVector impactPoint;
		AActor* Hitter;
	};
	void IHitInterface::GetHit(FVector const& impactPoint, AActor* Hitter)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetHit instead.");
	}
	void UHitInterface::StaticRegisterNativesUHitInterface()
	{
		UClass* Class = UHitInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetHit", &IHitInterface::execGetHit },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHitInterface_GetHit_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_impactPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_impactPoint;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_impactPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_impactPoint = { "impactPoint", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HitInterface_eventGetHit_Parms, impactPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_impactPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_impactPoint_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_Hitter = { "Hitter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(HitInterface_eventGetHit_Parms, Hitter), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_impactPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHitInterface_GetHit_Statics::NewProp_Hitter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHitInterface_GetHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UHitInterface_GetHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHitInterface, nullptr, "GetHit", nullptr, nullptr, sizeof(HitInterface_eventGetHit_Parms), Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHitInterface_GetHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHitInterface_GetHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHitInterface_GetHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UHitInterface_GetHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UHitInterface);
	UClass* Z_Construct_UClass_UHitInterface_NoRegister()
	{
		return UHitInterface::StaticClass();
	}
	struct Z_Construct_UClass_UHitInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHitInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHitInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHitInterface_GetHit, "GetHit" }, // 202563303
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/HitInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHitInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IHitInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UHitInterface_Statics::ClassParams = {
		&UHitInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHitInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHitInterface()
	{
		if (!Z_Registration_Info_UClass_UHitInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UHitInterface.OuterSingleton, Z_Construct_UClass_UHitInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UHitInterface.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UHitInterface>()
	{
		return UHitInterface::StaticClass();
	}
	UHitInterface::UHitInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHitInterface);
	UHitInterface::~UHitInterface() {}
	static FName NAME_UHitInterface_GetHit = FName(TEXT("GetHit"));
	void IHitInterface::Execute_GetHit(UObject* O, FVector const& impactPoint, AActor* Hitter)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UHitInterface::StaticClass()));
		HitInterface_eventGetHit_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UHitInterface_GetHit);
		if (Func)
		{
			Parms.impactPoint=impactPoint;
			Parms.Hitter=Hitter;
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IHitInterface*)(O->GetNativeInterfaceAddress(UHitInterface::StaticClass())))
		{
			I->GetHit_Implementation(impactPoint,Hitter);
		}
	}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UHitInterface, UHitInterface::StaticClass, TEXT("UHitInterface"), &Z_Registration_Info_UClass_UHitInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UHitInterface), 3186978084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_1063238700(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
