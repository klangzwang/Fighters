#include "FGLevelScriptActorBattle.h"

void AFGLevelScriptActorBattle::OnOnionStreamProcessFinish()
{
}

AFGLevelScriptActorBattle::AFGLevelScriptActorBattle()
{
    this->m_P1CharacterID = ECharacterID::DUM;
    this->m_P2CharacterID = ECharacterID::DUM;
    this->bStageLoadedComplete = false;
    this->bNeedStageLoading = false;
    this->m_charLightData = NULL;
}
