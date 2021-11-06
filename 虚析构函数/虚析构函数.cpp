// 虚析构函数.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
class CAnimal
{

public:
    CAnimal() { cout << "animal构造" << endl; };
    virtual ~CAnimal() { cout << "animal析构" << endl; };
};

class Cat :public CAnimal
{

public:
    Cat() { cout << "cat构造" << endl; };
    virtual ~Cat() { cout << "cat析构" << endl; };
};

int main()
{
    CAnimal* pAnimal = new Cat;
    delete pAnimal;
    return 0;
}

/*
总结：
使用多态时：
1. 当析构函数不是虚函数， 仅析构基类对象
2. 当析构函数是虚函数， 完美析构所有对象
*/
