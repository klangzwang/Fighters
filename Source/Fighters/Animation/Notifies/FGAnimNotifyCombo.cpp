#include "FGAnimNotifyCombo.h"
#include "Engine.h"

UFGAnimNotifyCombo::UFGAnimNotifyCombo() : Super()
{
	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

void UFGAnimNotifyCombo::PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotifyTick(Character, Controller, MeshComp, Animation);

	if (switchMontage)
	{
		if (MeshComp->AnimScriptInstance->Montage_IsActive(MeshComp->AnimScriptInstance->GetCurrentActiveMontage()))
		{
			MeshComp->AnimScriptInstance->Montage_Play(switchToMontage);
		}
	}
	else
	{
		if (nextSection != "")
		{
			if (MeshComp->AnimScriptInstance->Montage_IsActive(MeshComp->AnimScriptInstance->GetCurrentActiveMontage()))
			{
				MeshComp->AnimScriptInstance->Montage_JumpToSection(nextSection, MeshComp->AnimScriptInstance->GetCurrentActiveMontage());
			}
		}
	}
}
