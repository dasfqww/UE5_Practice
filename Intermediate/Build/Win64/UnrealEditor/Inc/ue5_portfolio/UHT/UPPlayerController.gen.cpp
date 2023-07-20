// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/PlayerController/UPPlayerController.h"
#include "InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUPPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AUPPlayerController();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_AUPPlayerController_NoRegister();
	UE5_PORTFOLIO_API UEnum* Z_Construct_UEnum_ue5_portfolio_EActionState();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	DEFINE_FUNCTION(AUPPlayerController::execIA_Interact)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_Interact();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUPPlayerController::execIA_DefaultAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_DefaultAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUPPlayerController::execIA_Jump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_Jump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUPPlayerController::execIA_Look)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_Look(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUPPlayerController::execIA_Turn)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_Turn(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AUPPlayerController::execIA_Move)
	{
		P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IA_Move(Z_Param_Out_Value);
		P_NATIVE_END;
	}
	void AUPPlayerController::StaticRegisterNativesAUPPlayerController()
	{
		UClass* Class = AUPPlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IA_DefaultAttack", &AUPPlayerController::execIA_DefaultAttack },
			{ "IA_Interact", &AUPPlayerController::execIA_Interact },
			{ "IA_Jump", &AUPPlayerController::execIA_Jump },
			{ "IA_Look", &AUPPlayerController::execIA_Look },
			{ "IA_Move", &AUPPlayerController::execIA_Move },
			{ "IA_Turn", &AUPPlayerController::execIA_Turn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_DefaultAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_Interact", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_Interact()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_Interact_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics
	{
		struct UPPlayerController_eventIA_Look_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPlayerController_eventIA_Look_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_Look", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::UPPlayerController_eventIA_Look_Parms), Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_Look()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_Look_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics
	{
		struct UPPlayerController_eventIA_Move_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPlayerController_eventIA_Move_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_Move", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::UPPlayerController_eventIA_Move_Parms), Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics
	{
		struct UPPlayerController_eventIA_Turn_Parms
		{
			FInputActionValue Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPPlayerController_eventIA_Turn_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::NewProp_Value_MetaData)) }; // 2388133963
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUPPlayerController, nullptr, "IA_Turn", nullptr, nullptr, sizeof(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::UPPlayerController_eventIA_Turn_Parms), Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUPPlayerController_IA_Turn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AUPPlayerController_IA_Turn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUPPlayerController);
	UClass* Z_Construct_UClass_AUPPlayerController_NoRegister()
	{
		return AUPPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AUPPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TurnAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAttackAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultAttackAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InteractAction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ActionState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ActionState;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUPPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUPPlayerController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUPPlayerController_IA_DefaultAttack, "IA_DefaultAttack" }, // 3309198706
		{ &Z_Construct_UFunction_AUPPlayerController_IA_Interact, "IA_Interact" }, // 3205935114
		{ &Z_Construct_UFunction_AUPPlayerController_IA_Jump, "IA_Jump" }, // 353707581
		{ &Z_Construct_UFunction_AUPPlayerController_IA_Look, "IA_Look" }, // 1008403271
		{ &Z_Construct_UFunction_AUPPlayerController_IA_Move, "IA_Move" }, // 1101812443
		{ &Z_Construct_UFunction_AUPPlayerController_IA_Turn, "IA_Turn" }, // 2293849063
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "PlayerController/UPPlayerController.h" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, PlayerCharacter), Z_Construct_UClass_Aue5_portfolioCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InputMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InputMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_TurnAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_TurnAction = { "TurnAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, TurnAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_TurnAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_TurnAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_DefaultAttackAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_DefaultAttackAction = { "DefaultAttackAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, DefaultAttackAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_DefaultAttackAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_DefaultAttackAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InteractAction_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/PlayerController/UPPlayerController.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState = { "ActionState", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AUPPlayerController, ActionState), Z_Construct_UEnum_ue5_portfolio_EActionState, METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState_MetaData)) }; // 1890732757
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUPPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InputMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_TurnAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_DefaultAttackAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_InteractAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUPPlayerController_Statics::NewProp_ActionState,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUPPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUPPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUPPlayerController_Statics::ClassParams = {
		&AUPPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUPPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUPPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUPPlayerController()
	{
		if (!Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton, Z_Construct_UClass_AUPPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUPPlayerController.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<AUPPlayerController>()
	{
		return AUPPlayerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUPPlayerController);
	AUPPlayerController::~AUPPlayerController() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_PlayerController_UPPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_PlayerController_UPPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUPPlayerController, AUPPlayerController::StaticClass, TEXT("AUPPlayerController"), &Z_Registration_Info_UClass_AUPPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUPPlayerController), 3998686815U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_PlayerController_UPPlayerController_h_1906054408(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_PlayerController_UPPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_PlayerController_UPPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
