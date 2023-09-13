// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "WorldObject.generated.h"


UCLASS(Blueprintable, BlueprintType)
class SIMPLESHOOTER_API UWorldObject : public UObject
{
	GENERATED_BODY()

public:
	UWorldObject();

	UWorld* GetWorld() const override;
};
