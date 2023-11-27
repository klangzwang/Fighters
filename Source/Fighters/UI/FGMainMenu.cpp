#include "FGMainMenu.h"

UFGMainMenu::UFGMainMenu()
{
}

void UFGMainMenu::NativeConstruct()
{
	Super::NativeConstruct();

	APlayerController* OwnerController = Cast<APlayerController>(GetOwningPlayer());
	if (OwnerController)
	{
		SetIsFocusable(true);
		SetKeyboardFocus();
	}
}
