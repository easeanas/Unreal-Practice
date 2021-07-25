// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FLYINGGAME_Goal_generated_h
#error "Goal.generated.h already included, missing '#pragma once' in Goal.h"
#endif
#define FLYINGGAME_Goal_generated_h

#define FlyingGame_Source_FlyingGame_Goal_h_12_SPARSE_DATA
#define FlyingGame_Source_FlyingGame_Goal_h_12_RPC_WRAPPERS
#define FlyingGame_Source_FlyingGame_Goal_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define FlyingGame_Source_FlyingGame_Goal_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlyingGame"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define FlyingGame_Source_FlyingGame_Goal_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGoal(); \
	friend struct Z_Construct_UClass_AGoal_Statics; \
public: \
	DECLARE_CLASS(AGoal, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FlyingGame"), NO_API) \
	DECLARE_SERIALIZER(AGoal)


#define FlyingGame_Source_FlyingGame_Goal_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGoal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGoal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public:


#define FlyingGame_Source_FlyingGame_Goal_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGoal(AGoal&&); \
	NO_API AGoal(const AGoal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGoal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGoal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGoal)


#define FlyingGame_Source_FlyingGame_Goal_h_12_PRIVATE_PROPERTY_OFFSET
#define FlyingGame_Source_FlyingGame_Goal_h_9_PROLOG
#define FlyingGame_Source_FlyingGame_Goal_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlyingGame_Source_FlyingGame_Goal_h_12_PRIVATE_PROPERTY_OFFSET \
	FlyingGame_Source_FlyingGame_Goal_h_12_SPARSE_DATA \
	FlyingGame_Source_FlyingGame_Goal_h_12_RPC_WRAPPERS \
	FlyingGame_Source_FlyingGame_Goal_h_12_INCLASS \
	FlyingGame_Source_FlyingGame_Goal_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FlyingGame_Source_FlyingGame_Goal_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FlyingGame_Source_FlyingGame_Goal_h_12_PRIVATE_PROPERTY_OFFSET \
	FlyingGame_Source_FlyingGame_Goal_h_12_SPARSE_DATA \
	FlyingGame_Source_FlyingGame_Goal_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FlyingGame_Source_FlyingGame_Goal_h_12_INCLASS_NO_PURE_DECLS \
	FlyingGame_Source_FlyingGame_Goal_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FLYINGGAME_API UClass* StaticClass<class AGoal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FlyingGame_Source_FlyingGame_Goal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
