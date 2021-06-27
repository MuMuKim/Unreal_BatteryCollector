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
	
	//WhereToSpawn ���� ��ȯ���ִ� �Լ�
	FORCEINLINE class UBoxComponent* GetWheretoSpawn() const { return WhereToSpawn; }

	//�ڽ�������Ʈ �������� ������ ��ǥ�� ��ȯ�ϴ� �Լ�
	UFUNCTION(BlueprintPure, Category = "Spawning")
 	FVector GetRandomPointInVolume();

	//Volume Spawn�� Pickup Spawn �۵��ϴ� �Լ�
	UFUNCTION(BlueprintCallable, Category= "Spwaning")
	void SetSpawningActive(bool bSuouldSpawn);

protected:
	UPROPERTY(EditAnywhere,Category = "Spawning")
	TSubclassOf<class APickUp> WhatToSpawn;

	//Ÿ�̸� ����
	FTimerHandle SpawnTimer;	
	//������ �ּ������ð�
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeLow;
	//������ �ִ������ð�
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spawning")
	float SpawnDelayRangeHigh;
private:
	//������ ������ġ�� ������ �ڽ�������Ʈ
	UPROPERTY(VisibleAnywhere,BlueprintReadOnly, Category = "Spawning", meta = (AllowPrivateAccess = "ture"))
	class UBoxComponent* WhereToSpawn;

	//���ο� �������� ����
	void SpawnPickup();

	//���� ������ ���� �����̰�
	float SpawnDelay;
};
