// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Data/ItemDataStructs.h"
#include "ItemBase.generated.h"


UCLASS()
class SOLUS_API UItemBase : public UObject
{
	GENERATED_BODY()

public:
	//===================================================
	// PROPERTIES & VARIABLES
	//===================================================
	
	UPROPERTY(VisibleAnywhere, Category= "Item Data", meta = (UIMin = 1, UIMax = 100))
	int32 Quantity;
	
	UPROPERTY(EditAnywhere, Category= "Item Data")
	FName ID;

	UPROPERTY(EditAnywhere, Category= "Item Data")
	EItemType ItemType;

	UPROPERTY(EditAnywhere, Category= "Item Data")
	EItemQuality ItemQuality;

	UPROPERTY(EditAnywhere, Category= "Item Data")
	FItemStatistics ItemStatistics;

	UPROPERTY(EditAnywhere, Category= "Item Data")
	FItemTextData TextData;

	UPROPERTY(EditAnywhere, Category= "Item Data")
	FItemNumericData NumericData;
	
	UPROPERTY(EditAnywhere, Category= "Item Data")
	FItemAssetData AssetData;

	//===================================================
	// FUNCTIONS
	//===================================================

	UItemBase();

	UItemBase* CreateItemCopy();

	FORCEINLINE float GetItemStackWeight() const {return Quantity * NumericData.Weight;};
	
protected:	
};
