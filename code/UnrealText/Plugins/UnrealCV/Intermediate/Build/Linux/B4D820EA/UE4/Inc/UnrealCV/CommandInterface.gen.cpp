// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/CommandInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommandInterface() {}
// Cross Module References
	UNREALCV_API UClass* Z_Construct_UClass_UCommandInterface_NoRegister();
	UNREALCV_API UClass* Z_Construct_UClass_UCommandInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
	UNREALCV_API UFunction* Z_Construct_UFunction_UCommandInterface_BindCommands();
	UNREALCV_API UFunction* Z_Construct_UFunction_UCommandInterface_UnbindCommands();
// End Cross Module References
	void UCommandInterface::StaticRegisterNativesUCommandInterface()
	{
		UClass* Class = UCommandInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindCommands", &ICommandInterface::execBindCommands },
			{ "UnbindCommands", &ICommandInterface::execUnbindCommands },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCommandInterface_BindCommands_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandInterface_BindCommands_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandInterface_BindCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandInterface, nullptr, "BindCommands", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandInterface_BindCommands_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommandInterface_BindCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandInterface_BindCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommandInterface_BindCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CommandInterface.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCommandInterface, nullptr, "UnbindCommands", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCommandInterface_UnbindCommands()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCommandInterface_UnbindCommands_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCommandInterface_NoRegister()
	{
		return UCommandInterface::StaticClass();
	}
	struct Z_Construct_UClass_UCommandInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCommandInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCommandInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCommandInterface_BindCommands, "BindCommands" }, // 1234866587
		{ &Z_Construct_UFunction_UCommandInterface_UnbindCommands, "UnbindCommands" }, // 3346518421
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCommandInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/CommandInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCommandInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ICommandInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCommandInterface_Statics::ClassParams = {
		&UCommandInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UCommandInterface_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCommandInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCommandInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCommandInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCommandInterface, 4057589790);
	template<> UNREALCV_API UClass* StaticClass<UCommandInterface>()
	{
		return UCommandInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCommandInterface(Z_Construct_UClass_UCommandInterface, &UCommandInterface::StaticClass, TEXT("/Script/UnrealCV"), TEXT("UCommandInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCommandInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
