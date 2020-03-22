// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCV/Public/BPFunctionLib/JsonObjectBP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeJsonObjectBP() {}
// Cross Module References
	UNREALCV_API UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectBP();
	UPackage* Z_Construct_UPackage__Script_UnrealCV();
// End Cross Module References
class UScriptStruct* FJsonObjectBP::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern UNREALCV_API uint32 Get_Z_Construct_UScriptStruct_FJsonObjectBP_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FJsonObjectBP, Z_Construct_UPackage__Script_UnrealCV(), TEXT("JsonObjectBP"), sizeof(FJsonObjectBP), Get_Z_Construct_UScriptStruct_FJsonObjectBP_Hash());
	}
	return Singleton;
}
template<> UNREALCV_API UScriptStruct* StaticStruct<FJsonObjectBP>()
{
	return FJsonObjectBP::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FJsonObjectBP(FJsonObjectBP::StaticStruct, TEXT("/Script/UnrealCV"), TEXT("JsonObjectBP"), false, nullptr, nullptr);
static struct FScriptStruct_UnrealCV_StaticRegisterNativesFJsonObjectBP
{
	FScriptStruct_UnrealCV_StaticRegisterNativesFJsonObjectBP()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("JsonObjectBP")),new UScriptStruct::TCppStructOps<FJsonObjectBP>);
	}
} ScriptStruct_UnrealCV_StaticRegisterNativesFJsonObjectBP;
	struct Z_Construct_UScriptStruct_FJsonObjectBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FJsonObjectBP_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPFunctionLib/JsonObjectBP.h" },
		{ "ToolTip", "Make JsonValue accessible in blueprint" },
	};
#endif
	void* Z_Construct_UScriptStruct_FJsonObjectBP_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FJsonObjectBP>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FJsonObjectBP_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCV,
		nullptr,
		&NewStructOps,
		"JsonObjectBP",
		sizeof(FJsonObjectBP),
		alignof(FJsonObjectBP),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FJsonObjectBP_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FJsonObjectBP_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FJsonObjectBP()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FJsonObjectBP_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_UnrealCV();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("JsonObjectBP"), sizeof(FJsonObjectBP), Get_Z_Construct_UScriptStruct_FJsonObjectBP_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FJsonObjectBP_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FJsonObjectBP_Hash() { return 2199426375U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
