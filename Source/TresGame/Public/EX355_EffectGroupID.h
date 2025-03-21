#pragma once
#include "CoreMinimal.h"
#include "EX355_EffectGroupID.generated.h"

USTRUCT(BlueprintType)
struct FEX355_EffectGroupID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    TRESGAME_API FEX355_EffectGroupID();
};

