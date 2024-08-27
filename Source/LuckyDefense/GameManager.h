// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameManager.generated.h"

/**
 * 
 */
class LUCKYDEFENSE_API GameManager : public UObject
{
	GENERATED_BODY()

public:
	static GameManager* GetInstance();
private:
	GameManager();
	~GameManager();

	static GameManager* SingletonInstance;
};
