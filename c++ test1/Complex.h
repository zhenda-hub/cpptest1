#pragma once
class Complex
{
	double m_real;
	double m_imag;
public:
	Complex(double real = 0.0, double imag = 0.0);
	Complex(const Complex& obj);
	//Complex& operator= (const Complex& obj);
	~Complex();
};

