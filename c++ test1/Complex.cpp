#include "Complex.h"

#include <iostream>
using namespace std;
Complex::Complex(double real, double imag)
{
	cout << "构造函数" << endl;
	m_real = real;
	m_imag = imag;
}

Complex::Complex(const Complex& obj)
{
	cout << "拷贝构造函数" << endl;
	m_imag = obj.m_imag;
	m_real = obj.m_real;
}

//Complex::Complex& operator= (const Complex& obj) 
//{
//	cout << "=函数" << endl;
//	m_imag = obj.m_imag;
//	m_real = obj.m_real;
//}

Complex::~Complex()
{
	cout << "析构函数" << endl;
}




