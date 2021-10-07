#pragma once
class MyString
{
    
    char* data;
    int n;
public:
    MyString(const char* s = 0);

    ~MyString();

    /*MyString(const MyString &s)
    {
        data = s.data;
        n = s.n;
        cout << "¿½±´¹¹Ôìº¯Êý" << endl;
    }*/

    MyString(const MyString& s);

    int size();

    char operator[](int i)const;

    char& operator[](int i);

    
};


