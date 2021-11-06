// string的拷贝构造练习.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string.h>
using namespace std;
class Mystring
{
    string m_str;
public:
    Mystring(string str="")
    {
		cout << "构造函数调用" << endl;
        m_str = str;
    };
    Mystring(const Mystring& obj)
    {
        cout << "拷贝构造函数调用" << endl;
        m_str = obj.m_str;
    };
};
int main()
{
    Mystring s1("fsfafdfdfsdas");
    Mystring s2 = s1;
    
    return 0;
}

