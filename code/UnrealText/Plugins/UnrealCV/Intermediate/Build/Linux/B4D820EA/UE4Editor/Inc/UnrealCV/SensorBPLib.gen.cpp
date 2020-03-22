// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/BPFunctionLib/SensorBPLib.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSensorBPLib() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_USensorBPLib_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_USensorBPLib();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UFunction* Z_Construct_UFunction_USensorBPLib_GetFusionSensorList();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister();
	UNREALCV_API UFunction* Z_Construct_UFunction_USensorBPLib_GetSensorById();
// End Cross Module References
	void USensorBPLib::StaticRegisterNativesUSensorBPLib()
	{
		UClass* Class = USensorBPLib::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFusionSensorList", &USensorBPLib::execGetFusionSensorList },
			{ "GetSensorById", &USensorBPLib::execGetSensorById },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics
	{
		struct SensorBPLib_eventGetFusionSensorList_Parms
		{
			TArray<UFusionCamSensor*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SensorBPLib_eventGetFusionSensorList_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SensorBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USensorBPLib, nullptr, "GetFusionSensorList", sizeof(SensorBPLib_eventGetFusionSensorList_Parms), Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USensorBPLib_GetFusionSensorList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USensorBPLib_GetFusionSensorList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics
	{
		struct SensorBPLib_eventGetSensorById_Parms
		{
			int32 SensorId;
			UFusionCamSensor* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SensorId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SensorBPLib_eventGetSensorById_Parms, ReturnValue), Z_Construct_UClass_UFusionCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_SensorId = { "SensorId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SensorBPLib_eventGetSensorById_Parms, SensorId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::NewProp_SensorId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SensorBPLib.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USensorBPLib, nullptr, "GetSensorById", sizeof(SensorBPLib_eventGetSensorById_Parms), Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USensorBPLib_GetSensorById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USensorBPLib_GetSensorById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USensorBPLib_NoRegister()
	{
		return USensorBPLib::StaticClass();
	}
	struct Z_Construct_UClass_USensorBPLib_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USensorBPLib_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USensorBPLib_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USensorBPLib_GetFusionSensorList, "GetFusionSensorList" }, // 185229431
		{ &Z_Construct_UFunction_USensorBPLib_GetSensorById, "GetSensorById" }, // 1800801477
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USensorBPLib_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BPFunctionLib/SensorBPLib.h" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/SensorBPLib.h" },
		{ "ToolTip", "Sensor related function library" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USensorBPLib_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USensorBPLib>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USensorBPLib_Statics::ClassParams = {
		&USensorBPLib::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USensorBPLib_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_USensorBPLib_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USensorBPLib()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USensorBPLib_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USensorBPLib, 2883966850);
	template<> UNREALCV_API UClass* StaticClass<USensorBPLib>()
	{
		return USensorBPLib::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USensorBPLib(Z_Construct_UClass_USensorBPLib, &USensorBPLib::StaticClass, TEXT("/Script/UnrealCV"), TEXT("USensorBPLib"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USensorBPLib);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
