// Fill out your copyright notice in the Description page of Project Settings.


#include "MyUserWidget.h"
#include "Components/Button.h"

bool UMyUserWidget::Initialize()
{
    Super::Initialize();

    StartGame->OnClicked.AddDynamic(this, &UMyUserWidget::StartButtonClecked);

    return true;
}

void UMyUserWidget::StartButtonClecked()
{
    UE_LOG(LogTemp, Warning, TEXT("Our button is working!"));
}
