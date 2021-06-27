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

	//����Volume�� ǥ���ϱ� ���� �ڽ�������Ʈ ����
	WhereToSpawn = CreateDefaultSubobject<UBoxComponent>(TEXT("WhereToSpawn"));
	RootComponent = WhereToSpawn;

	//������ ���� �ּ�/�ִ� �ʱⰪ ����
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
		//Spawn Pickup�� Ÿ�̸� ����
			//�����̽ð�
		SpawnDelay = FMath::FRandRange(SpawnDelayRangeLow, SpawnDelayRangeHigh);

		// �ڵ��� �����ٰ�, �� Ŭ����(��)�� ���ؼ�, SpawnPickup�� ���ε��ϰ�, SpawnDelay��ŭ�� �ð��� �帣�� ���� ȣ��, �ݺ�x
		GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);

	}
	else
	{
		//Spawn Pickup�� Ÿ�̸� �ʱ�ȭ
		GetWorldTimerManager().ClearTimer(SpawnTimer);
	}
}

void ASpawnVolume::SpawnPickup()
{
	//������ �������� �ִٸ�
	if (WhatToSpawn != nullptr)
	{
		//world�� ��ȿ���� üũ
		UWorld* const World = GetWorld();
		if (World)
		{
			FActorSpawnParameters pram;
			//������ �θ�� this�� ��
			pram.Owner = this;
			//���� �������� ���������, ����� �ߴ��� ���
			//pram.Instigator = Instigator;

			//����� ��ġ�� ������ ��ġ�� ��
			FVector SpawnLocation = GetRandomPointInVolume();

			//������ �����ۿ� ������ �����̼ǰ��� �־���
			FRotator SpawnRotation;
			SpawnRotation.Yaw = FMath::FRand() * 360.0f;
			SpawnRotation.Pitch = FMath::FRand() * 360.0f;
			SpawnRotation.Roll = FMath::FRand() * 360.0f;

			//�������� ����
			auto const SpawnedPickup = World->SpawnActor<APickUp>(WhatToSpawn, SpawnLocation, SpawnRotation, pram);
			
			// �ڵ��� �����ٰ�, �� Ŭ����(��)�� ���ؼ�, SpawnPickup�� ���ε��ϰ�, SpawnDelay��ŭ�� �ð��� �帣�� ���� ȣ��, �ݺ�x
			GetWorldTimerManager().SetTimer(SpawnTimer, this, &ASpawnVolume::SpawnPickup, SpawnDelay, false);
		}
	}
}

