#include "CAddress.h"
#include <iostream>
using namespace std;

CAddress::CAddress(const char* pProvince, const char* pCity, const char* pDisrict)
{
	m_pProvince = new char[sizeof(pProvince)];
	m_pCity = new char[sizeof(pCity)];
	m_pDistrict = new char[sizeof(pDisrict)];

	strcpy_s(m_pProvince, sizeof(pProvince), pProvince);
	strcpy_s(m_pCity, sizeof(pCity), pCity);
	strcpy_s(m_pDistrict, sizeof(pDisrict), pDisrict);

}
