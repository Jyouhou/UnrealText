// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/BPFunctionLib/SerializeBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializeBPLib() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_USerializeBPLib_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_USerializeBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_ArrayToJson();
	UNREALCV_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectBP();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_ColorToJson();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_FloatToJson();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_IntToJson();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_JsonToStr();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_RotatorToJson();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_StringMapToJson();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_StringToJson();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_TMapToJson();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_TransformToJson();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UNREALCV_API UFunction* Z_Construct_UFunction_USerializeBPLib_VectorToJson();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void USerializeBPLib::StaticRegisterNativesUSerializeBPLib()
	{
		UClass* Class = USerializeBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ArrayToJson", &USerializeBPLib::execArrayToJson },
			{ "ColorToJson", &USerializeBPLib::execColorToJson },
			{ "FloatToJson", &USerializeBPLib::execFloatToJson },
			{ "IntToJson", &USerializeBPLib::execIntToJson },
			{ "JsonToStr", &USerializeBPLib::execJsonToStr },
			{ "RotatorToJson", &USerializeBPLib::execRotatorToJson },
			{ "StringMapToJson", &USerializeBPLib::execStringMapToJson },
			{ "StringToJson", &USerializeBPLib::execStringToJson },
			{ "TMapToJson", &USerializeBPLib::execTMapToJson },
			{ "TransformToJson", &USerializeBPLib::execTransformToJson },
			{ "VectorToJson", &USerializeBPLib::execVectorToJson },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics
	{
		struct SerializeBPLib_eventArrayToJson_Parms
		{
			TArray<FJsonObjectBP> Array;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Array_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Array;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Array_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventArrayToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array = { "Array", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventArrayToJson_Parms, Array), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array_Inner = { "Array", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::NewProp_Array_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
		{ "ToolTip", "Convert string array to json\nUFUNCTION(BlueprintPure, Category = \"unrealcv\")\nstatic FString StrArrayToJson(const TArray<FString>& Array);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "ArrayToJson", sizeof(SerializeBPLib_eventArrayToJson_Parms), Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_ArrayToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_ArrayToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics
	{
		struct SerializeBPLib_eventColorToJson_Parms
		{
			FColor Color;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventColorToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_Color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventColorToJson_Parms, Color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_Color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_Color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "ColorToJson", sizeof(SerializeBPLib_eventColorToJson_Parms), Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_ColorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_ColorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics
	{
		struct SerializeBPLib_eventFloatToJson_Parms
		{
			float Value;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventFloatToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventFloatToJson_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
		{ "ToolTip", "Convert to json" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "FloatToJson", sizeof(SerializeBPLib_eventFloatToJson_Parms), Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_FloatToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_FloatToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics
	{
		struct SerializeBPLib_eventIntToJson_Parms
		{
			int32 Value;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventIntToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventIntToJson_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "IntToJson", sizeof(SerializeBPLib_eventIntToJson_Parms), Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_IntToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_IntToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics
	{
		struct SerializeBPLib_eventJsonToStr_Parms
		{
			FJsonObjectBP JsonObjectBP;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JsonObjectBP_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JsonObjectBP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventJsonToStr_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_JsonObjectBP_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_JsonObjectBP = { "JsonObjectBP", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventJsonToStr_Parms, JsonObjectBP), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_JsonObjectBP_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_JsonObjectBP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::NewProp_JsonObjectBP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
		{ "ToolTip", "Automatically cast json object to string" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "JsonToStr", sizeof(SerializeBPLib_eventJsonToStr_Parms), Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_JsonToStr()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_JsonToStr_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics
	{
		struct SerializeBPLib_eventRotatorToJson_Parms
		{
			FRotator Rotator;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventRotatorToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_Rotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventRotatorToJson_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_Rotator_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_Rotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::NewProp_Rotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "RotatorToJson", sizeof(SerializeBPLib_eventRotatorToJson_Parms), Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_RotatorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_RotatorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics
	{
		struct SerializeBPLib_eventStringMapToJson_Parms
		{
			TArray<FString> Keys;
			TArray<FString> Values;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventStringMapToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventStringMapToJson_Parms, Values), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventStringMapToJson_Parms, Keys), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::NewProp_Keys_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
		{ "ToolTip", "TMap is not supported in BP" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "StringMapToJson", sizeof(SerializeBPLib_eventStringMapToJson_Parms), Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_StringMapToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_StringMapToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics
	{
		struct SerializeBPLib_eventStringToJson_Parms
		{
			FString Value;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventStringToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventStringToJson_Parms, Value), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_Value_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "StringToJson", sizeof(SerializeBPLib_eventStringToJson_Parms), Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_StringToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_StringToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics
	{
		struct SerializeBPLib_eventTMapToJson_Parms
		{
			TArray<FString> Keys;
			TArray<FJsonObjectBP> Values;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Keys_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventTMapToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventTMapToJson_Parms, Values), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventTMapToJson_Parms, Keys), METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Values_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::NewProp_Keys_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "TMapToJson", sizeof(SerializeBPLib_eventTMapToJson_Parms), Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_TMapToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_TMapToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics
	{
		struct SerializeBPLib_eventTransformToJson_Parms
		{
			FTransform Transform;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventTransformToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventTransformToJson_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_Transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_Transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::NewProp_Transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "TransformToJson", sizeof(SerializeBPLib_eventTransformToJson_Parms), Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_TransformToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_TransformToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics
	{
		struct SerializeBPLib_eventVectorToJson_Parms
		{
			FVector Vec;
			FJsonObjectBP ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vec_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vec;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventVectorToJson_Parms, ReturnValue), Z_Construct_UScriptStruct_FJsonObjectBP, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_Vec_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_Vec = { "Vec", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SerializeBPLib_eventVectorToJson_Parms, Vec), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_Vec_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_Vec_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::NewProp_Vec,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::Function_MetaDataParams[] = {
		{ "BlueprintAutocast", "" },
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USerializeBPLib, nullptr, "VectorToJson", sizeof(SerializeBPLib_eventVectorToJson_Parms), Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USerializeBPLib_VectorToJson()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USerializeBPLib_VectorToJson_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USerializeBPLib_NoRegister()
	{
		return USerializeBPLib::StaticClass();
	}
	struct Z_Construct_UClass_USerializeBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USerializeBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USerializeBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USerializeBPLib_ArrayToJson, "ArrayToJson" }, // 4254792703
		{ &Z_Construct_UFunction_USerializeBPLib_ColorToJson, "ColorToJson" }, // 3199081999
		{ &Z_Construct_UFunction_USerializeBPLib_FloatToJson, "FloatToJson" }, // 3112644410
		{ &Z_Construct_UFunction_USerializeBPLib_IntToJson, "IntToJson" }, // 1575427185
		{ &Z_Construct_UFunction_USerializeBPLib_JsonToStr, "JsonToStr" }, // 290754226
		{ &Z_Construct_UFunction_USerializeBPLib_RotatorToJson, "RotatorToJson" }, // 2240531321
		{ &Z_Construct_UFunction_USerializeBPLib_StringMapToJson, "StringMapToJson" }, // 223596269
		{ &Z_Construct_UFunction_USerializeBPLib_StringToJson, "StringToJson" }, // 836450510
		{ &Z_Construct_UFunction_USerializeBPLib_TMapToJson, "TMapToJson" }, // 3694679264
		{ &Z_Construct_UFunction_USerializeBPLib_TransformToJson, "TransformToJson" }, // 2678995076
		{ &Z_Construct_UFunction_USerializeBPLib_VectorToJson, "VectorToJson" }, // 509146376
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USerializeBPLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunctionLib/SerializeBPLib.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SerializeBPLib.h" },
		{ "ToolTip", "A static BP library to serialize data to string, mainly for json" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USerializeBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USerializeBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USerializeBPLib_Statics::ClassParams = {
		&USerializeBPLib::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USerializeBPLib_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USerializeBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USerializeBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USerializeBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USerializeBPLib, 2916142390);
	template<> UNREALCV_API UClass* StaticClass<USerializeBPLib>()
	{
		return USerializeBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USerializeBPLib(Z_Construct_UClass_USerializeBPLib, &USerializeBPLib::StaticClass, TEXT("/Script/UnrealCV"), TEXT("USerializeBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USerializeBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
