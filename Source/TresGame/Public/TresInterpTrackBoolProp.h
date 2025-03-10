#pragma once
#include "CoreMinimal.h"
#include "Matinee/InterpTrackBoolProp.h"
#include "ETresPropertyTrackTermnation.h"
#include "TresInterpTrackBoolProp.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class TRESGAME_API UTresInterpTrackBoolProp : public UInterpTrackBoolProp {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresPropertyTrackTermnation m_TermnationType;
    
    UTresInterpTrackBoolProp();
};

