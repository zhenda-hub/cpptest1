#include "CPeople.h"
#include <iostream>
using namespace std;

CPeople::CPeople(const char* name, int age)
{
	//m_Name = name;
	strcpy_s(m_Name, name);
	m_iAge = age;
}

void CPeople::show()
{
	cout << "����" << m_Name << "����" << m_iAge;
}