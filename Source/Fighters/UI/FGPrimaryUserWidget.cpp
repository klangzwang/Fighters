#include "FGPrimaryUserWidget.h"
#include "Input/CommonUIInputTypes.h"

UFGPrimaryUserWidget::UFGPrimaryUserWidget()
{
}

void UFGPrimaryUserWidget::NativeDestruct()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		if (Handle.IsValid())
		{
			Handle.Unregister();
		}
	}
	BindingHandles.Empty();

	Super::NativeDestruct();
}

void UFGPrimaryUserWidget::RegisterBinding(FDataTableRowHandle InputAction, const FInputActionExecutedDelegate& Callback, FInputActionBindingHandle& BindingHandle)
{
	FBindUIActionArgs BindArgs(InputAction, FSimpleDelegate::CreateLambda([InputAction, Callback]()
		{
			Callback.ExecuteIfBound(InputAction.RowName);
		}));
	BindArgs.bDisplayInActionBar = true;

	BindingHandle.Handle = RegisterUIActionBinding(BindArgs);
	BindingHandles.Add(BindingHandle.Handle);
}

void UFGPrimaryUserWidget::UnregisterBinding(FInputActionBindingHandle BindingHandle)
{
	if (BindingHandle.Handle.IsValid())
	{
		BindingHandle.Handle.Unregister();
		BindingHandles.Remove(BindingHandle.Handle);
	}
}

void UFGPrimaryUserWidget::UnregisterAllBindings()
{
	for (FUIActionBindingHandle Handle : BindingHandles)
	{
		Handle.Unregister();
	}
	BindingHandles.Empty();
}