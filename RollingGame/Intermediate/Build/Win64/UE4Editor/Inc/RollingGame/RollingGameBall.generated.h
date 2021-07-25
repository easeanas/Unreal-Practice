// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ROLLINGGAME_RollingGameBall_generated_h
#error "RollingGameBall.generated.h already included, missing '#pragma once' in RollingGameBall.h"
#endif
#define ROLLINGGAME_RollingGameBall_generated_h

#define RollingGame_Source_RollingGame_RollingGameBall_h_12_SPARSE_DATA
#define RollingGame_Source_RollingGame_RollingGameBall_h_12_RPC_WRAPPERS
#define RollingGame_Source_RollingGame_RollingGameBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define RollingGame_Source_RollingGame_RollingGameBall_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARollingGameBall(); \
	friend struct Z_Construct_UClass_ARollingGameBall_Statics; \
public: \
	DECLARE_CLASS(ARollingGameBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollingGame"), NO_API) \
	DECLARE_SERIALIZER(ARollingGameBall)


#define RollingGame_Source_RollingGame_RollingGameBall_h_12_INCLASS \
private: \
	static void StaticRegisterNativesARollingGameBall(); \
	friend struct Z_Construct_UClass_ARollingGameBall_Statics; \
public: \
	DECLARE_CLASS(ARollingGameBall, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RollingGame"), NO_API) \
	DECLARE_SERIALIZER(ARollingGameBall)


#define RollingGame_Source_RollingGame_RollingGameBall_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARollingGameBall(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARollingGameBall) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARollingGameBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARollingGameBall); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARollingGameBall(ARollingGameBall&&); \
	NO_API ARollingGameBall(const ARollingGameBall&); \
public:


#define RollingGame_Source_RollingGame_RollingGameBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARollingGameBall(ARollingGameBall&&); \
	NO_API ARollingGameBall(const ARollingGameBall&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARollingGameBall); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARollingGameBall); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARollingGameBall)


#define RollingGame_Source_RollingGame_RollingGameBall_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Ball() { return STRUCT_OFFSET(ARollingGameBall, Ball); } \
	FORCEINLINE static uint32 __PPO__SpringArm() { return STRUCT_OFFSET(ARollingGameBall, SpringArm); } \
	FORCEINLINE static uint32 __PPO__Camera() { return STRUCT_OFFSET(ARollingGameBall, Camera); }


#define RollingGame_Source_RollingGame_RollingGameBall_h_9_PROLOG
#define RollingGame_Source_RollingGame_RollingGameBall_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_PRIVATE_PROPERTY_OFFSET \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_SPARSE_DATA \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_RPC_WRAPPERS \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_INCLASS \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RollingGame_Source_RollingGame_RollingGameBall_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_PRIVATE_PROPERTY_OFFSET \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_SPARSE_DATA \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_INCLASS_NO_PURE_DECLS \
	RollingGame_Source_RollingGame_RollingGameBall_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ROLLINGGAME_API UClass* StaticClass<class ARollingGameBall>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RollingGame_Source_RollingGame_RollingGameBall_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
