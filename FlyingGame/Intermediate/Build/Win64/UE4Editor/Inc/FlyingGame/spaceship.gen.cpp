// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlyingGame/spaceship.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodespaceship() {}
// Cross Module References
	FLYINGGAME_API UClass* Z_Construct_UClass_Aspaceship_NoRegister();
	FLYINGGAME_API UClass* Z_Construct_UClass_Aspaceship();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_FlyingGame();
// End Cross Module References
	void Aspaceship::StaticRegisterNativesAspaceship()
	{
	}
	UClass* Z_Construct_UClass_Aspaceship_NoRegister()
	{
		return Aspaceship::StaticClass();
	}
	struct Z_Construct_UClass_Aspaceship_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aspaceship_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_FlyingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aspaceship_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "spaceship.h" },
		{ "ModuleRelativePath", "spaceship.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aspaceship_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aspaceship>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aspaceship_Statics::ClassParams = {
		&Aspaceship::StaticClass,
		"Game",
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
		METADATA_PARAMS(Z_Construct_UClass_Aspaceship_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aspaceship_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aspaceship()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aspaceship_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aspaceship, 2006099014);
	template<> FLYINGGAME_API UClass* StaticClass<Aspaceship>()
	{
		return Aspaceship::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aspaceship(Z_Construct_UClass_Aspaceship, &Aspaceship::StaticClass, TEXT("/Script/FlyingGame"), TEXT("Aspaceship"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aspaceship);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
