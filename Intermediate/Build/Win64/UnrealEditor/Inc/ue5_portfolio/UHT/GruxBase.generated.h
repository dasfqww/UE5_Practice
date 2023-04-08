// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Enemy/GruxBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef UE5_PORTFOLIO_GruxBase_generated_h
#error "GruxBase.generated.h already included, missing '#pragma once' in GruxBase.h"
#endif
#define UE5_PORTFOLIO_GruxBase_generated_h

#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_SPARSE_DATA
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRightWeaponOverlap); \
	DECLARE_FUNCTION(execOnLeftWeaponOverlap); \
	DECLARE_FUNCTION(execSetRightWeaponCollisionEnabled); \
	DECLARE_FUNCTION(execSetLeftWeaponCollisionEnabled);


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRightWeaponOverlap); \
	DECLARE_FUNCTION(execOnLeftWeaponOverlap); \
	DECLARE_FUNCTION(execSetRightWeaponCollisionEnabled); \
	DECLARE_FUNCTION(execSetLeftWeaponCollisionEnabled);


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_ACCESSORS
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGruxBase(); \
	friend struct Z_Construct_UClass_AGruxBase_Statics; \
public: \
	DECLARE_CLASS(AGruxBase, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ue5_portfolio"), NO_API) \
	DECLARE_SERIALIZER(AGruxBase)


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAGruxBase(); \
	friend struct Z_Construct_UClass_AGruxBase_Statics; \
public: \
	DECLARE_CLASS(AGruxBase, AEnemy, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ue5_portfolio"), NO_API) \
	DECLARE_SERIALIZER(AGruxBase)


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGruxBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGruxBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGruxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGruxBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGruxBase(AGruxBase&&); \
	NO_API AGruxBase(const AGruxBase&); \
public: \
	NO_API virtual ~AGruxBase();


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGruxBase(AGruxBase&&); \
	NO_API AGruxBase(const AGruxBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGruxBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGruxBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGruxBase) \
	NO_API virtual ~AGruxBase();


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_15_PROLOG
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_RPC_WRAPPERS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_INCLASS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_PORTFOLIO_API UClass* StaticClass<class AGruxBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Practice_Source_ue5_portfolio_Public_Enemy_GruxBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
