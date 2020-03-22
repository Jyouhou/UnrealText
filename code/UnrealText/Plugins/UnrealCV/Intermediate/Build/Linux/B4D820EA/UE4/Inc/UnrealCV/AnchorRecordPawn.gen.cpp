// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/UnrealText/AnchorRecordPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnchorRecordPawn() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AAnchorRecordPawn_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AAnchorRecordPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void AAnchorRecordPawn::StaticRegisterNativesAAnchorRecordPawn()
	{
	}
	UClass* Z_Construct_UClass_AAnchorRecordPawn_NoRegister()
	{
		return AAnchorRecordPawn::StaticClass();
	}
	struct Z_Construct_UClass_AAnchorRecordPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_moving_speed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_moving_speed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAnchorRecordPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnchorRecordPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealText/AnchorRecordPawn.h" },
		{ "ModuleRelativePath", "Public/UnrealText/AnchorRecordPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAnchorRecordPawn_Statics::NewProp_moving_speed_MetaData[] = {
		{ "Category", "AnchorRecordPawn" },
		{ "ModuleRelativePath", "Public/UnrealText/AnchorRecordPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAnchorRecordPawn_Statics::NewProp_moving_speed = { "moving_speed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAnchorRecordPawn, moving_speed), METADATA_PARAMS(Z_Construct_UClass_AAnchorRecordPawn_Statics::NewProp_moving_speed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAnchorRecordPawn_Statics::NewProp_moving_speed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAnchorRecordPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAnchorRecordPawn_Statics::NewProp_moving_speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAnchorRecordPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAnchorRecordPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAnchorRecordPawn_Statics::ClassParams = {
		&AAnchorRecordPawn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAnchorRecordPawn_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AAnchorRecordPawn_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAnchorRecordPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAnchorRecordPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAnchorRecordPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAnchorRecordPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAnchorRecordPawn, 2604692508);
	template<> UNREALCV_API UClass* StaticClass<AAnchorRecordPawn>()
	{
		return AAnchorRecordPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAnchorRecordPawn(Z_Construct_UClass_AAnchorRecordPawn, &AAnchorRecordPawn::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AAnchorRecordPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAnchorRecordPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
