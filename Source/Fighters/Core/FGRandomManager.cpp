#include "FGRandomManager.h"
#include "GenericPlatform/GenericPlatformMath.h"

void FFGRandomManager::InitSeed(int32 InSeed)
{
	Seed = InSeed;
	FGenericPlatformMath::RandInit(Seed);
}

int32 FFGRandomManager::GenerateRandomNumber()
{
	return FGenericPlatformMath::Rand();
}
