// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/WorldController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorldController() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvWorldController_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvWorldController();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UClass* Z_Construct_UClass_UPlayerViewMode_NoRegister();
// End Cross Module References
	void AUnrealcvWorldController::StaticRegisterNativesAUnrealcvWorldController()
	{
	}
	UClass* Z_Construct_UClass_AUnrealcvWorldController_NoRegister()
	{
		return AUnrealcvWorldController::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealcvWorldController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerViewMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerViewMode;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealcvWorldController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealcvWorldController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WorldController.h" },
		{ "ModuleRelativePath", "Public/WorldController.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealcvWorldController_Statics::NewProp_PlayerViewMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUnrealcvWorldController_Statics::NewProp_PlayerViewMode = { "PlayerViewMode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUnrealcvWorldController, PlayerViewMode), Z_Construct_UClass_UPlayerViewMode_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUnrealcvWorldController_Statics::NewProp_PlayerViewMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUnrealcvWorldController_Statics::NewProp_PlayerViewMode_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUnrealcvWorldController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUnrealcvWorldController_Statics::NewProp_PlayerViewMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealcvWorldController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealcvWorldController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealcvWorldController_Statics::ClassParams = {
		&AUnrealcvWorldController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUnrealcvWorldController_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AUnrealcvWorldController_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealcvWorldController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealcvWorldController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealcvWorldController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealcvWorldController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealcvWorldController, 2491110302);
	template<> UNREALCV_API UClass* StaticClass<AUnrealcvWorldController>()
	{
		return AUnrealcvWorldController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealcvWorldController(Z_Construct_UClass_AUnrealcvWorldController, &AUnrealcvWorldController::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AUnrealcvWorldController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealcvWorldController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
