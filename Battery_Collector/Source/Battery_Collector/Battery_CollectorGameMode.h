// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Battery_CollectorGameMode.generated.h"

//���� �����÷��� ���¸� �����ϴ� enum
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

	//���� �¸��� �ʿ��� �Ŀ��� �˷��� - UHD�� �ʿ�
	UFUNCTION(BlueprintPure, Category = "Power")
	float GetPowerToWin() const;

	//���� �÷��̻��·� ���ư�
	UFUNCTION(BluePrintPure, Category = "Power")
	EBatteryPlayState GetCurrentState() const;

	//�� �÷��� ���� ����
	void SetCurrentState(EBatteryPlayState NewState);

protected:
	//�ɸ����� �Ŀ��� �پ��� ����
	UPROPERTY(EditDefaultsOnly,BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	float DecayRate;

	//�¸��ϱ� ���� ��ƾ� �ϴ� ���͸��� ��
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	float PowerToWin;

	//UHD ȭ�鿡 ����� ���� Ŭ����
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Power", meta = (BluePrintProtected = "true"))
	TSubclassOf<class UUserWidget> UHDWidgetClass;

	// UHD�� �ν��Ͻ�
	UPROPERTY()
	class UUserWidget* CurrentWidget;

private:
	//���� �÷��� ���¸� ������
	EBatteryPlayState CurrentState;

	TArray<class ASpawnVolume*> SpawnVolumeActors;

	//�����÷��� ���¿� ������ �ִ� ��� �Լ��� ȣ�� ���
	void HandleNewState(EBatteryPlayState NewState);
};



