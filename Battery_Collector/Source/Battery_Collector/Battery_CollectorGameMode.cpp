// Copyright Epic Games, Inc. All Rights Reserved.

#include "Battery_CollectorGameMode.h"
#include "Battery_CollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <Blueprint/UserWidget.h>
#include "SpawnVolume.h"
#include <GameFramework/Character.h>

ABattery_CollectorGameMode::ABattery_CollectorGameMode()
{
	PrimaryActorTick.bCanEverTick = true;

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
	//DecayRate �ʱⰪ ����
	DecayRate = 0.01f;
}

void ABattery_CollectorGameMode::BeginPlay()
{
	Super::BeginPlay();

	//��� SpawnVolumeActors �� ã�Ƴ�
	TArray<AActor*> FoundActors;

	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ASpawnVolume::StaticClass(), FoundActors);

	for (auto Actor : FoundActors)
	{
		ASpawnVolume* SpawnVolumeActor = Cast<ASpawnVolume>(Actor);
		if (SpawnVolumeActor)
		{
			SpawnVolumeActors.AddUnique(SpawnVolumeActor);
		}
	}

	SetCurrentState(EBatteryPlayState::EPlaying);

	//��ǥ ���� ����
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//�ʱ� �Ŀ��� 1.25�踦 ��ƾ���
		PowerToWin = (MyCharacter->GetInitialPower()) * 1.25f;
	}

	if (UHDWidgetClass != nullptr)
	{
		CurrentWidget = CreateWidget<UUserWidget>(GetWorld(), UHDWidgetClass);
		if (CurrentWidget != nullptr)
		{
			CurrentWidget->AddToViewport();
		}
	}
}

void ABattery_CollectorGameMode::Tick(float DeltaTime)
{
	//�� �������� �θ𿡼� ���� ����Ǵ� �κ��� �׳� �Ѿ�� �ʰ���
	Super::Tick(DeltaTime);
	//�ɸ��� Ŭ������ ������ ���
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//�䱸ġ �̻��� �Ŀ��� ������ ���¸� Won���� ����
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}
		//���� �ɸ����� �Ŀ��� 0���� ũ�ٸ� (0���Ϸ� �������� �ʰ� �Ϸ���)
		else if (MyCharacter->GetCurrentPower() > 0)
		{
			//DecayRate�� �̿��� �Ŀ��� ����
			MyCharacter->UpdatePower(-DeltaTime * DecayRate * (MyCharacter->GetInitialPower()));
		}
		else
		{
			SetCurrentState(EBatteryPlayState::EGameOver);
		}
	}
}

float ABattery_CollectorGameMode::GetPowerToWin() const
{
	return PowerToWin;
}

EBatteryPlayState ABattery_CollectorGameMode::GetCurrentState() const
{
	return CurrentState;
}

void ABattery_CollectorGameMode::SetCurrentState(EBatteryPlayState NewState)
{

	CurrentState = NewState;
	
	//���ο� ���� ���¸� ����
	HandleNewState(CurrentState);
}

void ABattery_CollectorGameMode::HandleNewState(EBatteryPlayState NewState)
{
	switch (NewState)
	{
		//���� �÷��� ���� ���
	case EBatteryPlayState::EPlaying:
	{
		//Spawn Volume Ȱ��ȭ
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(true);
		}
	}
		break;
		//���ӿ��� �й��� ���
	case EBatteryPlayState::EGameOver:
	{
		//Spawn Volume ��Ȱ��ȭ
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}
		//�÷��̾��� �Է��� ���´�
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (PlayerController)
		{
			//�÷��̾��� �������� ���߰�, �ɸ��͸� �������ʰ�, Ui�� ������ �ʰ�, �̵��� ������ �ְ�, ȸ���� ������ �ش�
			PlayerController->SetCinematicMode(true, false, false, true, true);
		}
		//�ɸ��Ϳ� ���׵� ȿ���� �ش�
		ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
		if (MyCharacter)
		{
			MyCharacter->GetMesh()->SetSimulatePhysics(true);
		}
	}
		break;
		//���ӿ��� �¸��� ���
	case EBatteryPlayState::EWon:
	{
		//Spawn Volume ��Ȱ��ȭ
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}
	}
		break;
		//�˼����� ����
	case EBatteryPlayState::EUnknown:
		break;
	default:
		break;
	}
}

