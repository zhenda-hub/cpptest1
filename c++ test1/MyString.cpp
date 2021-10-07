#include "MyString.h"

#include <iostream>
using namespace std;

MyString::MyString(const char* s)
{
    if (s == 0)
    {
        this->data = 0;
        this->n = 0;
        return;
    }
    const char* p = s;
    int ncount = 0;
    while (*p)
    {
        p++;
        ncount++;
    }
    this->data = new char[ncount + 1];
    for (int i = 0; i < ncount; i++)
    {
        this->data[i] = s[i];
    }
    this->data[ncount] = '\0';
    this->n = ncount;
}

MyString::~MyString()
{
    delete[]data;
    data = nullptr;
}

/*MyString(const MyString &s)
{
    data = s.data;
    n = s.n;
    cout << "拷贝构造函数" << endl;
}*/

MyString::MyString(const MyString& s)
{
    data = new char[s.n + 1];
    n = s.n;
    for (int i = 0; i < s.n; i++)
    {
        data[i] = s.data[i];
    }
    data[n] = '\0';
    cout << "拷贝构造函数" << endl;
}

int MyString::size()
{
    return n;
}

char MyString::operator[](int i)const
{
    if (i < 0 || i >= n)
    {
        throw"下标非法";
    }
    return data[i];
}

char& MyString::operator[](int i)
{
    if (i < 0 || i >= n)
    {
        throw"下标非法";
    }
    return data[i];
}