#pragma once
#include "CCpu.h"
class CCpuIntel :
    public CCpu
{
public:
    CCpuIntel();
    ~CCpuIntel();
    void DoCalc();
};

