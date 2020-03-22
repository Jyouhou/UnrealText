// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Actor/CamSensorActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamSensorActor() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_ACamSensorActor_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_ACamSensorActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void ACamSensorActor::StaticRegisterNativesACamSensorActor()
	{
	}
	UClass* Z_Construct_UClass_ACamSensorActor_NoRegister()
	{
		return ACamSensorActor::StaticClass();
	}
	struct Z_Construct_UClass_ACamSensorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACamSensorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACamSensorActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/CamSensorActor.h" },
		{ "ModuleRelativePath", "Public/Actor/CamSensorActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACamSensorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACamSensorActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACamSensorActor_Statics::ClassParams = {
		&ACamSensorActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ACamSensorActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACamSensorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACamSensorActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACamSensorActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACamSensorActor, 85584508);
	template<> UNREALCV_API UClass* StaticClass<ACamSensorActor>()
	{
		return ACamSensorActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACamSensorActor(Z_Construct_UClass_ACamSensorActor, &ACamSensorActor::StaticClass, TEXT("/Script/UnrealCV"), TEXT("ACamSensorActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACamSensorActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
