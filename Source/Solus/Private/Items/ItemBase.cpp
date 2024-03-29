// Fill out your copyright notice in the Description page of Project Settings.


#include "Items/ItemBase.h"

#include "PrimitiveSceneInfo.h"

UItemBase::UItemBase()
{
}

UItemBase* UItemBase::CreateItemCopy() const
{
	UItemBase* ItemCopy = NewObject<UItemBase>(StaticClass());

	ItemCopy->ID = this->ID;
	ItemCopy->Quantity = this->Quantity;
	ItemCopy->ItemQuality = this->ItemQuality;
	ItemCopy->ItemType = this->ItemType;
	ItemCopy->TextData = this->TextData;
	ItemCopy->NumericData = this->NumericData;
	ItemCopy->ItemStatistics = this->ItemStatistics;
	ItemCopy->AssetData = this->AssetData;

	return ItemCopy;
}

void UItemBase::SetQuantity(const int32 NewQuantity)
{
	if (NewQuantity != Quantity)
	{
		Quantity = FMath::Clamp(NewQuantity, 0 , NumericData.bIsStackable ? NumericData.MaxStackSize : 1);

		//if (OwningInventory)
		//{
		//	if quantity <= 0 remove item
		//}
	}
}

void UItemBase::Use(ASolusCharacter* Character)
{
	
}
