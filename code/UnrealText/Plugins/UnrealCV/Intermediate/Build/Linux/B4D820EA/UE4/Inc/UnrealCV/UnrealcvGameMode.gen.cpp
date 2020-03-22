// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/UnrealcvGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealcvGameMode() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvGameMode_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameMode();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvPawn_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvPawn();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvCharacter_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_AUnrealcvCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
// End Cross Module References
	void AUnrealcvGameMode::StaticRegisterNativesAUnrealcvGameMode()
	{
	}
	UClass* Z_Construct_UClass_AUnrealcvGameMode_NoRegister()
	{
		return AUnrealcvGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealcvGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealcvGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealcvGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UnrealcvGameMode.h" },
		{ "ModuleRelativePath", "Public/UnrealcvGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealcvGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealcvGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealcvGameMode_Statics::ClassParams = {
		&AUnrealcvGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealcvGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealcvGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealcvGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealcvGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealcvGameMode, 2190146062);
	template<> UNREALCV_API UClass* StaticClass<AUnrealcvGameMode>()
	{
		return AUnrealcvGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealcvGameMode(Z_Construct_UClass_AUnrealcvGameMode, &AUnrealcvGameMode::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AUnrealcvGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealcvGameMode);
	void AUnrealcvPawn::StaticRegisterNativesAUnrealcvPawn()
	{
	}
	UClass* Z_Construct_UClass_AUnrealcvPawn_NoRegister()
	{
		return AUnrealcvPawn::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealcvPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealcvPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealcvPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealcvGameMode.h" },
		{ "ModuleRelativePath", "Public/UnrealcvGameMode.h" },
		{ "ToolTip", "UnrealcvPawn can move freely in the 3D space" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealcvPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealcvPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealcvPawn_Statics::ClassParams = {
		&AUnrealcvPawn::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealcvPawn_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealcvPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealcvPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealcvPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealcvPawn, 1700981584);
	template<> UNREALCV_API UClass* StaticClass<AUnrealcvPawn>()
	{
		return AUnrealcvPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealcvPawn(Z_Construct_UClass_AUnrealcvPawn, &AUnrealcvPawn::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AUnrealcvPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealcvPawn);
	void AUnrealcvCharacter::StaticRegisterNativesAUnrealcvCharacter()
	{
	}
	UClass* Z_Construct_UClass_AUnrealcvCharacter_NoRegister()
	{
		return AUnrealcvCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealcvCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealcvCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealcvCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "UnrealcvGameMode.h" },
		{ "ModuleRelativePath", "Public/UnrealcvGameMode.h" },
		{ "ToolTip", "UnrealcvCharacter acts like a walking human" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealcvCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealcvCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnrealcvCharacter_Statics::ClassParams = {
		&AUnrealcvCharacter::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealcvCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnrealcvCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealcvCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnrealcvCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnrealcvCharacter, 297376025);
	template<> UNREALCV_API UClass* StaticClass<AUnrealcvCharacter>()
	{
		return AUnrealcvCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnrealcvCharacter(Z_Construct_UClass_AUnrealcvCharacter, &AUnrealcvCharacter::StaticClass, TEXT("/Script/UnrealCV"), TEXT("AUnrealcvCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealcvCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
