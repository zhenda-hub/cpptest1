// demo_局部变量作用范围.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
int main1()
{
    int a = 0;
    if (!a)
    {
        int b = 1;
    } 
    //b += 1;不能在外面使用
    return 0;
}

int main2()
{
    for (int i=0; i<10; i++)
    {
        cout << "第一个循环"<< i << endl;
        int j = 5;
    }
	for (int i = 0; i < 10; i++)
	{
		cout << "第二个循环" << i << endl;
        int k = 10;
	}
    //cout << j + k << endl;{}内部定义的变量，不能识别

    return 0;
}

int main()
{
    int a = 0,b=2,c=0;
    int d = 01;
    c = (5 < 3) ? a : b;
    cout << c << endl;
    cout << d << endl;
    return 0;
}

