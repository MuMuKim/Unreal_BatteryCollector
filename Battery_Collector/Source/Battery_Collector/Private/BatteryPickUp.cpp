// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickUp.h"

ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);
}

void ABatteryPickUp::WasCollected_Implementation()
{
	//ù��°�� Base Pickup ��ũ��Ʈ�� �ְ�
	//->�θ��Լ��� ȣ��
	Super::WasCollected_Implementation();
	//���͸� ������ �ı��ϱ�
	Destroy();
}
