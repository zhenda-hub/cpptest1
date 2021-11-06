#include "CComputer.h"
#include <iostream>
using namespace std;


CComputer::CComputer(CCpu* pCpu, CVideoCard* pVideoCard, CMemory* pMemory)
{
	m_pMemory = pMemory;
	m_pCpu = pCpu;
	m_pVideoCard = pVideoCard;
}

CComputer::~CComputer()
{
	cout << "µçÄÔÎö¹¹"<<endl;
	m_pCpu = nullptr;
	m_pVideoCard = nullptr;
	m_pMemory = nullptr;
}

void CComputer::DoWork()
{
	m_pCpu->DoCalc();
	m_pVideoCard->DoDisplay();
	m_pMemory->DoStorage();
}
