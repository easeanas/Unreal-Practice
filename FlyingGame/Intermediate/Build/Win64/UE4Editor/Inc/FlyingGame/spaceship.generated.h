// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYINGGAME_spaceship_generated_h
#error "spaceship.generated.h already included, missing '#pragma once' in spaceship.h"
#endif
#define FLYINGGAME_spaceship_generated_h

#define FlyingGame_Source_FlyingGame_spaceship_h_12_SPARSE_DATA
#define FlyingGame_Source_FlyingGame_spaceship_h_12_RPC_WRAPPERS
#define FlyingGame_Source_FlyingGame_spaceship_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FlyingGame_Source_FlyingGame_spaceship_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAspaceship(); \
	friend struct Z_Construct_UClass_Aspaceship_Statics; \
public: \
	DECLARE_CLASS(Aspaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlyingGame"), NO_API) \
	DECLARE_SERIALIZER(Aspaceship)


#define FlyingGame_Source_FlyingGame_spaceship_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAspaceship(); \
	friend struct Z_Construct_UClass_Aspaceship_Statics; \
public: \
	DECLARE_CLASS(Aspaceship, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlyingGame"), NO_API) \
	DECLARE_SERIALIZER(Aspaceship)


#define FlyingGame_Source_FlyingGame_spaceship_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API Aspaceship(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(Aspaceship) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aspaceship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aspaceship); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aspaceship(Aspaceship&&); \
	NO_API Aspaceship(const Aspaceship&); \
public:


#define FlyingGame_Source_FlyingGame_spaceship_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API Aspaceship(Aspaceship&&); \
	NO_API Aspaceship(const Aspaceship&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, Aspaceship); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(Aspaceship); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(Aspaceship)


#define FlyingGame_Source_FlyingGame_spaceship_h_12_PRIVATE_PROPERTY_OFFSET
#define FlyingGame_Source_FlyingGame_spaceship_h_9_PROLOG
#define FlyingGame_Source_FlyingGame_spaceship_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlyingGame_Source_FlyingGame_spaceship_h_12_PRIVATE_PROPERTY_OFFSET \
	FlyingGame_Source_FlyingGame_spaceship_h_12_SPARSE_DATA \
	FlyingGame_Source_FlyingGame_spaceship_h_12_RPC_WRAPPERS \
	FlyingGame_Source_FlyingGame_spaceship_h_12_INCLASS \
	FlyingGame_Source_FlyingGame_spaceship_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlyingGame_Source_FlyingGame_spaceship_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlyingGame_Source_FlyingGame_spaceship_h_12_PRIVATE_PROPERTY_OFFSET \
	FlyingGame_Source_FlyingGame_spaceship_h_12_SPARSE_DATA \
	FlyingGame_Source_FlyingGame_spaceship_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FlyingGame_Source_FlyingGame_spaceship_h_12_INCLASS_NO_PURE_DECLS \
	FlyingGame_Source_FlyingGame_spaceship_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYINGGAME_API UClass* StaticClass<class Aspaceship>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlyingGame_Source_FlyingGame_spaceship_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
