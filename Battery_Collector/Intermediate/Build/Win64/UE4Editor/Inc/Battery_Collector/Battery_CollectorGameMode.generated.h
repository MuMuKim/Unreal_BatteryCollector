// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBatteryPlayState : uint8;
#ifdef BATTERY_COLLECTOR_Battery_CollectorGameMode_generated_h
#error "Battery_CollectorGameMode.generated.h already included, missing '#pragma once' in Battery_CollectorGameMode.h"
#endif
#define BATTERY_COLLECTOR_Battery_CollectorGameMode_generated_h

#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_SPARSE_DATA
#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentState); \
	DECLARE_FUNCTION(execGetPowerToWin);


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABattery_CollectorGameMode(); \
	friend struct Z_Construct_UClass_ABattery_CollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ABattery_CollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Collector"), BATTERY_COLLECTOR_API) \
	DECLARE_SERIALIZER(ABattery_CollectorGameMode)


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_INCLASS \
private: \
	static void StaticRegisterNativesABattery_CollectorGameMode(); \
	friend struct Z_Construct_UClass_ABattery_CollectorGameMode_Statics; \
public: \
	DECLARE_CLASS(ABattery_CollectorGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Battery_Collector"), BATTERY_COLLECTOR_API) \
	DECLARE_SERIALIZER(ABattery_CollectorGameMode)


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	BATTERY_COLLECTOR_API ABattery_CollectorGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABattery_CollectorGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERY_COLLECTOR_API, ABattery_CollectorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattery_CollectorGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERY_COLLECTOR_API ABattery_CollectorGameMode(ABattery_CollectorGameMode&&); \
	BATTERY_COLLECTOR_API ABattery_CollectorGameMode(const ABattery_CollectorGameMode&); \
public:


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	BATTERY_COLLECTOR_API ABattery_CollectorGameMode(ABattery_CollectorGameMode&&); \
	BATTERY_COLLECTOR_API ABattery_CollectorGameMode(const ABattery_CollectorGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(BATTERY_COLLECTOR_API, ABattery_CollectorGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABattery_CollectorGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABattery_CollectorGameMode)


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DecayRate() { return STRUCT_OFFSET(ABattery_CollectorGameMode, DecayRate); } \
	FORCEINLINE static uint32 __PPO__PowerToWin() { return STRUCT_OFFSET(ABattery_CollectorGameMode, PowerToWin); } \
	FORCEINLINE static uint32 __PPO__UHDWidgetClass() { return STRUCT_OFFSET(ABattery_CollectorGameMode, UHDWidgetClass); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(ABattery_CollectorGameMode, CurrentWidget); }


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_19_PROLOG
#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_SPARSE_DATA \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_RPC_WRAPPERS \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_INCLASS \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_PRIVATE_PROPERTY_OFFSET \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_SPARSE_DATA \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_INCLASS_NO_PURE_DECLS \
	Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BATTERY_COLLECTOR_API UClass* StaticClass<class ABattery_CollectorGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Battery_Collector_Source_Battery_Collector_Battery_CollectorGameMode_h


#define FOREACH_ENUM_EBATTERYPLAYSTATE(op) \
	op(EBatteryPlayState::EPlaying) \
	op(EBatteryPlayState::EGameOver) \
	op(EBatteryPlayState::EWon) \
	op(EBatteryPlayState::EUnknown) 

enum class EBatteryPlayState : uint8;
template<> BATTERY_COLLECTOR_API UEnum* StaticEnum<EBatteryPlayState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
