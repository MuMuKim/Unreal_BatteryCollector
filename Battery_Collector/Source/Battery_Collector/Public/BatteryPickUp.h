// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PickUp.h"
#include "BatteryPickUp.generated.h"

/**
 * 
 */
UCLASS()
class BATTERY_COLLECTOR_API ABatteryPickUp : public APickUp
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ABatteryPickUp();

	//WasCollected �Լ��� �������̵�
	void WasCollected_Implementation() override;

	//�ɸ��͵� ���� Ȯ���� ���ֵ��� �����Լ��� ����
	float GetPower();

protected:
	//���͸��� �ɸ��ͷ� ������ �Ŀ��� ��
	//�� ������ C++��Ӱ��迡���� ������ �����ϰ� �̸� ��ӹ޴� BP������ ������ �Ұ��� /
	//->������ ��ŸŰ���带 �Ἥ Protected�ɼ��� ���� ���������ϰ� �Ҽ��ֵ�.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Power", Meta = (BlueprintProtected = "true"))
	float BetteryPower;
};
