#include "FGAnimNotifyFriction.h"
#include "Engine.h"

UFGAnimNotifyFriction::UFGAnimNotifyFriction() : Super()
{
	frictionAmount = 10.f;
	brakingFF = 2.f;
	brakingDW = 2048.f;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyFriction::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			Player->GetCharacterMovement()->GroundFriction = frictionAmount;
			Player->GetCharacterMovement()->BrakingFrictionFactor = brakingFF;
			Player->GetCharacterMovement()->BrakingDecelerationWalking = brakingDW;
		}
	}
}

void UFGAnimNotifyFriction::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	if (MeshComp != NULL && MeshComp->GetOwner() != NULL)
	{
		AFGCharacterBase* Player = Cast<AFGCharacterBase>(MeshComp->GetOwner());
		if (Player != NULL)
		{
			Player->GetCharacterMovement()->GroundFriction = 10.f;
			Player->GetCharacterMovement()->BrakingFrictionFactor = 2.f;
			Player->GetCharacterMovement()->BrakingDecelerationWalking = 2048.f;
		}
	}
}
