#include "Engine/DataTable.h"
#include "DataAssets/Ability/AbilityDataAsset.h"

#include "AbilityDataRow.generated.h"

/**
 * Struct to define each row of the AbilityDataTable.
 */
USTRUCT(BlueprintType)
struct FAbilityDataRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability", meta =
		(ToolTip = "Specific data asset for this ability. Soft pointer to improve Data Table performance by only loading in the row when required."))
	TSoftObjectPtr<UAbilityDataAsset> AbilityDataAsset;
};