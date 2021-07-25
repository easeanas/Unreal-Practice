// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RollingGame/RollingGameBall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRollingGameBall() {}
// Cross Module References
	ROLLINGGAME_API UClass* Z_Construct_UClass_ARollingGameBall_NoRegister();
	ROLLINGGAME_API UClass* Z_Construct_UClass_ARollingGameBall();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_RollingGame();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void ARollingGameBall::StaticRegisterNativesARollingGameBall()
	{
	}
	UClass* Z_Construct_UClass_ARollingGameBall_NoRegister()
	{
		return ARollingGameBall::StaticClass();
	}
	struct Z_Construct_UClass_ARollingGameBall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ball_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Ball;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollTorque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RollTorque;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARollingGameBall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_RollingGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "RollingGameBall.h" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Ball_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** StaticMesh used for the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
		{ "ToolTip", "StaticMesh used for the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Ball = { "Ball", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollingGameBall, Ball), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Ball_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Ball_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::NewProp_SpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Spring arm for positioning the camera above the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
		{ "ToolTip", "Spring arm for positioning the camera above the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollingGameBall_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollingGameBall, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Camera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Ball" },
		{ "Comment", "/** Camera to view the ball */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
		{ "ToolTip", "Camera to view the ball" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollingGameBall, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::NewProp_JumpImpulse_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Vertical impulse to apply when pressing jump */" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
		{ "ToolTip", "Vertical impulse to apply when pressing jump" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollingGameBall_Statics::NewProp_JumpImpulse = { "JumpImpulse", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollingGameBall, JumpImpulse), METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_JumpImpulse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_JumpImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARollingGameBall_Statics::NewProp_RollTorque_MetaData[] = {
		{ "Category", "Ball" },
		{ "Comment", "/** Torque to apply when trying to roll ball */" },
		{ "ModuleRelativePath", "RollingGameBall.h" },
		{ "ToolTip", "Torque to apply when trying to roll ball" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARollingGameBall_Statics::NewProp_RollTorque = { "RollTorque", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARollingGameBall, RollTorque), METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_RollTorque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::NewProp_RollTorque_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARollingGameBall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Ball,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollingGameBall_Statics::NewProp_SpringArm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollingGameBall_Statics::NewProp_Camera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollingGameBall_Statics::NewProp_JumpImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARollingGameBall_Statics::NewProp_RollTorque,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARollingGameBall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARollingGameBall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARollingGameBall_Statics::ClassParams = {
		&ARollingGameBall::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ARollingGameBall_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARollingGameBall_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARollingGameBall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARollingGameBall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARollingGameBall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARollingGameBall, 3606905534);
	template<> ROLLINGGAME_API UClass* StaticClass<ARollingGameBall>()
	{
		return ARollingGameBall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARollingGameBall(Z_Construct_UClass_ARollingGameBall, &ARollingGameBall::StaticClass, TEXT("/Script/RollingGame"), TEXT("ARollingGameBall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARollingGameBall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
