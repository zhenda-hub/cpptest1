// demo_友元.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//尽量少用，访问私有

#include <iostream>
using namespace std;
class Point
{
    int X, Y;
public:
    Point(int xx = 0, int yy = 0)
    {
        X = xx;
        Y = yy;
    }
    int GetX() { return X; }
    int GetY() { return Y; }
    friend double Distance(Point& a, Point& b);
};

double Distance(Point& a, Point& b)
{
    double dx = (double)a.X - (double)b.X;
    double dy = (double)a.Y - (double)b.Y;
    return sqrt(dx * dx + dy * dy);
}
//-------------------------------------------------

class A
{
    
    int x;
public:
    void Display()
    {
        cout << x << endl;
    }
    friend class B;
};

class B
{
    A a;
public:
    void set(int i);
    void Display();
};

void B::set(int i)
{
    a.x = i;
}

void B::Display()
{
    a.Display();
}

//----------------------------------------------
int main()
{
    Point p1(3.0, 5.0), p2(4.0, 6.0);
    double d = Distance(p1, p2);
    cout << "两点距离是：" << d << endl;
    //------------------------------------
    B b;
    b.set(10);
    b.Display();
    //----------------------------------------
    return 0;
}

