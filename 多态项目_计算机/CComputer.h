#pragma once
#include "CCpu.h"
#include "CVideoCard.h"
#include "CMemory.h"

class CComputer
{
	CCpu* m_pCpu;
	CVideoCard* m_pVideoCard;
	CMemory* m_pMemory;

public:
	CComputer(CCpu* pCpu, CVideoCard* pVideoCard, CMemory* pMemory);
	~CComputer();
	void DoWork();

		
};

