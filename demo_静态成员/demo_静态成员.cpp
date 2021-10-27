// demo_静态成员.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;


class Application
{
public:
	static void f();
	static void g();
private:
	static int global;
};

int Application::global = 0;//外部初始化
void Application::f()
{
	global = 5;
}
void Application::g()
{
	cout << global << endl;
}

int main1()
{
	Application::f();
	Application::g();
	return 0;
}

//---------------------------------------------

class A
{
public:
	static void f(A a);
private:
	int x;
};

void A::f(A a)
{
	//cout << x;
	cout << a.x;
}

class Point
{
	int X, Y;
	static int countP;
public:
	Point(int xx = 0, int yy = 0)
	{
		X = xx;
		Y = yy;
		countP++;
	}
	Point(const Point& p)
	{
		X = p.X;
		Y = p.Y;
		countP++;
	}
	int GetX() { return X; }
	int GetY() { return Y; }
	static void GetC()
	{
		cout << "object id=" << countP << endl;
	}
};

int Point::countP = 0;

int main()
{
	Point A(4, 5);
	cout << "point A," << A.GetX() << "," << A.GetY();
	A.GetC();
	Point B(A);
	cout << "point B," << B.GetX() << "," << B.GetY();
	Point::GetC();

	return 0;
}