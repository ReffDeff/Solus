#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ItemDataStructs.generated.h"

UENUM()
enum class EItemQuality : uint8
{
	Shoddy UMETA(DisplayName = "Shoddy"),
	Common UMETA(DisplayName = "Common"),
	Quality UMETA(DisplayName = "Quality"),
	Masterwork UMETA(DisplayName = "Masterwork"),
	Grandmaster UMETA(DisplayName = "Grandmaster")
};

UENUM()
enum class EItemType : uint8
{
	Armor UMETA(DisplayName = "Armor"),
	Weapon UMETA(DisplayName = "Weapon"),
	Shield UMETA(DisplayName = "Shield"),
	Spell UMETA(DisplayName = "Spell"),
	Food UMETA(DisplayName = "Food"),
	QuestItem UMETA(DisplayName = "QuestItem"),
	Mundane UMETA(DisplayName = "Mundane"),
	Book UMETA(DisplayName = "Book"),
};

USTRUCT()
struct FItemStatistics
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	float ArmorRating;
	
	UPROPERTY(EditAnywhere)
	float DamageValue;
	
	UPROPERTY(EditAnywhere)
	float RestorationValue;
	
	UPROPERTY(EditAnywhere)
	float SellValue;
};

USTRUCT()
struct FItemTextData
{
	GENERATED_BODY()
	
	UPROPERTY(EditAnywhere)
	FText Name;

	UPROPERTY(EditAnywhere)
	FText Description;

	UPROPERTY(EditAnywhere)
	FText InteractionText;

	UPROPERTY(EditAnywhere)
	FText UsageText;
};

USTRUCT()
struct FItemNumericData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	float Weight;

	UPROPERTY(EditAnywhere)
	int32 MaxStackSize;

	UPROPERTY(EditAnywhere)
	bool bIsStackable;
	
};

USTRUCT()
struct FItemAssetData
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	UTexture2D* Icon;
	
	UPROPERTY(EditAnywhere)
	UStaticMesh* Mesh;
};

USTRUCT()
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

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
	
};
