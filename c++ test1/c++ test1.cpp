// c++ test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "MyString.h"
#include "Cline.h"
#include "Complex.h"
#include "Person.h"
#include "CStudent.h"
#include "CAddress.h"
#include <stack>



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

int main6()
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

enum string {
	x1,
	x2,
	x3 = 10,
	x4,
	x5,
} x;


int main7()
{
    /*int* p1 = new int[10];
    int* p2 = new int[10]();
    cout << *p2 << endl;
    cout << *(p2+1) << endl;
    cout << *(p2+6) << endl;
    cout << p2 << endl;

    cout << x << endl;*/

	char str[] = "glad to test something";
	char* p = str;
	p++;
	int* p1 = reinterpret_cast<int*>(p);
	p1++;
	p = reinterpret_cast<char*>(p1);
	printf("result is %s\n", p);

    return 0;
}


int FindSubString(char* pch)
{
	int   count = 0;
	char* p1 = pch;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] - 1)
		{
			p1++;
			count++;
		}
		else {
			break;
		}
	}
	int count2 = count;
	while (*p1 != '\0')
	{
		if (*p1 == p1[1] + 1)
		{
			p1++;
			count2--;
		}
		else {
			break;
		}
	}
	if (count2 == 0)
		return(count);
	return(0);
}
void ModifyString(char* pText)
{
	char* p1 = pText;
	char* p2 = p1;
	while (*p1 != '\0')
	{
		int count = FindSubString(p1);
		if (count > 0)
		{
			*p2++ = *p1;
			sprintf_s(p2, sizeof(p2), "%i", count);
			while (*p2 != '\0')
			{
				p2++;
			}
			p1 += count + count + 1;
		}
		else {
			*p2++ = *p1++;
		}
	}
}
void exam1(void)
{
	char text[32] = "XYBCDCBABABA";
	ModifyString(text);
	printf(text);
	

}

void exam2()
{
	char buffer[6] = { 0 };
	cout << buffer << endl;
}

void example(char acWelcome[]) {
	printf("%d\n", sizeof(acWelcome));
	return;
}
void exam3() {
	char acWelcome[] = "Welcome to Huawei Test";
	example(acWelcome);

	int* p;
	char* p2;
	cout << sizeof(p) << endl;
	cout << sizeof(p2) << endl;
	return;
}


std::string solve(int M, int N) {
	// write code here
	int flag = 0;
	char ch[20]{ "0123456789ABCDEF" };
	if (M < 0) { flag = 1; M = -M; }
	stack<char> s;
	while (M) {
		s.push(ch[M % N]);
		M /= N;
	}
	std::string str = "";
	while (!s.empty()) {
		str = str + s.top();
		s.pop();
	}
	if (flag) {
		str = '-' + str;
	}
	return str;
}

int main()
{
	//exam1();
	//exam2();
	//exam3();
	std::string s1 = solve(7, 2);
	cout << s1 << endl;
	cout << 10e2 << endl;
	cout << 1.43E3 << endl;
	//cour << Infinity << endl;
	return 0;
}