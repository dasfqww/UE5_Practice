// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Enemy/GruxBase.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGruxBase() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionEnabled();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AEnemy();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AGruxBase();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AGruxBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	DEFINE_FUNCTION(AGruxBase::execOnRightWeaponOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRightWeaponOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGruxBase::execOnLeftWeaponOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeftWeaponOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGruxBase::execSetRightWeaponCollisionEnabled)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_collisionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRightWeaponCollisionEnabled(ECollisionEnabled::Type(Z_Param_collisionEnabled));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGruxBase::execSetLeftWeaponCollisionEnabled)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_collisionEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLeftWeaponCollisionEnabled(ECollisionEnabled::Type(Z_Param_collisionEnabled));
		P_NATIVE_END;
	}
	void AGruxBase::StaticRegisterNativesAGruxBase()
	{
		UClass* Class = AGruxBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnLeftWeaponOverlap", &AGruxBase::execOnLeftWeaponOverlap },
			{ "OnRightWeaponOverlap", &AGruxBase::execOnRightWeaponOverlap },
			{ "SetLeftWeaponCollisionEnabled", &AGruxBase::execSetLeftWeaponCollisionEnabled },
			{ "SetRightWeaponCollisionEnabled", &AGruxBase::execSetRightWeaponCollisionEnabled },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics
	{
		struct GruxBase_eventOnLeftWeaponOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnLeftWeaponOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnLeftWeaponOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnLeftWeaponOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnLeftWeaponOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GruxBase_eventOnLeftWeaponOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GruxBase_eventOnLeftWeaponOverlap_Parms), &Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnLeftWeaponOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGruxBase, nullptr, "OnLeftWeaponOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::GruxBase_eventOnLeftWeaponOverlap_Parms), Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics
	{
		struct GruxBase_eventOnRightWeaponOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnRightWeaponOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnRightWeaponOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnRightWeaponOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnRightWeaponOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GruxBase_eventOnRightWeaponOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(GruxBase_eventOnRightWeaponOverlap_Parms), &Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventOnRightWeaponOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGruxBase, nullptr, "OnRightWeaponOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::GruxBase_eventOnRightWeaponOverlap_Parms), Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics
	{
		struct GruxBase_eventSetLeftWeaponCollisionEnabled_Parms
		{
			TEnumAsByte<ECollisionEnabled::Type> collisionEnabled;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_collisionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::NewProp_collisionEnabled = { "collisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventSetLeftWeaponCollisionEnabled_Parms, collisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(nullptr, 0) }; // 1787744072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::NewProp_collisionEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGruxBase, nullptr, "SetLeftWeaponCollisionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::GruxBase_eventSetLeftWeaponCollisionEnabled_Parms), Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics
	{
		struct GruxBase_eventSetRightWeaponCollisionEnabled_Parms
		{
			TEnumAsByte<ECollisionEnabled::Type> collisionEnabled;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_collisionEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::NewProp_collisionEnabled = { "collisionEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(GruxBase_eventSetRightWeaponCollisionEnabled_Parms, collisionEnabled), Z_Construct_UEnum_Engine_ECollisionEnabled, METADATA_PARAMS(nullptr, 0) }; // 1787744072
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::NewProp_collisionEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGruxBase, nullptr, "SetRightWeaponCollisionEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::GruxBase_eventSetRightWeaponCollisionEnabled_Parms), Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGruxBase);
	UClass* Z_Construct_UClass_AGruxBase_NoRegister()
	{
		return AGruxBase::StaticClass();
	}
	struct Z_Construct_UClass_AGruxBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_leftWeaponCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_leftWeaponCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rightWeaponCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_rightWeaponCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBoxTraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftBoxTraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftBoxTraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftBoxTraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBoxTraceStart_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightBoxTraceStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightBoxTraceEnd_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightBoxTraceEnd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxTraceExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoxTraceExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoxDebug_MetaData[];
#endif
		static void NewProp_bShowBoxDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoxDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGruxBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemy,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGruxBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGruxBase_OnLeftWeaponOverlap, "OnLeftWeaponOverlap" }, // 2997442613
		{ &Z_Construct_UFunction_AGruxBase_OnRightWeaponOverlap, "OnRightWeaponOverlap" }, // 2416033549
		{ &Z_Construct_UFunction_AGruxBase_SetLeftWeaponCollisionEnabled, "SetLeftWeaponCollisionEnabled" }, // 1083353923
		{ &Z_Construct_UFunction_AGruxBase_SetRightWeaponCollisionEnabled, "SetRightWeaponCollisionEnabled" }, // 1068394544
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Enemy/GruxBase.h" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_leftWeaponCollision_MetaData[] = {
		{ "Category", "Weapon Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_leftWeaponCollision = { "leftWeaponCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, leftWeaponCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_leftWeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_leftWeaponCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_rightWeaponCollision_MetaData[] = {
		{ "Category", "Weapon Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_rightWeaponCollision = { "rightWeaponCollision", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, rightWeaponCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_rightWeaponCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_rightWeaponCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceStart_MetaData[] = {
		{ "Category", "GruxBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceStart = { "LeftBoxTraceStart", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, LeftBoxTraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceEnd_MetaData[] = {
		{ "Category", "GruxBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceEnd = { "LeftBoxTraceEnd", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, LeftBoxTraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceStart_MetaData[] = {
		{ "Category", "GruxBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceStart = { "RightBoxTraceStart", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, RightBoxTraceStart), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceStart_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceEnd_MetaData[] = {
		{ "Category", "GruxBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceEnd = { "RightBoxTraceEnd", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, RightBoxTraceEnd), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceEnd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_BoxTraceExtent_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_BoxTraceExtent = { "BoxTraceExtent", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, BoxTraceExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_BoxTraceExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_BoxTraceExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	void Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug_SetBit(void* Obj)
	{
		((AGruxBase*)Obj)->bShowBoxDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug = { "bShowBoxDebug", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGruxBase), &Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGruxBase_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "WeaponProperties" },
		{ "ModuleRelativePath", "Public/Enemy/GruxBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGruxBase_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGruxBase, Damage), METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::NewProp_Damage_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGruxBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_leftWeaponCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_rightWeaponCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_LeftBoxTraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_RightBoxTraceEnd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_BoxTraceExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_bShowBoxDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGruxBase_Statics::NewProp_Damage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGruxBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGruxBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGruxBase_Statics::ClassParams = {
		&AGruxBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGruxBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGruxBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGruxBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGruxBase()
	{
		if (!Z_Registration_Info_UClass_AGruxBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGruxBase.OuterSingleton, Z_Construct_UClass_AGruxBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGruxBase.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<AGruxBase>()
	{
		return AGruxBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGruxBase);
	AGruxBase::~AGruxBase() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGruxBase, AGruxBase::StaticClass, TEXT("AGruxBase"), &Z_Registration_Info_UClass_AGruxBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGruxBase), 2744021249U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_1153456593(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
