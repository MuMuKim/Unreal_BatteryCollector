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

	//CollectionSphere ????
	CollectionSphere = CreateDefaultSubobject<USphereComponent>(TEXT("CollectionSphere"));
	CollectionSphere->AttachTo(RootComponent);
	CollectionSphere->SetSphereRadius(200.0f); //???? ???????? ????

	// Note: The skeletal mesh and anim blueprint references on the Mesh component (inherited from Character) 
	// are set in the derived blueprint asset named MyCharacter (to avoid direct content references in C++)

	//???????? ???? ???? ???????? ????
	initialPower = 2000.f;
	CharacterPower = initialPower;

	//?????????? ???? ?????? ????
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

	//??????????
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
	// CollectionSphere?? ???????? ???? ?????? ?????? ??????
	TArray<AActor*> CollectedActors;
	CollectionSphere->GetOverlappingActors(CollectedActors);

	//???? ???????? ?????? ???? ?????? ????
	//->?????? ???????????? ?????????????? ?????? 0?? ????
	float CollectedPower = 0;

	//Foreach???? ????
	for (int32 iCollected = 0; iCollected < CollectedActors.Num(); ++iCollected)
	{
		//?????? APicup???? ??????
		APickUp* const TestPickup = Cast<APickUp>(CollectedActors[iCollected]);
		//???????? ???????? ???????? ???????? ?????? ???????? ??
		if (TestPickup && !TestPickup->IsPendingKill() && TestPickup->IsActive())
		{
			//???? ???????? WasCollected ?????? ????
			TestPickup->WasCollected();

			//???????? ???????????? ?????????? ????
			ABatteryPickUp* const TestBattery = Cast<ABatteryPickUp>(TestPickup);
			if (TestBattery)
			{
				//???????? ???????? CollectedPower?? ??????
				//->???????? ???????? ???????? ????????
				CollectedPower += TestBattery->GetPower();
			}
			//???????? ???????? ??????
			TestPickup->SetActive(false);
		}
	}
	if (CollectedPower > 0)
	{
		UpdatePower(CollectedPower);
	}
}


//?????? ???????? ??????
float ABattery_CollectorCharacter::GetInitialPower()
{
	return initialPower;
}

//???? ?????? ???? ??????
float ABattery_CollectorCharacter::GetCurrentPower()
{
	return CharacterPower;
}

//?????? ?????? ???? ??????
void ABattery_CollectorCharacter::UpdatePower(float PowerChange)
{
	//?????? ????
	CharacterPower += PowerChange;

	//?????? ???? ?????? ????
	GetCharacterMovement()->MaxWalkSpeed = BaseFactor + SpeedFactor * CharacterPower;

	//???????? ???? (Bp???? ?????? ????)
	PowerChangeEffect();
}

