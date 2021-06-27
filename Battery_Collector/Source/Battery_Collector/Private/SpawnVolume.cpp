// Fill out your copyright notice in the Description page of Project Settings.


#include "SpawnVolume.h"
#include <Components/BoxComponent.h>
#include "Kismet/KismetMathLibrary.h"
#include "PickUp.h"

// Sets default values
ASpawnVolume::ASpawnVolume()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	//스폰Volume을 표시하기 위해 박스컴포넌트 생성
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	//아이템 생성 최소/최대 초기값 설정
	SpawnDelayRangeLow = 1.0f;
	SpawnDelayRangeHigh = 4.5f;
}

// Called when the game starts or when spawned
void ASpawnVolume::BeginPlay()
{
	Super::BeginPlay();
	

}

// Called every frame
void ASpawnVolume::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FVector ASpawnVolume::GetRandomPointInVolume()
{
	FVector SpawnOrigin = WhereToSpawn->Bounds.Origin;
	FVector SpawnExtent = WhereToSpawn->Bounds.BoxExtent;

	return UKismetMathLibrary::RandomPointInBoundingBox(SpawnOrigin, SpawnExtent);
}

void ASpawnVolume::SetSpawningActive(bool bSuouldSpawn)
{
	if (bSuouldSpawn)
	{
		//Spawn Pickup에 타이머 설정
			//딜레이시간
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);

		// 핸들을 가져다가, 이 클래스(나)를 위해서, SpawnPickup에 바인딩하고, SpawnDelay만큼의 시간이 흐르고 나면 호출, 반복x
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);

	}
	else
	{
		//Spawn Pickup의 타이머 초기화
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void ASpawnVolume::SpawnPickup()
{
	//생성할 아이템이 있다면
	if (WhatToSpawn != nullptr)
	{
		//world가 유효한지 체크
		UWorld* const World = GetWorld();
		if (World)
		{
			FActorSpawnParameters pram;
			//생성시 부모는 this가 됨
			pram.Owner = this;
			//누가 아이템은 만들었는지, 만들게 했는지 명시
			//pram.Instigator = Instigator;

			//만드는 위치에 랜덤한 위치를 고름
			FVector SpawnLocation = GetRandomPointInVolume();

			//생성한 아이템에 랜덤한 로테이션값을 넣어줌
			FRotator SpawnRotation;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;

			//아이템을 생성
			auto const SpawnedPickup = World->SpawnActor<APickUp>(WhatToSpawn, SpawnLocation, SpawnRotation, pram);
			
			// 핸들을 가져다가, 이 클래스(나)를 위해서, SpawnPickup에 바인딩하고, SpawnDelay만큼의 시간이 흐르고 나면 호출, 반복x
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
		}
	}
}

