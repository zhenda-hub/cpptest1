// 字符串转义练习.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

int main()
{   //文件路径处理方法
    string s = "E:/ME/2. test/网上资源/mfc学生管理系统";//方法1 用'/'替换'\'
    string s1 = R"(E:\ME\2. test\网上资源\mfc学生管理系统)";//方法2 R"()"
    cout << s << endl;
    cout << s1 << endl;
    return 0;
}

