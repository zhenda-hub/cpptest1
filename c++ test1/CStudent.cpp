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
	cout << m_pName << "������" << m_nAge << "�ɼ���" << m_fScore << endl;
	cout << "��ַ�ǣ�"<<obj.m_pProvince << "ʡ" << obj.m_pCity << "��" << obj.m_pDistrict << "��" << endl;
}

CStudent::CStudent(const CStudent& obj)
{
	m_pName = obj.m_pName;
	m_nAge = obj.m_nAge;
	m_fScore = obj.m_fScore;
}
