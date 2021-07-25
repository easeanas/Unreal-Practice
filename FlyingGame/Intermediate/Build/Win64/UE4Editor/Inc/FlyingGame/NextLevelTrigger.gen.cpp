// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlyingGame/NextLevelTrigger.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNextLevelTrigger() {}
// Cross Module References
	FLYINGGAME_API UClass* Z_Construct_UClass_ANextLevelTrigger_NoRegister();
	FLYINGGAME_API UClass* Z_Construct_UClass_ANextLevelTrigger();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox();
	UPackage* Z_Construct_UPackage__Script_FlyingGame();
// End Cross Module References
	void ANextLevelTrigger::StaticRegisterNativesANextLevelTrigger()
	{
	}
	UClass* Z_Construct_UClass_ANextLevelTrigger_NoRegister()
	{
		return ANextLevelTrigger::StaticClass();
	}
	struct Z_Construct_UClass_ANextLevelTrigger_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANextLevelTrigger_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATriggerBox,
		(UObject* (*)())Z_Construct_UPackage__Script_FlyingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANextLevelTrigger_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "NextLevelTrigger.h" },
		{ "ModuleRelativePath", "NextLevelTrigger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANextLevelTrigger_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANextLevelTrigger>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANextLevelTrigger_Statics::ClassParams = {
		&ANextLevelTrigger::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANextLevelTrigger_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANextLevelTrigger_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANextLevelTrigger()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANextLevelTrigger_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANextLevelTrigger, 776077899);
	template<> FLYINGGAME_API UClass* StaticClass<ANextLevelTrigger>()
	{
		return ANextLevelTrigger::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANextLevelTrigger(Z_Construct_UClass_ANextLevelTrigger, &ANextLevelTrigger::StaticClass, TEXT("/Script/FlyingGame"), TEXT("ANextLevelTrigger"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANextLevelTrigger);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
