// Fill out your copyright notice in the Description page of Project Settings.


#include "BatteryPickUp.h"

ABatteryPickUp::ABatteryPickUp()
{
	GetMesh()->SetSimulatePhysics(true);

	//베터리의 기본 값을 설정해줌
	BetteryPower = 150.f;
}

void ABatteryPickUp::WasCollected_Implementation()
{
	//첫번째로 Base Pickup 스크립트가 있고
	//->부모함수를 호출
	Super::WasCollected_Implementation();
	//베터리 아이템 파괴하기
	Destroy();
}

//베터리의 파워 값을 반환함
float ABatteryPickUp::GetPower()
{
	return BetteryPower;
}

