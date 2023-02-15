#pragma once

#include "AreaOfInterestBase.h"

class CHANNELDUE_API FSphereAOI : public FAreaOfInterestBase
{
public:
	float Radius;
	
protected:
	virtual void SetSpatialQuery(channeldpb::SpatialInterestQuery* Query, const FVector& PawnLocation, const FRotator& PawnRotation) override;
};