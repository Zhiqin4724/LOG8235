// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SOFTDESIGNTRAINING_SDTAIController_generated_h
#error "SDTAIController.generated.h already included, missing '#pragma once' in SDTAIController.h"
#endif
#define SOFTDESIGNTRAINING_SDTAIController_generated_h

#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_SPARSE_DATA
#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMoveWithSpeed);


#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMoveWithSpeed);


#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASDTAIController(); \
	friend struct Z_Construct_UClass_ASDTAIController_Statics; \
public: \
	DECLARE_CLASS(ASDTAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoftDesignTraining"), NO_API) \
	DECLARE_SERIALIZER(ASDTAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesASDTAIController(); \
	friend struct Z_Construct_UClass_ASDTAIController_Statics; \
public: \
	DECLARE_CLASS(ASDTAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SoftDesignTraining"), NO_API) \
	DECLARE_SERIALIZER(ASDTAIController) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDTAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDTAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDTAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDTAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDTAIController(ASDTAIController&&); \
	NO_API ASDTAIController(const ASDTAIController&); \
public:


#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASDTAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASDTAIController(ASDTAIController&&); \
	NO_API ASDTAIController(const ASDTAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASDTAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASDTAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASDTAIController)


#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_13_PROLOG
#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_SPARSE_DATA \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_RPC_WRAPPERS \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_INCLASS \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_SPARSE_DATA \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_INCLASS_NO_PURE_DECLS \
	FID_TP1_Source_SoftDesignTraining_SDTAIController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SOFTDESIGNTRAINING_API UClass* StaticClass<class ASDTAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TP1_Source_SoftDesignTraining_SDTAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
