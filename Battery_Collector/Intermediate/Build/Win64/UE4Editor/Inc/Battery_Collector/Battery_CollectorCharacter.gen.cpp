// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Battery_Collector/Battery_CollectorCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBattery_CollectorCharacter() {}
// Cross Module References
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABattery_CollectorCharacter_NoRegister();
	BATTERY_COLLECTOR_API UClass* Z_Construct_UClass_ABattery_CollectorCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Battery_Collector();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ABattery_CollectorCharacter::execCollectionPickups)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CollectionPickups();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABattery_CollectorCharacter::execUpdatePower)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_PowerChange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdatePower(Z_Param_PowerChange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABattery_CollectorCharacter::execGetCurrentPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCurrentPower();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ABattery_CollectorCharacter::execGetInitialPower)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetInitialPower();
		P_NATIVE_END;
	}
	static FName NAME_ABattery_CollectorCharacter_PowerChangeEffect = FName(TEXT("PowerChangeEffect"));
	void ABattery_CollectorCharacter::PowerChangeEffect()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABattery_CollectorCharacter_PowerChangeEffect),NULL);
	}
	void ABattery_CollectorCharacter::StaticRegisterNativesABattery_CollectorCharacter()
	{
		UClass* Class = ABattery_CollectorCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CollectionPickups", &ABattery_CollectorCharacter::execCollectionPickups },
			{ "GetCurrentPower", &ABattery_CollectorCharacter::execGetCurrentPower },
			{ "GetInitialPower", &ABattery_CollectorCharacter::execGetInitialPower },
			{ "UpdatePower", &ABattery_CollectorCharacter::execUpdatePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pickups" },
		{ "Comment", "//?\xdd\xb7??? ?\xc8\xbe? ?\xd4\xbc?\n//->???\xd4\xbc??? ??\xc6\xb0?? ?????? ???? + CollectionSphere ?\xd3\xbf? ?????\xd6\xb4? ???????? ??????\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xdd\xb7??? ?\xc8\xbe? ?\xd4\xbc?\n->???\xd4\xbc??? ??\xc6\xb0?? ?????? ???? + CollectionSphere ?\xd3\xbf? ?????\xd6\xb4? ???????? ??????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorCharacter, nullptr, "CollectionPickups", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics
	{
		struct Battery_CollectorCharacter_eventGetCurrentPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Battery_CollectorCharacter_eventGetCurrentPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//???? Power ???? ???????? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "???? Power ???? ???????? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorCharacter, nullptr, "GetCurrentPower", nullptr, nullptr, sizeof(Battery_CollectorCharacter_eventGetCurrentPower_Parms), Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics
	{
		struct Battery_CollectorCharacter_eventGetInitialPower_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Battery_CollectorCharacter_eventGetInitialPower_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//InitialPower ???? ???????? ?\xd4\xbc?\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "InitialPower ???? ???????? ?\xd4\xbc?" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorCharacter, nullptr, "GetInitialPower", nullptr, nullptr, sizeof(Battery_CollectorCharacter_eventGetInitialPower_Parms), Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//?\xc3\xb0?\xc8\xbf?? ?\xd4\xbc? (Bp???? ?????? ????)\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc3\xb0?\xc8\xbf?? ?\xd4\xbc? (Bp???? ?????? ????)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorCharacter, nullptr, "PowerChangeEffect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics
	{
		struct Battery_CollectorCharacter_eventUpdatePower_Parms
		{
			float PowerChange;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PowerChange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::NewProp_PowerChange = { "PowerChange", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Battery_CollectorCharacter_eventUpdatePower_Parms, PowerChange), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::NewProp_PowerChange,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::Function_MetaDataParams[] = {
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8????? ???? ?\xc4\xbf? ???? ??????\xc6\xae??\n//PowerChange?? ???? ?\xc4\xbf????? ???? ?????? ???? ????,???? ?\xcf\xbc?????\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc9\xb8????? ???? ?\xc4\xbf? ???? ??????\xc6\xae??\nPowerChange?? ???? ?\xc4\xbf????? ???? ?????? ???? ????,???? ?\xcf\xbc?????" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABattery_CollectorCharacter, nullptr, "UpdatePower", nullptr, nullptr, sizeof(Battery_CollectorCharacter_eventUpdatePower_Parms), Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABattery_CollectorCharacter_NoRegister()
	{
		return ABattery_CollectorCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ABattery_CollectorCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionSphere_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollectionSphere;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CharacterPower;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABattery_CollectorCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Battery_Collector,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABattery_CollectorCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABattery_CollectorCharacter_CollectionPickups, "CollectionPickups" }, // 2651017329
		{ &Z_Construct_UFunction_ABattery_CollectorCharacter_GetCurrentPower, "GetCurrentPower" }, // 642140530
		{ &Z_Construct_UFunction_ABattery_CollectorCharacter_GetInitialPower, "GetInitialPower" }, // 1087755356
		{ &Z_Construct_UFunction_ABattery_CollectorCharacter_PowerChangeEffect, "PowerChangeEffect" }, // 3283765960
		{ &Z_Construct_UFunction_ABattery_CollectorCharacter_UpdatePower, "UpdatePower" }, // 127763268
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Battery_CollectorCharacter.h" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CollectionSphere_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "// ?????? \xc5\xbd???? ??\xc3\xbc ?\xdd\xb8???\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?????? \xc5\xbd???? ??\xc3\xbc ?\xdd\xb8???" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CollectionSphere = { "CollectionSphere", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, CollectionSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CollectionSphere_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CollectionSphere_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base look up/down rate, in deg/sec. Other scaling may affect final rate. */" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "Base look up/down rate, in deg/sec. Other scaling may affect final rate." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseLookUpRate = { "BaseLookUpRate", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, BaseLookUpRate), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseLookUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_initialPower_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8??? ?\xc4\xbf? ?\xca\xb1\xe2\xb0\xaa\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc9\xb8??? ?\xc4\xbf? ?\xca\xb1\xe2\xb0\xaa" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_initialPower = { "initialPower", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, initialPower), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_initialPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_initialPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_SpeedFactor_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8??? ?\xd3\xb5??? ???????? ??\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc9\xb8??? ?\xd3\xb5??? ???????? ??" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_SpeedFactor = { "SpeedFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, SpeedFactor), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_SpeedFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_SpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseFactor_MetaData[] = {
		{ "BluePrintProtected", "true" },
		{ "Category", "Power" },
		{ "Comment", "//?\xc4\xbf? ????0 ?\xcf\xb6??? ?\xc9\xb8??? ?\xd3\xb5?\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc4\xbf? ????0 ?\xcf\xb6??? ?\xc9\xb8??? ?\xd3\xb5?" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseFactor = { "BaseFactor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, BaseFactor), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CharacterPower_MetaData[] = {
		{ "Category", "Power" },
		{ "Comment", "//?\xc9\xb8????? ?????\xc4\xbf??? ?????\xcf\xb4? ????\n" },
		{ "ModuleRelativePath", "Battery_CollectorCharacter.h" },
		{ "ToolTip", "?\xc9\xb8????? ?????\xc4\xbf??? ?????\xcf\xb4? ????" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CharacterPower = { "CharacterPower", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABattery_CollectorCharacter, CharacterPower), METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CharacterPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CharacterPower_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABattery_CollectorCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_FollowCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CollectionSphere,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseLookUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_initialPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_SpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_BaseFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABattery_CollectorCharacter_Statics::NewProp_CharacterPower,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABattery_CollectorCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABattery_CollectorCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABattery_CollectorCharacter_Statics::ClassParams = {
		&ABattery_CollectorCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABattery_CollectorCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABattery_CollectorCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABattery_CollectorCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABattery_CollectorCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABattery_CollectorCharacter, 3832980608);
	template<> BATTERY_COLLECTOR_API UClass* StaticClass<ABattery_CollectorCharacter>()
	{
		return ABattery_CollectorCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABattery_CollectorCharacter(Z_Construct_UClass_ABattery_CollectorCharacter, &ABattery_CollectorCharacter::StaticClass, TEXT("/Script/Battery_Collector"), TEXT("ABattery_CollectorCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABattery_CollectorCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
