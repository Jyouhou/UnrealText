// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Sensor/CameraSensor/FusionCamSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFusionCamSensor() {}
// Cross Module References
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_EPresetFilmSize();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_ESegMode();
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_EDepthMode();
	UNREALCV_API UEnum* Z_Construct_UEnum_UnrealCV_ELitMode();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetDepth();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetLit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetNormal();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSeg();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_SetFilmSize();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation();
	UNREALCV_API UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation();
	UNREALCV_API UClass* Z_Construct_UClass_ULitCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UAnnotationCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UNormalCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UDepthCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	static UEnum* EPresetFilmSize_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_EPresetFilmSize, Z_Construct_UPackage__Script_UnrealCV(), TEXT("EPresetFilmSize"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<EPresetFilmSize>()
	{
		return EPresetFilmSize_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPresetFilmSize(EPresetFilmSize_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("EPresetFilmSize"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_EPresetFilmSize_Hash() { return 183672639U; }
	UEnum* Z_Construct_UEnum_UnrealCV_EPresetFilmSize()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPresetFilmSize"), 0, Get_Z_Construct_UEnum_UnrealCV_EPresetFilmSize_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPresetFilmSize::F640x480", (int64)EPresetFilmSize::F640x480 },
				{ "EPresetFilmSize::F720p", (int64)EPresetFilmSize::F720p },
				{ "EPresetFilmSize::F1080p", (int64)EPresetFilmSize::F1080p },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"EPresetFilmSize",
				"EPresetFilmSize",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ESegMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_ESegMode, Z_Construct_UPackage__Script_UnrealCV(), TEXT("ESegMode"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<ESegMode>()
	{
		return ESegMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESegMode(ESegMode_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("ESegMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_ESegMode_Hash() { return 2666903804U; }
	UEnum* Z_Construct_UEnum_UnrealCV_ESegMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESegMode"), 0, Get_Z_Construct_UEnum_UnrealCV_ESegMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESegMode::AnnotationComponent", (int64)ESegMode::AnnotationComponent },
				{ "ESegMode::VertexColor", (int64)ESegMode::VertexColor },
				{ "ESegMode::CustomStencil", (int64)ESegMode::CustomStencil },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"ESegMode",
				"ESegMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDepthMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_EDepthMode, Z_Construct_UPackage__Script_UnrealCV(), TEXT("EDepthMode"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<EDepthMode>()
	{
		return EDepthMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDepthMode(EDepthMode_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("EDepthMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_EDepthMode_Hash() { return 1841760979U; }
	UEnum* Z_Construct_UEnum_UnrealCV_EDepthMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDepthMode"), 0, Get_Z_Construct_UEnum_UnrealCV_EDepthMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDepthMode::PlaneDepth", (int64)EDepthMode::PlaneDepth },
				{ "EDepthMode::DistToCamCenter", (int64)EDepthMode::DistToCamCenter },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"EDepthMode",
				"EDepthMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ELitMode_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_UnrealCV_ELitMode, Z_Construct_UPackage__Script_UnrealCV(), TEXT("ELitMode"));
		}
		return Singleton;
	}
	template<> UNREALCV_API UEnum* StaticEnum<ELitMode>()
	{
		return ELitMode_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ELitMode(ELitMode_StaticEnum, TEXT("/Script/UnrealCV"), TEXT("ELitMode"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_UnrealCV_ELitMode_Hash() { return 1456898216U; }
	UEnum* Z_Construct_UEnum_UnrealCV_ELitMode()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ELitMode"), 0, Get_Z_Construct_UEnum_UnrealCV_ELitMode_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ELitMode::Lit", (int64)ELitMode::Lit },
				{ "ELitMode::Slow", (int64)ELitMode::Slow },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_UnrealCV,
				nullptr,
				"ELitMode",
				"ELitMode",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void UFusionCamSensor::StaticRegisterNativesUFusionCamSensor()
	{
		UClass* Class = UFusionCamSensor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetDepth", &UFusionCamSensor::execGetDepth },
			{ "GetFilmHeight", &UFusionCamSensor::execGetFilmHeight },
			{ "GetFilmWidth", &UFusionCamSensor::execGetFilmWidth },
			{ "GetLit", &UFusionCamSensor::execGetLit },
			{ "GetNormal", &UFusionCamSensor::execGetNormal },
			{ "GetSeg", &UFusionCamSensor::execGetSeg },
			{ "GetSensorFOV", &UFusionCamSensor::execGetSensorFOV },
			{ "GetSensorLocation", &UFusionCamSensor::execGetSensorLocation },
			{ "GetSensorRotation", &UFusionCamSensor::execGetSensorRotation },
			{ "SetFilmSize", &UFusionCamSensor::execSetFilmSize },
			{ "SetSensorFOV", &UFusionCamSensor::execSetSensorFOV },
			{ "SetSensorLocation", &UFusionCamSensor::execSetSensorLocation },
			{ "SetSensorRotation", &UFusionCamSensor::execSetSensorRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics
	{
		struct FusionCamSensor_eventGetDepth_Parms
		{
			TArray<float> DepthData;
			int32 InOutWidth;
			int32 InOutHeight;
			EDepthMode DepthMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DepthMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DepthMode_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InOutHeight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InOutWidth;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DepthData;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DepthData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthMode = { "DepthMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetDepth_Parms, DepthMode), Z_Construct_UEnum_UnrealCV_EDepthMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_InOutHeight = { "InOutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetDepth_Parms, InOutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_InOutWidth = { "InOutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetDepth_Parms, InOutWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthData = { "DepthData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetDepth_Parms, DepthData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthData_Inner = { "DepthData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_InOutHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_InOutWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::NewProp_DepthData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_DepthMode", "PlaneDepth" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ToolTip", "Get depth data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetDepth", sizeof(FusionCamSensor_eventGetDepth_Parms), Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetDepth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetDepth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics
	{
		struct FusionCamSensor_eventGetFilmHeight_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetFilmHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetFilmHeight", sizeof(FusionCamSensor_eventGetFilmHeight_Parms), Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics
	{
		struct FusionCamSensor_eventGetFilmWidth_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetFilmWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetFilmWidth", sizeof(FusionCamSensor_eventGetFilmWidth_Parms), Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics
	{
		struct FusionCamSensor_eventGetLit_Parms
		{
			TArray<FColor> LitData;
			int32 InOutWidth;
			int32 InOutHeight;
			ELitMode LitMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_LitMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LitMode_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InOutHeight;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_InOutWidth;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LitData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LitData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitMode = { "LitMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetLit_Parms, LitMode), Z_Construct_UEnum_UnrealCV_ELitMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_InOutHeight = { "InOutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetLit_Parms, InOutHeight), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_InOutWidth = { "InOutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetLit_Parms, InOutWidth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitData = { "LitData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetLit_Parms, LitData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitData_Inner = { "LitData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_InOutHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_InOutWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::NewProp_LitData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_LitMode", "Lit" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ToolTip", "Get rgb data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetLit", sizeof(FusionCamSensor_eventGetLit_Parms), Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetLit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetLit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics
	{
		struct FusionCamSensor_eventGetNormal_Parms
		{
			TArray<FColor> NormalData;
			int32 Width;
			int32 Height;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NormalData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetNormal_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetNormal_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_NormalData = { "NormalData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetNormal_Parms, NormalData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_NormalData_Inner = { "NormalData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_NormalData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::NewProp_NormalData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ToolTip", "Get surface normal data" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetNormal", sizeof(FusionCamSensor_eventGetNormal_Parms), Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics
	{
		struct FusionCamSensor_eventGetSeg_Parms
		{
			TArray<FColor> ObjMaskData;
			int32 Width;
			int32 Height;
			ESegMode SegMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SegMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SegMode_Underlying;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ObjMaskData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObjMaskData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_SegMode = { "SegMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSeg_Parms, SegMode), Z_Construct_UEnum_UnrealCV_ESegMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_SegMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSeg_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSeg_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_ObjMaskData = { "ObjMaskData", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSeg_Parms, ObjMaskData), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_ObjMaskData_Inner = { "ObjMaskData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_SegMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_SegMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_Width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_ObjMaskData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::NewProp_ObjMaskData_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "CPP_Default_SegMode", "AnnotationComponent" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ToolTip", "Get object mask data, the annotation color can be extracted from FObjectAnnotator" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetSeg", sizeof(FusionCamSensor_eventGetSeg_Parms), Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSeg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetSeg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics
	{
		struct FusionCamSensor_eventGetSensorFOV_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSensorFOV_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetSensorFOV", sizeof(FusionCamSensor_eventGetSensorFOV_Parms), Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics
	{
		struct FusionCamSensor_eventGetSensorLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSensorLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetSensorLocation", sizeof(FusionCamSensor_eventGetSensorLocation_Parms), Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics
	{
		struct FusionCamSensor_eventGetSensorRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventGetSensorRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "GetSensorRotation", sizeof(FusionCamSensor_eventGetSensorRotation_Parms), Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics
	{
		struct FusionCamSensor_eventSetFilmSize_Parms
		{
			int32 Width;
			int32 Height;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Height;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Width;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventSetFilmSize_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventSetFilmSize_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::NewProp_Height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::NewProp_Width,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "SetFilmSize", sizeof(FusionCamSensor_eventSetFilmSize_Parms), Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_SetFilmSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_SetFilmSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics
	{
		struct FusionCamSensor_eventSetSensorFOV_Parms
		{
			float FOV;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventSetSensorFOV_Parms, FOV), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::NewProp_FOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "SetSensorFOV", sizeof(FusionCamSensor_eventSetSensorFOV_Parms), Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics
	{
		struct FusionCamSensor_eventSetSensorLocation_Parms
		{
			FVector Location;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventSetSensorLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "SetSensorLocation", sizeof(FusionCamSensor_eventSetSensorLocation_Parms), Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics
	{
		struct FusionCamSensor_eventSetSensorRotation_Parms
		{
			FRotator Rotator;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::NewProp_Rotator = { "Rotator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FusionCamSensor_eventSetSensorRotation_Parms, Rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::NewProp_Rotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "unrealcv" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFusionCamSensor, nullptr, "SetSensorRotation", sizeof(FusionCamSensor_eventSetSensorRotation_Parms), Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UFusionCamSensor_NoRegister()
	{
		return UFusionCamSensor::StaticClass();
	}
	struct Z_Construct_UClass_UFusionCamSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LitCamSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LitCamSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnnotationCamSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnnotationCamSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCamSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NormalCamSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DepthCamSensor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DepthCamSensor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FusionSensors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FusionSensors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FusionSensors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FilmHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilmWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FilmWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PresetFilmSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PresetFilmSize;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PresetFilmSize_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviewCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreviewCamera;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFusionCamSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFusionCamSensor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFusionCamSensor_GetDepth, "GetDepth" }, // 1097114236
		{ &Z_Construct_UFunction_UFusionCamSensor_GetFilmHeight, "GetFilmHeight" }, // 1894848186
		{ &Z_Construct_UFunction_UFusionCamSensor_GetFilmWidth, "GetFilmWidth" }, // 441785170
		{ &Z_Construct_UFunction_UFusionCamSensor_GetLit, "GetLit" }, // 3147791407
		{ &Z_Construct_UFunction_UFusionCamSensor_GetNormal, "GetNormal" }, // 646731142
		{ &Z_Construct_UFunction_UFusionCamSensor_GetSeg, "GetSeg" }, // 1715618421
		{ &Z_Construct_UFunction_UFusionCamSensor_GetSensorFOV, "GetSensorFOV" }, // 513521673
		{ &Z_Construct_UFunction_UFusionCamSensor_GetSensorLocation, "GetSensorLocation" }, // 574021448
		{ &Z_Construct_UFunction_UFusionCamSensor_GetSensorRotation, "GetSensorRotation" }, // 1776049813
		{ &Z_Construct_UFunction_UFusionCamSensor_SetFilmSize, "SetFilmSize" }, // 119602209
		{ &Z_Construct_UFunction_UFusionCamSensor_SetSensorFOV, "SetSensorFOV" }, // 2364987778
		{ &Z_Construct_UFunction_UFusionCamSensor_SetSensorLocation, "SetSensorLocation" }, // 2995719486
		{ &Z_Construct_UFunction_UFusionCamSensor_SetSensorRotation, "SetSensorRotation" }, // 1631424974
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_LitCamSensor_MetaData[] = {
		{ "Category", "FusionCamSensor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_LitCamSensor = { "LitCamSensor", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, LitCamSensor), Z_Construct_UClass_ULitCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_LitCamSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_LitCamSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_AnnotationCamSensor_MetaData[] = {
		{ "Category", "FusionCamSensor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_AnnotationCamSensor = { "AnnotationCamSensor", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, AnnotationCamSensor), Z_Construct_UClass_UAnnotationCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_AnnotationCamSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_AnnotationCamSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_NormalCamSensor_MetaData[] = {
		{ "Category", "FusionCamSensor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_NormalCamSensor = { "NormalCamSensor", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, NormalCamSensor), Z_Construct_UClass_UNormalCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_NormalCamSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_NormalCamSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_DepthCamSensor_MetaData[] = {
		{ "Category", "FusionCamSensor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_DepthCamSensor = { "DepthCamSensor", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, DepthCamSensor), Z_Construct_UClass_UDepthCamSensor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_DepthCamSensor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_DepthCamSensor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors = { "FusionSensors", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, FusionSensors), METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors_Inner = { "FusionSensors", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseCameraSensor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FOV_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FusionCamSensor" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FOV = { "FOV", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, FOV), METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FOV_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmHeight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FusionCamSensor" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmHeight = { "FilmHeight", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, FilmHeight), METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmWidth_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FusionCamSensor" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmWidth = { "FilmWidth", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, FilmWidth), METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "FusionCamSensor" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize = { "PresetFilmSize", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, PresetFilmSize), Z_Construct_UEnum_UnrealCV_EPresetFilmSize, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PreviewCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/FusionCamSensor.h" },
		{ "ToolTip", "void SetFilmSize(int Width, int Height);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PreviewCamera = { "PreviewCamera", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFusionCamSensor, PreviewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PreviewCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PreviewCamera_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFusionCamSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_LitCamSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_AnnotationCamSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_NormalCamSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_DepthCamSensor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FusionSensors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_FilmWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PresetFilmSize_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFusionCamSensor_Statics::NewProp_PreviewCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFusionCamSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFusionCamSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFusionCamSensor_Statics::ClassParams = {
		&UFusionCamSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UFusionCamSensor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFusionCamSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFusionCamSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFusionCamSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFusionCamSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFusionCamSensor, 2808725155);
	template<> UNREALCV_API UClass* StaticClass<UFusionCamSensor>()
	{
		return UFusionCamSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFusionCamSensor(Z_Construct_UClass_UFusionCamSensor, &UFusionCamSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UFusionCamSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFusionCamSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
