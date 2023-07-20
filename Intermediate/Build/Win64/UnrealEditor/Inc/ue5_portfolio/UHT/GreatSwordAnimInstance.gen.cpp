// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/Character/GreatSwordAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGreatSwordAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UGreatSwordAnimInstance();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UGreatSwordAnimInstance_NoRegister();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_EActionState();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_ECharacterState();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_EDeathPose();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UGreatSwordAnimInstance::StaticRegisterNativesUGreatSwordAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGreatSwordAnimInstance);
	UClass* Z_Construct_UClass_UGreatSwordAnimInstance_NoRegister()
	{
		return UGreatSwordAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UGreatSwordAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerMovement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_playerMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFalling_MetaData[];
#endif
		static void NewProp_bIsFalling_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFalling;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CharacterState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CharacterState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CharacterState;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathPose_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DeathPose;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGreatSwordAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Character/GreatSwordAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_player_MetaData[] = {
		{ "Category", "GreatSwordAnimInstance" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, player), Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_playerMovement_MetaData[] = {
		{ "Category", "Movement" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_playerMovement = { "playerMovement", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, playerMovement), Z_Construct_UClass_UCharacterMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_playerMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_playerMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_GroundSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_GroundSpeed = { "GroundSpeed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, GroundSpeed), METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_GroundSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_GroundSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	void Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling_SetBit(void* Obj)
	{
		((UGreatSwordAnimInstance*)Obj)->bIsFalling = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling = { "bIsFalling", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UGreatSwordAnimInstance), &Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState = { "CharacterState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, CharacterState), Z_Construct_UEnum_ue5_portfolio_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState_MetaData)) }; // 733414529
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, ActionState), Z_Construct_UEnum_ue5_portfolio_EActionState, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState_MetaData)) }; // 1890732757
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_DeathPose_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/Character/GreatSwordAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_DeathPose = { "DeathPose", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGreatSwordAnimInstance, DeathPose), Z_Construct_UEnum_ue5_portfolio_EDeathPose, METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_DeathPose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_DeathPose_MetaData)) }; // 1106529792
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGreatSwordAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_player,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_playerMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_GroundSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_bIsFalling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_CharacterState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_ActionState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGreatSwordAnimInstance_Statics::NewProp_DeathPose,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGreatSwordAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGreatSwordAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGreatSwordAnimInstance_Statics::ClassParams = {
		&UGreatSwordAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGreatSwordAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGreatSwordAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGreatSwordAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UGreatSwordAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGreatSwordAnimInstance.OuterSingleton, Z_Construct_UClass_UGreatSwordAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGreatSwordAnimInstance.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UGreatSwordAnimInstance>()
	{
		return UGreatSwordAnimInstance::StaticClass();
	}
	UGreatSwordAnimInstance::UGreatSwordAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGreatSwordAnimInstance);
	UGreatSwordAnimInstance::~UGreatSwordAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Character_GreatSwordAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Character_GreatSwordAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGreatSwordAnimInstance, UGreatSwordAnimInstance::StaticClass, TEXT("UGreatSwordAnimInstance"), &Z_Registration_Info_UClass_UGreatSwordAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGreatSwordAnimInstance), 2279829827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Character_GreatSwordAnimInstance_h_2747335820(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Character_GreatSwordAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_Character_GreatSwordAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
