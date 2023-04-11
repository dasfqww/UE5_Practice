// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ue5_portfolio/Public/AI/Tasks/NextLocationTask.h"
#include "AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNextLocationTask() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UNextLocationTask();
	UE5_PORTFOLIO_API UClass* Z_Construct_UClass_UNextLocationTask_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ue5_portfolio();
// End Cross Module References
	void UNextLocationTask::StaticRegisterNativesUNextLocationTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNextLocationTask);
	UClass* Z_Construct_UClass_UNextLocationTask_NoRegister()
	{
		return UNextLocationTask::StaticClass();
	}
	struct Z_Construct_UClass_UNextLocationTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocationKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LocationKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNextLocationTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_ue5_portfolio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNextLocationTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/Tasks/NextLocationTask.h" },
		{ "ModuleRelativePath", "Public/AI/Tasks/NextLocationTask.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNextLocationTask_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Tasks/NextLocationTask.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNextLocationTask_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNextLocationTask, Radius), METADATA_PARAMS(Z_Construct_UClass_UNextLocationTask_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNextLocationTask_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNextLocationTask_Statics::NewProp_LocationKey_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/AI/Tasks/NextLocationTask.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNextLocationTask_Statics::NewProp_LocationKey = { "LocationKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNextLocationTask, LocationKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UNextLocationTask_Statics::NewProp_LocationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNextLocationTask_Statics::NewProp_LocationKey_MetaData)) }; // 3025891527
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNextLocationTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNextLocationTask_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNextLocationTask_Statics::NewProp_LocationKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNextLocationTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNextLocationTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNextLocationTask_Statics::ClassParams = {
		&UNextLocationTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNextLocationTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNextLocationTask_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNextLocationTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNextLocationTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNextLocationTask()
	{
		if (!Z_Registration_Info_UClass_UNextLocationTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNextLocationTask.OuterSingleton, Z_Construct_UClass_UNextLocationTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNextLocationTask.OuterSingleton;
	}
	template<> UE5_PORTFOLIO_API UClass* StaticClass<UNextLocationTask>()
	{
		return UNextLocationTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNextLocationTask);
	UNextLocationTask::~UNextLocationTask() {}
	struct Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_AI_Tasks_NextLocationTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_AI_Tasks_NextLocationTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNextLocationTask, UNextLocationTask::StaticClass, TEXT("UNextLocationTask"), &Z_Registration_Info_UClass_UNextLocationTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNextLocationTask), 1511323640U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_AI_Tasks_NextLocationTask_h_1057568730(TEXT("/Script/ue5_portfolio"),
		Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_AI_Tasks_NextLocationTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UE5_Practice_Source_ue5_portfolio_Public_AI_Tasks_NextLocationTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
