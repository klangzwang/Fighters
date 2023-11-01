#include "FGAnimNotifySoundEffect.h"
#include "Kismet/GameplayStatics.h"

UFGAnimNotifySoundEffect::UFGAnimNotifySoundEffect() : Super()
{
	VolumeMultiplier = 1.f;
	PitchMultiplier = 1.f;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifySoundEffect::PerformNotify(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotify(Character, Controller, MeshComp, Animation);

	if (soundEffects.Num() > 0 && MeshComp)
	{
		#if WITH_EDITORONLY_DATA
		UWorld* World = MeshComp->GetWorld();
		if (World && World->WorldType == EWorldType::EditorPreview)
		{
			for(USoundBase* soundBase : soundEffects)
				UGameplayStatics::PlaySound2D(World, soundBase, VolumeMultiplier, PitchMultiplier);
		}
		else
		#endif
		{
			for (USoundBase* soundBase : soundEffects)
				UGameplayStatics::PlaySoundAtLocation(MeshComp->GetWorld(), soundBase, MeshComp->GetComponentLocation(), VolumeMultiplier, PitchMultiplier);
		}
	}
}