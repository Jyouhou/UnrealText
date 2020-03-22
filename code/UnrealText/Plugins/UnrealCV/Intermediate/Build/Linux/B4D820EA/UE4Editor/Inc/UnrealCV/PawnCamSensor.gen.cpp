// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Private/Sensor/CameraSensor/PawnCamSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnCamSensor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UPawnCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UPawnCamSensor();
	UNREALCV_API UClass* Z_Construct_UClass_UFusionCamSensor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UPawnCamSensor::StaticRegisterNativesUPawnCamSensor()
	{
	}
	UClass* Z_Construct_UClass_UPawnCamSensor_NoRegister()
	{
		return UPawnCamSensor::StaticClass();
	}
	struct Z_Construct_UClass_UPawnCamSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPawnCamSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFusionCamSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPawnCamSensor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Sensor/CameraSensor/PawnCamSensor.h" },
		{ "ModuleRelativePath", "Private/Sensor/CameraSensor/PawnCamSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Sensor to be attached to the player's view" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPawnCamSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPawnCamSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPawnCamSensor_Statics::ClassParams = {
		&UPawnCamSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPawnCamSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPawnCamSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPawnCamSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPawnCamSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPawnCamSensor, 913533119);
	template<> UNREALCV_API UClass* StaticClass<UPawnCamSensor>()
	{
		return UPawnCamSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPawnCamSensor(Z_Construct_UClass_UPawnCamSensor, &UPawnCamSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UPawnCamSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPawnCamSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
