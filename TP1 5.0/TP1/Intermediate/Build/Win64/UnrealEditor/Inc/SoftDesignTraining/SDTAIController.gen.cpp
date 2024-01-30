// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoftDesignTraining/SDTAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSDTAIController() {}
// Cross Module References
	SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAIController_NoRegister();
	SOFTDESIGNTRAINING_API UClass* Z_Construct_UClass_ASDTAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SoftDesignTraining();
// End Cross Module References
	DEFINE_FUNCTION(ASDTAIController::execMoveWithSpeed)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxSpeed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Acceleration);
		P_GET_PROPERTY(FFloatProperty,Z_Param_deltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveWithSpeed(Z_Param_MaxSpeed,Z_Param_Acceleration,Z_Param_deltaTime);
		P_NATIVE_END;
	}
	void ASDTAIController::StaticRegisterNativesASDTAIController()
	{
		UClass* Class = ASDTAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MoveWithSpeed", &ASDTAIController::execMoveWithSpeed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics
	{
		struct SDTAIController_eventMoveWithSpeed_Parms
		{
			float MaxSpeed;
			float Acceleration;
			float deltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_deltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SDTAIController_eventMoveWithSpeed_Parms, MaxSpeed), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SDTAIController_eventMoveWithSpeed_Parms, Acceleration), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_deltaTime = { "deltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SDTAIController_eventMoveWithSpeed_Parms, deltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::NewProp_deltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomFunctions" },
		{ "ModuleRelativePath", "SDTAIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASDTAIController, nullptr, "MoveWithSpeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::SDTAIController_eventMoveWithSpeed_Parms), Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASDTAIController_MoveWithSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ASDTAIController_MoveWithSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASDTAIController);
	UClass* Z_Construct_UClass_ASDTAIController_NoRegister()
	{
		return ASDTAIController::StaticClass();
	}
	struct Z_Construct_UClass_ASDTAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASDTAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_SoftDesignTraining,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASDTAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASDTAIController_MoveWithSpeed, "MoveWithSpeed" }, // 2481433437
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASDTAIController_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SDTAIController.h" },
		{ "ModuleRelativePath", "SDTAIController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASDTAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASDTAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASDTAIController_Statics::ClassParams = {
		&ASDTAIController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASDTAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASDTAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASDTAIController()
	{
		if (!Z_Registration_Info_UClass_ASDTAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASDTAIController.OuterSingleton, Z_Construct_UClass_ASDTAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASDTAIController.OuterSingleton;
	}
	template<> SOFTDESIGNTRAINING_API UClass* StaticClass<ASDTAIController>()
	{
		return ASDTAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASDTAIController);
	struct Z_CompiledInDeferFile_FID_TP1_Source_SoftDesignTraining_SDTAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP1_Source_SoftDesignTraining_SDTAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASDTAIController, ASDTAIController::StaticClass, TEXT("ASDTAIController"), &Z_Registration_Info_UClass_ASDTAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASDTAIController), 3008539973U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TP1_Source_SoftDesignTraining_SDTAIController_h_3673207203(TEXT("/Script/SoftDesignTraining"),
		Z_CompiledInDeferFile_FID_TP1_Source_SoftDesignTraining_SDTAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TP1_Source_SoftDesignTraining_SDTAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
