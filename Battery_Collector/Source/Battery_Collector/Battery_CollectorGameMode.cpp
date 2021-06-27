// Copyright Epic Games, Inc. All Rights Reserved.

#include "Battery_CollectorGameMode.h"
#include "Battery_CollectorCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "Kismet/GameplayStatics.h"
#include <Blueprint/UserWidget.h>

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
}

