// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "LuaState.h"
#include "ExampleGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class EXAMPLE_UE4_API UExampleGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	virtual void Init();
    virtual void Shutdown();
    slua::LuaState* State();
    virtual void InitRichTextStyle();
private:
};
