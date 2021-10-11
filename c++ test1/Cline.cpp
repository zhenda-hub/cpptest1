#include "Cline.h"

#include <iostream>
using namespace std;

int Cline::getlength()
{
	return *ptr;
}
Cline::Cline(int len)
{
	cout << "构造函数" << endl;
	ptr = new int;
	*ptr = len;

}
Cline::Cline(const Cline& obj)
{
	cout << "拷贝构造函数" << endl;
	ptr = new int;
	*ptr = *obj.ptr;

}
Cline::~Cline()
{
	cout << "析构函数" << endl;
	delete ptr;
}



