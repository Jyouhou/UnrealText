// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Sensor/CameraSensor/BaseCameraSensor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCameraSensor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UBaseCameraSensor();
	ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void UBaseCameraSensor::StaticRegisterNativesUBaseCameraSensor()
	{
	}
	UClass* Z_Construct_UClass_UBaseCameraSensor_NoRegister()
	{
		return UBaseCameraSensor::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCameraSensor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCameraSensor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneCaptureComponent2D,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCameraSensor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Object Physics SceneComponent abstract Collision Object Physics SceneComponent Mobility Trigger PhysicsVolume" },
		{ "IncludePath", "Sensor/CameraSensor/BaseCameraSensor.h" },
		{ "ModuleRelativePath", "Public/Sensor/CameraSensor/BaseCameraSensor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A base camera sensor for ground truth capture" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCameraSensor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCameraSensor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseCameraSensor_Statics::ClassParams = {
		&UBaseCameraSensor::StaticClass,
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
		0x00B010A5u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseCameraSensor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseCameraSensor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseCameraSensor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseCameraSensor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseCameraSensor, 3113360637);
	template<> UNREALCV_API UClass* StaticClass<UBaseCameraSensor>()
	{
		return UBaseCameraSensor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseCameraSensor(Z_Construct_UClass_UBaseCameraSensor, &UBaseCameraSensor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UBaseCameraSensor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCameraSensor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
