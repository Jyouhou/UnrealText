// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Sensor/CameraSensor/DepthCamSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDepthCamSensor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UDepthCamSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UDepthCamSensor();
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UDepthCamSensor::StaticRegisterNativesUDepthCamSensor()
	{
	}
	UClass* Z_Construct_UClass_UDepthCamSensor_NoRegister()
	{
		return UDepthCamSensor::StaticClass();
	}
	struct Z_Construct_UClass_UDepthCamSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTransparentObjects_MetaData[];
#endif
		static void NewProp_bIgnoreTransparentObjects_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTransparentObjects;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDepthCamSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseCameraSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCamSensor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Sensor/CameraSensor/DepthCamSensor.h" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/DepthCamSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Depth sensor" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects_MetaData[] = {
		{ "Category", "DepthCamSensor" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/DepthCamSensor.h" },
	};
#endif
	void Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects_SetBit(void* Obj)
	{
		((UDepthCamSensor*)Obj)->bIgnoreTransparentObjects = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects = { "bIgnoreTransparentObjects", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDepthCamSensor), &Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects_MetaData, ARRAY_COUNT(Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDepthCamSensor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDepthCamSensor_Statics::NewProp_bIgnoreTransparentObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDepthCamSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDepthCamSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDepthCamSensor_Statics::ClassParams = {
		&UDepthCamSensor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDepthCamSensor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UDepthCamSensor_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDepthCamSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDepthCamSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDepthCamSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDepthCamSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDepthCamSensor, 13780376);
	template<> UNREALCV_API UClass* StaticClass<UDepthCamSensor>()
	{
		return UDepthCamSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDepthCamSensor(Z_Construct_UClass_UDepthCamSensor, &UDepthCamSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UDepthCamSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDepthCamSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
