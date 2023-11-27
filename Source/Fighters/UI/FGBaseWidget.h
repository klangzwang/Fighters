#pragma once
#include "CoreMinimal.h"
#include "FGPrimaryUserWidget.h"
#include "FGBaseWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FIGHTERS_API UFGBaseWidget : public UFGPrimaryUserWidget
{
    GENERATED_BODY()

public:

    UFGBaseWidget();
};
