// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/Actor/Puppeteer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuppeteer() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_APuppeteer_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_APuppeteer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
	void APuppeteer::StaticRegisterNativesAPuppeteer()
	{
	}
	UClass* Z_Construct_UClass_APuppeteer_NoRegister()
	{
		return APuppeteer::StaticClass();
	}
	struct Z_Construct_UClass_APuppeteer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APuppeteer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APuppeteer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/Puppeteer.h" },
		{ "ModuleRelativePath", "Public/Actor/Puppeteer.h" },
		{ "ToolTip", "A type of actor responsible for running and stopping the simulation in the scene." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APuppeteer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuppeteer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APuppeteer_Statics::ClassParams = {
		&APuppeteer::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APuppeteer_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APuppeteer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APuppeteer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APuppeteer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APuppeteer, 2029581728);
	template<> UNREALCV_API UClass* StaticClass<APuppeteer>()
	{
		return APuppeteer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APuppeteer(Z_Construct_UClass_APuppeteer, &APuppeteer::StaticClass, TEXT("/Script/UnrealCV"), TEXT("APuppeteer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APuppeteer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
