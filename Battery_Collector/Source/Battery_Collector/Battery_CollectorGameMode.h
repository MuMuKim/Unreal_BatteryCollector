// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Battery_CollectorGameMode.generated.h"

//현재 게임플레이 상태를 저장하는 enum
UENUM(BluePrintType)
enum class EBatteryPlayState : uint8
{
	EPlaying,
	EGameOver,
	EWon,
	EUnknown
};

UCLASS(minimalapi)
class ABattery_CollectorGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ABattery_CollectorGameMode();

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	//게임 승리에 필요한 파워를 알려줌 - UHD에 필요
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	//현재 플레이상태로 돌아감
	UFUNCTION(BluePrintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	//새 플레이 상태 설정
	void SetCurrentState(EBatteryPlayState NewState);

protected:
	//케릭터의 파워가 줄어드는 정도
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	float DecayRate;

	//승리하기 위해 모아야 하는 베터리의 양
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	float PowerToWin;

	//UHD 화면에 사용할 위젯 클래스
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	TSubclassOf<class UUserWidget> UHDWidgetClass;

	// UHD의 인스턴스
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:
	//현재 플레이 상태를 추적함
	EBatteryPlayState CurrentState;

	TArray<class ASpawnVolume*> SpawnVolumeActors;

	//게임플레이 상태에 영향을 주는 모든 함수의 호출 담당
	void HandleNewState(EBatteryPlayState NewState);
};



