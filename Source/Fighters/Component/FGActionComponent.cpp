#include "Component/FGActionComponent.h"

UFGActionComponent::UFGActionComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void UFGActionComponent::BeginPlay()
{
	Super::BeginPlay();
}

void UFGActionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
}
