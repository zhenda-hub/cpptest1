// 运算符重载test.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

class CScore
{
    int m_math, m_cpp;
public:
    CScore(int r = 0, int l = 0) 
    {
        cout << "构造函数" << endl; 
        m_math = r;
        m_cpp = l;
    }
    CScore(const CScore& obj)
    { 
        cout << "拷贝构造函数" << endl; 
		m_math = obj.m_math;
		m_cpp = obj.m_cpp;
    }
    CScore operator + (const CScore& obj)
    {
        cout << "+函数" << endl;
        return CScore(m_math + obj.m_math, m_cpp + obj.m_cpp);
    }
    void show()
    {
        cout << "数学成绩为" << m_math << "cpp成绩为" << m_cpp << endl;
    }
};
int main()
{
    CScore c1(3, 4), c2(4,5), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}

