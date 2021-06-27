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
	//DecayRate 초기값 설정
	DecayRate = 0.01f;
}

void ABattery_CollectorGameMode::BeginPlay()
{
	Super::BeginPlay();

	//모든 SpawnVolumeActors 을 찾아냄
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

	//목표 점수 설정
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//초기 파워에 1.25배를 모아야함
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
	//이 설정으로 부모에서 원래 실행되던 부분을 그냥 넘어가지 않게함
	Super::Tick(DeltaTime);
	//케릭터 클래스를 변수로 담아
	ABattery_CollectorCharacter* MyCharacter = Cast<ABattery_CollectorCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));
	if (MyCharacter)
	{
		//요구치 이상의 파워를 모으면 상태를 Won으로 설정
		if (MyCharacter->GetCurrentPower() > PowerToWin)
		{
			SetCurrentState(EBatteryPlayState::EWon);
		}
		//만약 케릭터의 파워가 0보다 크다면 (0이하로 떨어지지 않게 하려함)
		else if (MyCharacter->GetCurrentPower() > 0)
		{
			//DecayRate를 이용해 파워를 감소
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
	
	//새로운 현재 상태를 제어
	HandleNewState(CurrentState);
}

void ABattery_CollectorGameMode::HandleNewState(EBatteryPlayState NewState)
{
	switch (NewState)
	{
		//게임 플레이 중인 경우
	case EBatteryPlayState::EPlaying:
	{
		//Spawn Volume 활성화
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(true);
		}
	}
		break;
		//게임에서 패배한 경우
	case EBatteryPlayState::EGameOver:
	{
		//Spawn Volume 비활성화
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}
		//플레이어의 입력을 막는다
		APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);
		if (PlayerController)
		{
			//플레이어의 움직임을 멈추고, 케릭터를 숨기지않고, Ui를 숨기지 않고, 이동에 영향을 주고, 회전에 영향을 준다
			PlayerController->SetCinematicMode(true, false, false, true, true);
		}
		//케릭터에 레그돌 효과를 준다
		ACharacter* MyCharacter = UGameplayStatics::GetPlayerCharacter(this, 0);
		if (MyCharacter)
		{
			MyCharacter->GetMesh()->SetSimulatePhysics(true);
		}
	}
		break;
		//게임에서 승리한 경우
	case EBatteryPlayState::EWon:
	{
		//Spawn Volume 비활성화
		for (ASpawnVolume* Volume : SpawnVolumeActors)
		{
			Volume->SetSpawningActive(false);
		}
	}
		break;
		//알수없는 상태
	case EBatteryPlayState::EUnknown:
		break;
	default:
		break;
	}
}

