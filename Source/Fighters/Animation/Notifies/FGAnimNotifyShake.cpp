#include "FGAnimNotifyShake.h"
#include "GameFramework/CharacterMovementComponent.h"

UFGAnimNotifyShake::UFGAnimNotifyShake() : Super()
{
	isLowShake = true;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyShake::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotify(Character, Controller, MeshComp, Animation);

	Character->PerformShake(isLowShake);
}
