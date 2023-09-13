// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/WorldObject.h"

UWorldObject::UWorldObject()
{
	GetWorld();
}

UWorld* UWorldObject::GetWorld() const
{
	UWorld* world = GetOuter()->GetWorld();

	if (world)
	{
		return world;
	}

	return nullptr;
}
