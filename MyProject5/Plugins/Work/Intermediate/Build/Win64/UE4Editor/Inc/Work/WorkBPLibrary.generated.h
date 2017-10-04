// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WORK_WorkBPLibrary_generated_h
#error "WorkBPLibrary.generated.h already included, missing '#pragma once' in WorkBPLibrary.h"
#endif
#define WORK_WorkBPLibrary_generated_h

#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNNCalc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWorkBPLibrary::NNCalc(Z_Param_inputs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearRegressionCalc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWorkBPLibrary::LinearRegressionCalc(Z_Param_inputs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numFeatures); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Train(Z_Param_numFeatures); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOutput_BP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Output_BP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInput_BP) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Input_BP(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	}


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNNCalc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWorkBPLibrary::NNCalc(Z_Param_inputs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLinearRegressionCalc) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_inputs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UWorkBPLibrary::LinearRegressionCalc(Z_Param_inputs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTrain) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_numFeatures); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Train(Z_Param_numFeatures); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOutput_BP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Output_BP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInput_BP) \
	{ \
		P_GET_PROPERTY(UTextProperty,Z_Param_index); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UWorkBPLibrary::Input_BP(Z_Param_index,Z_Param_value); \
		P_NATIVE_END; \
	}


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWorkBPLibrary(); \
	friend WORK_API class UClass* Z_Construct_UClass_UWorkBPLibrary(); \
public: \
	DECLARE_CLASS(UWorkBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Work"), NO_API) \
	DECLARE_SERIALIZER(UWorkBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUWorkBPLibrary(); \
	friend WORK_API class UClass* Z_Construct_UClass_UWorkBPLibrary(); \
public: \
	DECLARE_CLASS(UWorkBPLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Work"), NO_API) \
	DECLARE_SERIALIZER(UWorkBPLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorkBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkBPLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorkBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkBPLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorkBPLibrary(UWorkBPLibrary&&); \
	NO_API UWorkBPLibrary(const UWorkBPLibrary&); \
public:


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWorkBPLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWorkBPLibrary(UWorkBPLibrary&&); \
	NO_API UWorkBPLibrary(const UWorkBPLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWorkBPLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWorkBPLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWorkBPLibrary)


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET
#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_24_PROLOG
#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_RPC_WRAPPERS \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_INCLASS \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_PRIVATE_PROPERTY_OFFSET \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_INCLASS_NO_PURE_DECLS \
	MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h_27_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class WorkBPLibrary."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject5_Plugins_Work_Source_Work_Public_WorkBPLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
