#include "Person.h"
#include <iostream>
using namespace std;

Person::Person(const char* pN)
{
	m_pName = new char[sizeof(pN)];
	if (m_pName)
	{
		strcpy_s(m_pName, sizeof(pN), pN);
	}
}

Person::Person(const Person& obj)
{
	//m_pName = obj.m_pName;
	m_pName = new char[sizeof(obj.m_pName)];
	if (m_pName)
	{
		strcpy_s(m_pName, sizeof(obj.m_pName), obj.m_pName);
	}

}

Person::~Person()
{
	if (m_pName)
	{
		delete[] m_pName;
		m_pName = nullptr;
	}
	
}