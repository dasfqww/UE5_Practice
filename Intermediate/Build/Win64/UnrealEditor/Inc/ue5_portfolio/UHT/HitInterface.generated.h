// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HitInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef UE5_PORTFOLIO_HitInterface_generated_h
#error "HitInterface.generated.h already included, missing '#pragma once' in HitInterface.h"
#endif
#define UE5_PORTFOLIO_HitInterface_generated_h

#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_SPARSE_DATA
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS \
	virtual void GetHit_Implementation(FVector const& impactPoint, AActor* Hitter) {}; \
 \
	DECLARE_FUNCTION(execGetHit);


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void GetHit_Implementation(FVector const& impactPoint, AActor* Hitter) {}; \
 \
	DECLARE_FUNCTION(execGetHit);


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_ACCESSORS
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_CALLBACK_WRAPPERS
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE5_PORTFOLIO_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE5_PORTFOLIO_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE5_PORTFOLIO_API UHitInterface(UHitInterface&&); \
	UE5_PORTFOLIO_API UHitInterface(const UHitInterface&); \
public: \
	UE5_PORTFOLIO_API virtual ~UHitInterface();


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	UE5_PORTFOLIO_API UHitInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UE5_PORTFOLIO_API UHitInterface(UHitInterface&&); \
	UE5_PORTFOLIO_API UHitInterface(const UHitInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(UE5_PORTFOLIO_API, UHitInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitInterface) \
	UE5_PORTFOLIO_API virtual ~UHitInterface();


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUHitInterface(); \
	friend struct Z_Construct_UClass_UHitInterface_Statics; \
public: \
	DECLARE_CLASS(UHitInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ue5_portfolio"), UE5_PORTFOLIO_API) \
	DECLARE_SERIALIZER(UHitInterface)


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	static void Execute_GetHit(UObject* O, FVector const& impactPoint, AActor* Hitter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IHitInterface() {} \
public: \
	typedef UHitInterface UClassType; \
	typedef IHitInterface ThisClass; \
	static void Execute_GetHit(UObject* O, FVector const& impactPoint, AActor* Hitter); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_10_PROLOG
#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_SPARSE_DATA \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_ACCESSORS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_CALLBACK_WRAPPERS \
	FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> UE5_PORTFOLIO_API UClass* StaticClass<class UHitInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_UE5_Practice_Source_ue5_portfolio_Public_Interfaces_HitInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
