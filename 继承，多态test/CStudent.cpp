#include "CStudent.h"
#include <iostream>
using namespace std;

CStudent::CStudent(const char* name, int age, int stunum):CPeople(name, age)
{
	m_iStuNum = stunum;
}

void CStudent::show()
{
	CPeople::show();
	cout << "Ñ§ºÅ" << m_iStuNum << endl;
}
