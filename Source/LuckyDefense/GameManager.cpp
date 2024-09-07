// Fill out your copyright notice in the Description page of Project Settings.


#include "GameManager.h"

GameManager::GameManager()
{
	SingletonInstance = this;
}

GameManager::~GameManager()
{
}

GameManager* GameManager::GetInstance() {
	if (!SingletonInstance) 
	{
		SingletonInstance = NewObject<GameManager>();
		SingletonInstance->AddToRoot();
	}

	return SingletonInstance;
}
