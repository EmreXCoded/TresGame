#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackBonamikWorldWindKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackBonamikWorldWindKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    TRESGAME_API FTresInterpTrackBonamikWorldWindKey();
};

