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
	cout << "ÐÕÃû" << m_Name << "ÄêÁä" << m_iAge;
}