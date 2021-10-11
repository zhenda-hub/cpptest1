#include "CStudent.h"
#include <iostream>
using namespace std;
#include "CAddress.h"



CStudent::CStudent(const char* pName, int nAge, float fScore)
	
{
	m_pName = new char[sizeof(pName)];//!!
	strcpy_s(m_pName, sizeof(pName), pName); 

	m_nAge = nAge;
	m_fScore = fScore;
}

void CStudent::show(CAddress& obj)
{
	cout << m_pName << "年龄是" << m_nAge << "成绩是" << m_fScore << endl;
	cout << "地址是："<<obj.m_pProvince << "省" << obj.m_pCity << "市" << obj.m_pDistrict << "区" << endl;
}

CStudent::CStudent(const CStudent& obj)
{
	m_pName = obj.m_pName;
	m_nAge = obj.m_nAge;
	m_fScore = obj.m_fScore;
}
