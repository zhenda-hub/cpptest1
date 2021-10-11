// c++ test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "MyString.h"
#include "Cline.h"
#include "Complex.h"
#include "Person.h"
#include "CStudent.h"
#include "CAddress.h"




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

int main1()
{

    MyString str1,str2("hello world");
    str2[1] = 'E';
    
	cout << str2[1] << endl;
	cout << str2 << endl;

	MyString str3 = str2;//拷贝
	str3[4] = 'O';

    cout << str3 << endl;
	cout << str2 << endl;

    return 0;
}

void display(Cline obj)
{
	cout << "line大小是" << obj.getlength() << endl;
}

int main2()
{
    Cline l1(10);
    Cline l2 = l1;

    display(l1);
	display(l2);

    return 0;
}
void main3()
{
	Complex c1, c2;
	Complex c3(1.0, 2.5);
	Complex c4 = Complex(1.0, 2.0);
	c1 = c3;
	c2 = 5.2;

	Complex c5(c2);
	Complex c6 = c2;

}

Complex test1(const Complex& c)
{
    cout << "test1 end" << endl;
    return c;
}
Complex test2(const Complex c)
{
	cout << "test2 end" << endl;

	return c;
}
Complex test3()
{
    static Complex c(1.0, 5.0);
	cout << "test3 end" << endl;

	return c;
}
Complex& test4()//return 不用拷贝析构
{
    static Complex c(1.0, 5.0);
	cout << "test4 end" << endl;

	return c;
}

int main4()
{
    Complex a, b;
    test1(a);
    test2(a);//两次拷贝析构

    b = test3();
	b = test4();

    test2(1.2);
    test1(1.2);
    test1(Complex(1.2));
    return 0;
}

int main5()
{
    //char* pName = "zzd";
    Person man("zzd");
    Person woman(man);

    return 0;
}

//void show(const CStudent& obj)
//{
//    cout << obj.m_pName << "年龄是" << obj.m_nAge << "成绩是" << obj.m_fScore << endl;
//}

int main()
{
	 //char* ptest = "zzd";

    CStudent stu("zzd", 24, 100);
    //show(stu);
    CAddress add1("山西", "临汾", "古县");
    stu.show(add1);

    CStudent* pstu = new CStudent("李磊", 35, 60);
    CAddress* padd = new CAddress("河北", "衡水", "桃城");
    pstu->show(*padd);
    //show(*pstu);
    return 0;
 }