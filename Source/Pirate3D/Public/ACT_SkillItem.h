// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ACT_SkillItem.generated.h"

/**
 * 
 */
UCLASS()
class PIRATE3D_API UACT_SkillItem : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
	FName SkillName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
	TArray<FKey> ActiveKeys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Item)
	TSubclassOf<ACharacter> OwnerClass;
};
