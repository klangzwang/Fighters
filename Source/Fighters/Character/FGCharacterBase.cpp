#include "FGCharacterBase.h"
#include "Engine/LocalPlayer.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/Controller.h"
#include "InputActionValue.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "FGOpenController.h"
#include "Kismet/GameplayStatics.h"
#include "FGGameMode.h"

AFGCharacterBase::AFGCharacterBase()
{
	PrimaryActorTick.bCanEverTick = true;

	GetMesh()->SetRelativeRotation(FRotator(0.f, 90.f, 0.f));

	GetCapsuleComponent()->InitCapsuleSize(24.f, 96.0f);
	GetCapsuleComponent()->ShapeColor = FColor::Yellow;

	GetCharacterMovement()->bOrientRotationToMovement = false;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 720.0f, 0.0f);
	GetCharacterMovement()->bRequestedMoveUseAcceleration = false;
	GetCharacterMovement()->GravityScale = 2.5f;
	GetCharacterMovement()->AirControl = 0.0f;
	GetCharacterMovement()->JumpZVelocity = 0.0f;
	GetCharacterMovement()->GroundFriction = 10.0f;
	GetCharacterMovement()->MaxWalkSpeed = 200.0f;
	GetCharacterMovement()->MaxFlySpeed = 0.0f;
	GetCharacterMovement()->MaxAcceleration = 10000;

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
}

void AFGCharacterBase::BeginPlay()
{
	Super::BeginPlay();

	if (auto FGGameMode = Cast<AFGGameMode>(UGameplayStatics::GetGameMode(GetWorld())))
	{
		if (FGGameMode->ControllerLeft != NULL)
		{
			if (UEnhancedInputLocalPlayerSubsystem* SubSystem =
				ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(FGGameMode->ControllerLeft->GetLocalPlayer()))
				SubSystem->AddMappingContext(inputMappingLP, 0);
		}
		else if (FGGameMode->ControllerRight != NULL)
		{
			if (UEnhancedInputLocalPlayerSubsystem* SubSystem =
				ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(FGGameMode->ControllerRight->GetLocalPlayer()))
				SubSystem->AddMappingContext(inputMappingRP, 0);
		}
	}
}

void AFGCharacterBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AFGCharacterBase::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Move);
		EnhancedInputComponent->BindAction(JumpingAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Jumping);
		EnhancedInputComponent->BindAction(CrouchingAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Crouching);
		EnhancedInputComponent->BindAction(AttackAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Attack);
		EnhancedInputComponent->BindAction(ThrowAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Throw);
		EnhancedInputComponent->BindAction(RollAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Roll);
		EnhancedInputComponent->BindAction(DashAction, ETriggerEvent::Triggered, this, &AFGCharacterBase::Dash);
	}
}

void AFGCharacterBase::Landed(const FHitResult& Hit)
{
}

void AFGCharacterBase::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

		AddMovementInput(Direction, MovementVector.X);
	}
}

void AFGCharacterBase::Jumping(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		if(MovementVector.Y > 0.01)
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Jump"));
	}
}

void AFGCharacterBase::Crouching(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	if (Controller != nullptr)
	{
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

		if (MovementVector.Y < -0.01)
			GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Crouch"));
	}
}

void AFGCharacterBase::Attack(const FInputActionValue& Value)
{
	if(Value.Get<bool>())
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Attack"));
}

void AFGCharacterBase::Throw(const FInputActionValue& Value)
{
	if (Value.Get<bool>())
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Throw"));
}

void AFGCharacterBase::Roll(const FInputActionValue& Value)
{
	if (Value.Get<bool>())
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Roll"));
}

void AFGCharacterBase::Dash(const FInputActionValue& Value)
{
	if (Value.Get<bool>())
		GEngine->AddOnScreenDebugMessage(-1, 0.5f, FColor::Yellow, TEXT("Dash"));
}

float AFGCharacterBase::PlayAnimMontage(class UAnimMontage* AnimMontage, float InPlayRate, FName StartSectionName)
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (AnimMontage && UseMesh && UseMesh->AnimScriptInstance)
	{
		if (!UseMesh->AnimScriptInstance->Montage_IsPlaying(AnimMontage))
			return UseMesh->AnimScriptInstance->Montage_Play(AnimMontage, InPlayRate);
		else
		{
			if (StartSectionName != NAME_None && UseMesh->AnimScriptInstance->Montage_GetCurrentSection(AnimMontage) != StartSectionName)
				UseMesh->AnimScriptInstance->Montage_JumpToSection(StartSectionName, AnimMontage);
		}
	}
	return 0.0f;
}
void AFGCharacterBase::StopAnimMontage(class UAnimMontage* AnimMontage)
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (AnimMontage && UseMesh && UseMesh->AnimScriptInstance && UseMesh->AnimScriptInstance->Montage_IsPlaying(AnimMontage))
		UseMesh->AnimScriptInstance->Montage_Stop(AnimMontage->BlendOut.GetBlendTime());
}
void AFGCharacterBase::StopAllAnimMontages()
{
	USkeletalMeshComponent* UseMesh = GetMesh();
	if (UseMesh && UseMesh->AnimScriptInstance)
		UseMesh->AnimScriptInstance->Montage_Stop(0.0f);
}