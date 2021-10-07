// c++ test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "MyString.h"

#include <iostream>
using namespace std;

ostream& operator<<(ostream& o, MyString s)
{
    for (int i=0; i<s.size(); i++)
    {
        cout << s[i];

    }
    return o;
}

int main()
{

    MyString str1,str2("hello world");
    str2[1] = 'E';
    
	cout << str2[1] << endl;
	cout << str2 << endl;

	MyString str3 = str2;//拷贝
	str3[4] = 'O';

    cout << str3 << endl;
	cout << str2 << endl;
}
