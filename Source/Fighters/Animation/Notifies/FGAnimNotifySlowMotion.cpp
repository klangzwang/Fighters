#include "FGAnimNotifySlowMotion.h"
#include "Engine.h"

UFGAnimNotifySlowMotion::UFGAnimNotifySlowMotion() : Super()
{
	customPlayRate = 1.f;
	tickToDefault = false;

	#if WITH_EDITORONLY_DATA
	NotifyColor = FColor(128, 128, 0, 255);
	#endif
}

float UFGAnimNotifySlowMotion::CalcTriggerTimes(FAnimNotifyEvent* triggerTimes)
{
	return triggerTimes->GetDuration();
}

void UFGAnimNotifySlowMotion::NotifyBegin(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation, float TotalDuration)
{
	MeshComp->AnimScriptInstance->Montage_SetPlayRate(MeshComp->AnimScriptInstance->GetCurrentActiveMontage(), customPlayRate);
}

void UFGAnimNotifySlowMotion::PerformNotifyTick(AFGCharacterBase* Character, AFGOpenController* Controller, USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	Super::PerformNotifyTick(Character, Controller, MeshComp, Animation);

	float mPlayRate = MeshComp->AnimScriptInstance->Montage_GetPlayRate(MeshComp->AnimScriptInstance->GetCurrentActiveMontage());

	if (tickToDefault && mPlayRate != 1.f)
	{
		if (mPlayRate > 1.f)
		{
			MeshComp->AnimScriptInstance->Montage_SetPlayRate(MeshComp->AnimScriptInstance->GetCurrentActiveMontage(), mPlayRate -= 0.1f);
		}
		else if (mPlayRate < 1.f)
		{
			MeshComp->AnimScriptInstance->Montage_SetPlayRate(MeshComp->AnimScriptInstance->GetCurrentActiveMontage(), mPlayRate += 0.1f);
		}
	}
}

void UFGAnimNotifySlowMotion::NotifyEnd(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation)
{
	MeshComp->AnimScriptInstance->Montage_SetPlayRate(MeshComp->AnimScriptInstance->GetCurrentActiveMontage(), 1.f);
}
