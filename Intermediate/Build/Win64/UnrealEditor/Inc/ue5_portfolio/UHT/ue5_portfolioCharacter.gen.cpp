// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/ue5_portfolioCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeue5_portfolioCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_ABaseCharacter();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AItem_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioCharacter();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UPlayerOverlay_NoRegister();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_EActionState();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	DEFINE_FUNCTION(Aue5_portfolioCharacter::execHitReactEnd)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HitReactEnd();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aue5_portfolioCharacter::execFinishEquipping)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishEquipping();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aue5_portfolioCharacter::execAttachWeaponToHand)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachWeaponToHand();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aue5_portfolioCharacter::execAttachWeaponToBack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachWeaponToBack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(Aue5_portfolioCharacter::execAttackInputChecking)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttackInputChecking();
		P_NATIVE_END;
	}
	void Aue5_portfolioCharacter::StaticRegisterNativesAue5_portfolioCharacter()
	{
		UClass* Class = Aue5_portfolioCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachWeaponToBack", &Aue5_portfolioCharacter::execAttachWeaponToBack },
			{ "AttachWeaponToHand", &Aue5_portfolioCharacter::execAttachWeaponToHand },
			{ "AttackInputChecking", &Aue5_portfolioCharacter::execAttackInputChecking },
			{ "FinishEquipping", &Aue5_portfolioCharacter::execFinishEquipping },
			{ "HitReactEnd", &Aue5_portfolioCharacter::execHitReactEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aue5_portfolioCharacter, nullptr, "AttachWeaponToBack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aue5_portfolioCharacter, nullptr, "AttachWeaponToHand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aue5_portfolioCharacter, nullptr, "AttackInputChecking", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aue5_portfolioCharacter, nullptr, "FinishEquipping", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_Aue5_portfolioCharacter, nullptr, "HitReactEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Aue5_portfolioCharacter);
	UClass* Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister()
	{
		return Aue5_portfolioCharacter::StaticClass();
	}
	struct Z_Construct_UClass_Aue5_portfolioCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Effect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Effect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappingItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappingItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipMontage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipMontage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerOverlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerOverlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aue5_portfolioCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_Aue5_portfolioCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToBack, "AttachWeaponToBack" }, // 2770876658
		{ &Z_Construct_UFunction_Aue5_portfolioCharacter_AttachWeaponToHand, "AttachWeaponToHand" }, // 2752402582
		{ &Z_Construct_UFunction_Aue5_portfolioCharacter_AttackInputChecking, "AttackInputChecking" }, // 2485617536
		{ &Z_Construct_UFunction_Aue5_portfolioCharacter_FinishEquipping, "FinishEquipping" }, // 629585848
		{ &Z_Construct_UFunction_Aue5_portfolioCharacter_HitReactEnd, "HitReactEnd" }, // 921740805
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ue5_portfolioCharacter.h" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Character components*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
		{ "ToolTip", "Character components" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_Effect_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_Effect = { "Effect", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, Effect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_Effect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_Effect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Combat" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x004000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_BoxCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_overlappingItem_MetaData[] = {
		{ "Category", "ue5_portfolioCharacter" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_overlappingItem = { "overlappingItem", nullptr, (EPropertyFlags)0x0040000000020801, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, overlappingItem), Z_Construct_UClass_AItem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_overlappingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_overlappingItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_EquipMontage_MetaData[] = {
		{ "Category", "Montages" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_EquipMontage = { "EquipMontage", nullptr, (EPropertyFlags)0x0040000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, EquipMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_EquipMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_EquipMontage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ue5_portfolioCharacter" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0040000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, ActionState), Z_Construct_UEnum_ue5_portfolio_EActionState, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState_MetaData)) }; // 1890732757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_PlayerOverlay_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ue5_portfolioCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_PlayerOverlay = { "PlayerOverlay", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Aue5_portfolioCharacter, PlayerOverlay), Z_Construct_UClass_UPlayerOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_PlayerOverlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_PlayerOverlay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aue5_portfolioCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_Effect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_overlappingItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_EquipMontage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aue5_portfolioCharacter_Statics::NewProp_PlayerOverlay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aue5_portfolioCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aue5_portfolioCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Aue5_portfolioCharacter_Statics::ClassParams = {
		&Aue5_portfolioCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_Aue5_portfolioCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aue5_portfolioCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aue5_portfolioCharacter()
	{
		if (!Z_Registration_Info_UClass_Aue5_portfolioCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Aue5_portfolioCharacter.OuterSingleton, Z_Construct_UClass_Aue5_portfolioCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Aue5_portfolioCharacter.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<Aue5_portfolioCharacter>()
	{
		return Aue5_portfolioCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aue5_portfolioCharacter);
	Aue5_portfolioCharacter::~Aue5_portfolioCharacter() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Aue5_portfolioCharacter, Aue5_portfolioCharacter::StaticClass, TEXT("Aue5_portfolioCharacter"), &Z_Registration_Info_UClass_Aue5_portfolioCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Aue5_portfolioCharacter), 1454545140U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_1577020062(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
