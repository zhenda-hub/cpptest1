#pragma once
#include "CStudent.h"


class CAddress
{
	char* m_pProvince;
	char* m_pCity;
	char* m_pDistrict;
public:
	CAddress(const char* pProvince, const char* pCity, const char* pDisrict);
	//friend void CStudent::show(CAddress &obj);
	friend class CStudent;
};

