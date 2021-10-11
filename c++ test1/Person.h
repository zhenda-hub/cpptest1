#pragma once
class Person
{
	char* m_pName;
public:
	Person(const char* pN = nullptr);
	Person(const Person& obj);
	~Person();
};

