// demo_const练习.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
/*
常引用：const 类型说明符& 引用名
常数组：const 数组名【大小】
*/

#include <iostream>
using namespace std;
class R
{
    int R1, R2;
public:
    R(int r1, int r2)
    {
        R1 = r1;
        R2 = r2;
    }
    void print();
    void print() const;//函数重载

};

void R::print()
{
    cout << R1 << ":" << R2 << endl;
}

void R::print() const
{
	cout << R1 << ":" << R2 << endl;
}
//----------------------------------------------------
class A
{
    const int a;
    static const int b;//静态常数据成员
public:
    A(int i):a(i), r(a)
    {

    }
    void print()
    {
        cout << a << ":" << b << ":" << r << endl;
    }
    const int& r;//常引用
};
const int A::b = 10;
//----------------------------------------------------
int main()
{
    R a(5, 4);
    a.print();
    const R b(20, 52);
    b.print();
    //-------------------------------------
    A a1(100), a2(0);
    a1.print();
    a2.print();
    //-------------------------------------

    return 0;
}

