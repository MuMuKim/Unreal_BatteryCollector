// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class BATTERY_COLLECTOR_API ASpawnVolume : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASpawnVolume();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	//WhereToSpawn 값을 반환해주는 함수
	FORCEINLINE class UBoxComponent* GetWheretoSpawn() const { return WhereToSpawn; }

	//박스컴포넌트 볼륨속의 랜덤한 좌표를 반환하는 함수
	UFUNCTION(BlueprintPure, Category = "Spawning")
 	FVector GetRandomPointInVolume();

	//Volume Spawn의 Pickup Spawn 작동하는 함수
	UFUNCTION(BlueprintCallable, Category= "Spwaning")
	void SetSpawningActive(bool bSuouldSpawn);

protected:
	UPROPERTY(EditAnywhere,Category = "Spawning")
	TSubclassOf<class APickUp> WhatToSpawn;

	//타이머 변수
	FTimerHandle SpawnTimer;	
	//생성시 최소지연시간
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;
	//생성시 최대지연시간
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;
private:
	//아이템 스폰위치를 지정할 박스컴포넌트
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "ture"))
	class UBoxComponent* WhereToSpawn;

	//새로운 아이템을 생성
	void SpawnPickup();

	//현재 아이템 생성 딜레이값
	float SpawnDelay;
};
