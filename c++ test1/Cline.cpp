#include "Cline.h"

#include <iostream>
using namespace std;

int Cline::getlength()
{
	return *ptr;
}
Cline::Cline(int len)
{
	cout << "���캯��" << endl;
	ptr = new int;
	*ptr = len;

}
Cline::Cline(const Cline& obj)
{
	cout << "�������캯��" << endl;
	ptr = new int;
	*ptr = *obj.ptr;

}
Cline::~Cline()
{
	cout << "��������" << endl;
	delete ptr;
}



