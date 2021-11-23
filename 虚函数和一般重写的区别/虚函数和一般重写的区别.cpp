// 虚函数和一般重写的区别.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>


class A
{
public:
	void FuncA()
	{
		printf("FuncA called\n");
	}
	virtual void FuncB()
	{
		printf("FuncB called\n");
	}
};
class B : public A
{
public:
	void FuncA()
	{
		A::FuncA();
		printf("FuncAB called\n");
	}
	virtual void FuncB()
	{
		printf("FuncBB called\n");
	}
};
void main(void)
{
	B	b;
	A* pa;
	pa = &b;
	A* pa2 = new A;
	pa->FuncA();
	pa->FuncB();
	pa2->FuncA();
	pa2->FuncB();
	delete pa2;
}

