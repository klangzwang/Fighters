#include "FGAnimNotifyGravity.h"
#include "GameFramework/CharacterMovementComponent.h"

UFGAnimNotifyGravity::UFGAnimNotifyGravity() : Super()
{
	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(0, 255, 255, 255);
	#endif
}

void UFGAnimNotifyGravity::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotify(Character, Controller, MeshComp, Animation);

	switch (jumpingType)
	{
		case EJumpingType::VE_StartJumping:
			Character->GetCharacterMovement()->GravityScale = 2.f;
			Character->GetCharacterMovement()->GroundFriction = 10.f;
			break;
		case EJumpingType::VE_LoopJumping:
			Character->GetCharacterMovement()->GravityScale += FMath::RandRange(1.f, 1.f);
			Character->GetCharacterMovement()->GroundFriction = 10.f;
			break;
		case EJumpingType::VE_EndJumping:
			Character->GetCharacterMovement()->GravityScale = 2.f;
			Character->GetCharacterMovement()->GroundFriction = 10.f;
			break;
		default:
			break;
	}
}
