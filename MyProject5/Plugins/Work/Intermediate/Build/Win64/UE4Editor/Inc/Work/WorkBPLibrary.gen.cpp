// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Public/WorkBPLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorkBPLibrary() {}
// Cross Module References
	WORK_API UFunction* Z_Construct_UFunction_UWorkBPLibrary_Input_BP();
	WORK_API UClass* Z_Construct_UClass_UWorkBPLibrary();
	WORK_API UFunction* Z_Construct_UFunction_UWorkBPLibrary_LinearRegressionCalc();
	WORK_API UFunction* Z_Construct_UFunction_UWorkBPLibrary_NNCalc();
	WORK_API UFunction* Z_Construct_UFunction_UWorkBPLibrary_Output_BP();
	WORK_API UFunction* Z_Construct_UFunction_UWorkBPLibrary_Train();
	WORK_API UClass* Z_Construct_UClass_UWorkBPLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Work();
// End Cross Module References
	void UWorkBPLibrary::StaticRegisterNativesUWorkBPLibrary()
	{
		UClass* Class = UWorkBPLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "Input_BP", (Native)&UWorkBPLibrary::execInput_BP },
			{ "LinearRegressionCalc", (Native)&UWorkBPLibrary::execLinearRegressionCalc },
			{ "NNCalc", (Native)&UWorkBPLibrary::execNNCalc },
			{ "Output_BP", (Native)&UWorkBPLibrary::execOutput_BP },
			{ "Train", (Native)&UWorkBPLibrary::execTrain },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UWorkBPLibrary_Input_BP()
	{
		struct WorkBPLibrary_eventInput_BP_Parms
		{
			FText index;
			float value;
		};
		UObject* Outer = Z_Construct_UClass_UWorkBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Input_BP"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WorkBPLibrary_eventInput_BP_Parms));
			UProperty* NewProp_value = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("value"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(value, WorkBPLibrary_eventInput_BP_Parms), 0x0010000000000080);
			UProperty* NewProp_index = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("index"), RF_Public|RF_Transient|RF_MarkAsNative) UTextProperty(CPP_PROPERTY_BASE(index, WorkBPLibrary_eventInput_BP_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("InputBP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWorkBPLibrary_LinearRegressionCalc()
	{
		struct WorkBPLibrary_eventLinearRegressionCalc_Parms
		{
			FString inputs;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWorkBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("LinearRegressionCalc"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WorkBPLibrary_eventLinearRegressionCalc_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, WorkBPLibrary_eventLinearRegressionCalc_Parms), 0x0010000000000580);
			UProperty* NewProp_inputs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inputs"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(inputs, WorkBPLibrary_eventLinearRegressionCalc_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Train_BP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWorkBPLibrary_NNCalc()
	{
		struct WorkBPLibrary_eventNNCalc_Parms
		{
			FString inputs;
			float ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UWorkBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("NNCalc"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WorkBPLibrary_eventNNCalc_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(ReturnValue, WorkBPLibrary_eventNNCalc_Parms), 0x0010000000000580);
			UProperty* NewProp_inputs = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("inputs"), RF_Public|RF_Transient|RF_MarkAsNative) UStrProperty(CPP_PROPERTY_BASE(inputs, WorkBPLibrary_eventNNCalc_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Train_BP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWorkBPLibrary_Output_BP()
	{
		UObject* Outer = Z_Construct_UClass_UWorkBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Output_BP"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Output_BP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UWorkBPLibrary_Train()
	{
		struct WorkBPLibrary_eventTrain_Parms
		{
			int32 numFeatures;
		};
		UObject* Outer = Z_Construct_UClass_UWorkBPLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("Train"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(WorkBPLibrary_eventTrain_Parms));
			UProperty* NewProp_numFeatures = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("numFeatures"), RF_Public|RF_Transient|RF_MarkAsNative) UUnsizedIntProperty(CPP_PROPERTY_BASE(numFeatures, WorkBPLibrary_eventTrain_Parms), 0x0010000000000080);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Train_BP"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWorkBPLibrary_NoRegister()
	{
		return UWorkBPLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UWorkBPLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_Work();
			OuterClass = UWorkBPLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20000080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UWorkBPLibrary_Input_BP());
				OuterClass->LinkChild(Z_Construct_UFunction_UWorkBPLibrary_LinearRegressionCalc());
				OuterClass->LinkChild(Z_Construct_UFunction_UWorkBPLibrary_NNCalc());
				OuterClass->LinkChild(Z_Construct_UFunction_UWorkBPLibrary_Output_BP());
				OuterClass->LinkChild(Z_Construct_UFunction_UWorkBPLibrary_Train());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWorkBPLibrary_Input_BP(), "Input_BP"); // 2534610658
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWorkBPLibrary_LinearRegressionCalc(), "LinearRegressionCalc"); // 59726122
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWorkBPLibrary_NNCalc(), "NNCalc"); // 3067381222
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWorkBPLibrary_Output_BP(), "Output_BP"); // 2237330749
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UWorkBPLibrary_Train(), "Train"); // 1456096078
				static TCppClassTypeInfo<TCppClassTypeTraits<UWorkBPLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("WorkBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/WorkBPLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ToolTip"), TEXT("*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWorkBPLibrary, 3433537904);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWorkBPLibrary(Z_Construct_UClass_UWorkBPLibrary, &UWorkBPLibrary::StaticClass, TEXT("/Script/Work"), TEXT("UWorkBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWorkBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
