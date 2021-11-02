// 函数的9中传参方式.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

int fun1(int a, int b)
{
    return a + b;
}
int fun2(int* a, int* b)
{
    return *a + *b;
}
int fun3(int& a, int& b)
{
	return a + b;
}

class Ctest
{
    char name[64];
    int age;
public:
    Ctest()
    {
        cout << "构造函数被调用" << endl; 
    };
    Ctest(const Ctest& obj) 
    { 
        cout << "拷贝构造被调用" << endl; 
    };
};

void fun11(Ctest a)
{
	//return a + b;
}
void fun22(Ctest* a)
{
	//return *a + *b;
}
void fun33(Ctest& a)
{
	//return a + b;
}

int main()
{
    //Ctest c1;
    ////针对类的对象而言：
    //fun11(c1);
    ///*fun11(*c1);
    //fun11(&c1);*/
    ////形参为对象，实参为对象
    ////fun22(c1);
    ////fun22(*c1);
    //fun22(&c1);
    ////形参为类指针， 实参为地址
    //fun33(c1);
    ////fun33(*c1);
    ////fun33(&c1);
    ////形参为引用， 实参为对象

    Ctest* pc1 = new Ctest;
	//针对类的指针而言：
	//fun11(pc1);
	fun11(*pc1);
	//fun11(&pc1);
	//形参为对象，实参为指针的值
	fun22(pc1);
	//fun22(*pc1);
	//fun22(&pc1);
	//形参为类指针， 实参为指针
	//fun33(pc1);
	fun33(*pc1);
	//fun33(&pc1);
	//形参为引用， 实参为指针的值
    return 0;
}


//int main()
//{
//    std::cout << "add test!\n";
//    int a = 1, b = 2;
//    int* p, * q;
//    int c, d, e, f;
//    //针对变量而言：
//    c = fun1(a, b);
//    c = fun1(*a, *b);
//    c = fun1(&a, &b);
//    //结论1 ：形参为变量， 实参为变量
//    d = fun2(a, b);
//    d = fun2(*a, *b);
//    d = fun2(&a, &b);
//    //结论2： 形参为指针， 实参为地址
//    e = fun3(a, b);
//    e = fun3(*a, *b);
//    e = fun3(&a, &b);
//    //结论3： 形参为引用，实参为变量
//
//
//	//针对指针而言：
//	c = fun1(p, q);
//	c = fun1(*p, *q);
//	c = fun1(&p, &q);
//	//结论1 ：形参为变量， 实参为指针的值
//	d = fun2(p, q);
//	d = fun2(*p, *q);
//	d = fun2(&p, &q);
//	//结论2： 形参为指针， 实参为指针
//	e = fun3(p, q);
//	e = fun3(*p, *q);
//	e = fun3(&p, &q);
//	//结论3： 形参为引用，实参为指针的值
//
//}


/*
最后总结：
1.变量传变量
2.指针传地址
3.引用传变量
ps:&在形参是引用， 在实参为传地址
*p作为形参 是指针的值
*/