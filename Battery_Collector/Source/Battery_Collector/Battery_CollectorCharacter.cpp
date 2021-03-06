// Copyright Epic Games, Inc. All Rights Reserved.

#include "Battery_CollectorCharacter.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/SpringArmComponent.h"
#include <Components/SphereComponent.h>
#include "PickUp.h"
#include "BatteryPickUp.h"
//////////////////////////////////////////////////////////////////////////
// ABattery_CollectorCharacter

ABattery_CollectorCharacter::ABattery_CollectorCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(42.f, 96.0f);

	// set our turn rates for input
	BaseTurnRate = 45.f;
	BaseLookUpRate = 45.f;

	// Don't rotate when the controller rotates. Let that just affect the camera.
	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;

	// Configure character movement
	GetCharacterMovement()->bOrientRotationToMovement = true; // Character moves in the direction of input...	
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f); // ...at this rotation rate
	GetCharacterMovement()->JumpZVelocity = 600.f;
	GetCharacterMovement()->AirControl = 0.2f;

	// Create a camera boom (pulls in towards the player if there is a collision)
	CameraBoom = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraBoom"));
	CameraBoom->SetupAttachment(RootComponent);
	CameraBoom->TargetArmLength = 300.0f; // The camera follows at this distance behind the character	
	CameraBoom->bUsePawnControlRotation = true; // Rotate the arm based on the controller

	// Create a follow camera
	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(CameraBoom, USpringArmComponent::SocketName); // Attach the camera to the end of the boom and let the boom adjust to match the controller orientation
	FollowCamera->bUsePawnControlRotation = false; // Camera does not rotate relative to arm

	//CollectionSphere 생성
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(200.0f); //구의 반지름을 설정

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//케릭터의 기본 파워 초기값을 설정
	initialPower = 2000.f;
	CharacterPower = initialPower;

	//파워레벨에 따라 속도를 설정
	SpeedFactor = 0.75f;
	BaseFactor = 10.f;
}

//////////////////////////////////////////////////////////////////////////
// Input

void ABattery_CollectorCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	//버튼바인딩
	InputComponent->BindAction("Collect", IE_Pressed, this, &ABattery_CollectorCharacter::CollectionPickups);

	PlayerInputComponent->BindAxis("MoveForward", this, &ABattery_CollectorCharacter::MoveForward);
	PlayerInputComponent->BindAxis("MoveRight", this, &ABattery_CollectorCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "turn" handles devices that provide an absolute delta, such as a mouse.
	// "turnrate" is for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("TurnRate", this, &ABattery_CollectorCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookUpRate", this, &ABattery_CollectorCharacter::LookUpAtRate);

	// handle touch devices
	PlayerInputComponent->BindTouch(IE_Pressed, this, &ABattery_CollectorCharacter::TouchStarted);
	PlayerInputComponent->BindTouch(IE_Released, this, &ABattery_CollectorCharacter::TouchStopped);

	// VR headset functionality
	PlayerInputComponent->BindAction("ResetVR", IE_Pressed, this, &ABattery_CollectorCharacter::OnResetVR);
}


void ABattery_CollectorCharacter::OnResetVR()
{
	// If Battery_Collector is added to a project via 'Add Feature' in the Unreal Editor the dependency on HeadMountedDisplay in Battery_Collector.Build.cs is not automatically propagated
	// and a linker error will result.
	// You will need to either:
	//		Add "HeadMountedDisplay" to [YourProject].Build.cs PublicDependencyModuleNames in order to build successfully (appropriate if supporting VR).
	// or:
	//		Comment or delete the call to ResetOrientationAndPosition below (appropriate if not supporting VR)
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}

void ABattery_CollectorCharacter::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)
{
		Jump();
}

void ABattery_CollectorCharacter::TouchStopped(ETouchIndex::Type FingerIndex, FVector Location)
{
		StopJumping();
}

void ABattery_CollectorCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
}

void ABattery_CollectorCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * BaseLookUpRate * GetWorld()->GetDeltaSeconds());
}

void ABattery_CollectorCharacter::MoveForward(float Value)
{
	if ((Controller != nullptr) && (Value != 0.0f))
	{
		// find out which way is forward
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get forward vector
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		AddMovementInput(Direction, Value);
	}
}

void ABattery_CollectorCharacter::MoveRight(float Value)
{
	if ( (Controller != nullptr) && (Value != 0.0f) )
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
	
		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, Value);
	}
}

void ABattery_CollectorCharacter::CollectionPickups()
{
	// CollectionSphere와 오버랩된 모든 액터를 배열로 받아옴
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	//먹은 아이템의 파워를 계속 추적할 변수
	//->함수가 실행될때마다 초기화해야하기 떄문에 0을 넣음
	float CollectedPower = 0;

	//Foreach문을 통해
	for (int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		//액터를 APicup으로 형변환
		APickUp* const TestPickup = Cast<APickUp>(CollectedActors[iCollected]);
		//형변환이 성공하고 아이템이 유효하고 활성화 되어있을 때
		if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
		{
			//해당 아이템의 WasCollected 함수를 호출
			TestPickup->WasCollected();

			//아이템이 베터리형인지 형변환으로 확인
			ABatteryPickUp* const TestBattery = Cast<ABatteryPickUp>(TestPickup);
			if (TestBattery)
			{
				//베터리의 파워값을 CollectedPower에 더해줌
				//->아이템의 파워값을 케릭터에 더해주기
				CollectedPower += TestBattery->GetPower();
			}
			//아이템을 비활성화 시킨다
			TestPickup->SetActive(false);
		}
	}
	if (CollectedPower > 0)
	{
		UpdatePower(CollectedPower);
	}
}


//파워의 초기값을 반환함
float ABattery_CollectorCharacter::GetInitialPower()
{
	return initialPower;
}

//현재 파워의 값을 반환함
float ABattery_CollectorCharacter::GetCurrentPower()
{
	return CharacterPower;
}

//파워가 늘거나 줄면 호출됨
void ABattery_CollectorCharacter::UpdatePower(float PowerChange)
{
	//파워를 바꿈
	CharacterPower += PowerChange;

	//파워에 따라 속도를 변경
	GetCharacterMovement()->MaxWalkSpeed = BaseFactor + SpeedFactor * CharacterPower;

	//시각효과 호출 (Bp에서 기능을 만듦)
	PowerChangeEffect();
}

