// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ue5_portfolioCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef UE5_PORTFOLIO_ue5_portfolioCharacter_generated_h
#error "ue5_portfolioCharacter.generated.h already included, missing '#pragma once' in ue5_portfolioCharacter.h"
#endif
#define UE5_PORTFOLIO_ue5_portfolioCharacter_generated_h

#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_SPARSE_DATA
#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHitReactEnd); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execAttachWeaponToHand); \
	DECLARE_FUNCTION(execAttachWeaponToBack); \
	DECLARE_FUNCTION(execAttackInputChecking);


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHitReactEnd); \
	DECLARE_FUNCTION(execFinishEquipping); \
	DECLARE_FUNCTION(execAttachWeaponToHand); \
	DECLARE_FUNCTION(execAttachWeaponToBack); \
	DECLARE_FUNCTION(execAttackInputChecking);


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_ACCESSORS
#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAue5_portfolioCharacter(); \
	friend struct Z_Construct_UClass_Aue5_portfolioCharacter_Statics; \
public: \
	DECLARE_CLASS(Aue5_portfolioCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ue5_portfolio"), NO_API) \
	DECLARE_SERIALIZER(Aue5_portfolioCharacter)


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAue5_portfolioCharacter(); \
	friend struct Z_Construct_UClass_Aue5_portfolioCharacter_Statics; \
public: \
	DECLARE_CLASS(Aue5_portfolioCharacter, ABaseCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ue5_portfolio"), NO_API) \
	DECLARE_SERIALIZER(Aue5_portfolioCharacter)


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aue5_portfolioCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aue5_portfolioCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aue5_portfolioCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aue5_portfolioCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aue5_portfolioCharacter(Aue5_portfolioCharacter&&); \
	NO_API Aue5_portfolioCharacter(const Aue5_portfolioCharacter&); \
public: \
	NO_API virtual ~Aue5_portfolioCharacter();


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aue5_portfolioCharacter(Aue5_portfolioCharacter&&); \
	NO_API Aue5_portfolioCharacter(const Aue5_portfolioCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aue5_portfolioCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aue5_portfolioCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aue5_portfolioCharacter) \
	NO_API virtual ~Aue5_portfolioCharacter();


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_19_PROLOG
#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_RPC_WRAPPERS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_INCLASS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_INCLASS_NO_PURE_DECLS \
	FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_PORTFOLIO_API UClass* StaticClass<class Aue5_portfolioCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Practice_Source_ue5_portfolio_ue5_portfolioCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
