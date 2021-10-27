// c++异常处理.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <stdexcept>
#include <vector>
#include <typeinfo>//判断数据类型1
using namespace std;

struct MyException : public exception
{
    const char* what() const throw()
    {
        return "c++ Exception";
    }
};

int Chufa(int a, int b)
{
    if (b == 0)
    {
        throw "chuyi 0";

    }
    else
    { 
        return a / b;
    }
    
}

double division(int a, int b)
{
    if (b == 0)
    {
        throw "chuyi 0!!!!!!!!!!!!!!!!!!!!!";
    }
    return a / b;
}
int main1()
{
    //std::cout << "Hello World!\n";
	/*try
	{
		throw MyException();
	}
	catch (MyException& e)
	{
		std::cout << "MyException caught" << std::endl;
		cout << e.what() << endl;
	}
	catch (std::exception& e)
	{
	}*/
    cout << typeid("chuyi 0").name() << endl;//判断数据类型2
    
    try
    {
        int a = Chufa(3, 0);
        //double a = division(3, 0);
        cout << a;
    }
    catch (const std::exception& e)
    {
        cout << e.what() << endl;
    }
    catch (const char& e)
    {
        cout << e << endl;
    }
	catch (const char* e)
	{
		cout << e << endl;
	}
    catch (...)
    {
        cout << "异常" << endl;
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

int main2()
{
    cout << typeid(1.1f).name() << endl;

    class Base1 {};
    class Derive1 :public Base1 {};
    Derive1 d1;
    Base1& b1 = d1;
    cout << typeid(b1).name() << endl;

    class Base2 {
        virtual void fun() {}
    };
    class Derive2 :public Base2 {};
    Derive2 d2;
    Base2& b2 = d2;
    cout << typeid(b2).name() << endl;

    class Derive22 :public Base2 {};
    Derive2* pd1 = dynamic_cast<Derive2*>(&b2);
    cout << boolalpha << (0 != pd1) << endl;
    Derive22* pd2 = dynamic_cast<Derive22*>(&b2);
    cout << boolalpha << (0 != pd2) << endl;

    try
    {
        Derive2& rb1 = dynamic_cast<Derive2&>(b2);
        cout << "true" << endl;
    }
    catch (bad_cast)
    {
        cout << "false" << endl;
    }

    try
    {
        Derive22& rb2 = dynamic_cast<Derive22&>(b2);
        cout << "true" << endl;
    }
    catch (...)
    {
		cout << "false" << endl;

    }



    return 0;
}

int main3()
{
	double m, n;
	cin >> m >> n;
	try {
		cout << "before dividing." << endl;
		if (n == 0)
			throw - 1;  //抛出整型异常
		else if (m == 0)
			throw - 1.0;  //拋出 double 型异常
		else
			cout << m / n << endl;
		cout << "after dividing." << endl;
	}
	catch (double d) {
		cout << "catch (double)" << d << endl;
	}
	catch (...) {
		cout << "catch (...)" << endl;
	}
	cout << "finished" << endl;
	return 0;
}

class CException
{
public:
	string msg;
	CException(string s) : msg(s) {}
};
double Devide(double x, double y)
{
	if (y == 0)
		throw CException("devided by zero");
	cout << "in Devide" << endl;
	return x / y;
}
//int CountTax(int salary)
//{
//	try {
//		if (salary < 0)
//			throw - 1;
//		cout << "counting tax" << endl;
//	}
//	catch (int) {
//		cout << "salary < 0" << endl;
//	}
//	cout << "tax counted" << endl;
//	return salary * 0.15;
//}
int main4()
{
	double f = 1.2;
	try {
		//CountTax(-1);
		f = Devide(3, 0);
		cout << "end of try block" << endl;
	}
	catch (CException e) {
		cout << e.msg << endl;
	}
	cout << "f = " << f << endl;
	cout << "finished" << endl;
	return 0;
}

int CountTax(int salary)
{
	try {
		if (salary < 0)
			throw string("zero salary");
		cout << "counting tax" << endl;
	}
	catch (string s) {
		cout << "CountTax error : " << s << endl;
		//throw; //继续抛出捕获的异常
	}
	cout << "tax counted" << endl;
	return salary * 0.15;
}
int main5()
{
	double f = 1.2;
	try {
		CountTax(-1);
		cout << "end of try block" << endl;
	}
	catch (string s) {
		cout << s << endl;
	}
	cout << "finished" << endl;
	return 0;
}


int main()
{
	vector<int> v(10);
	try
	{
		v.at(100) = 100;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	string s = "hello";
	try
	{
		char c = s.at(100);
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
	
	return 0;
}