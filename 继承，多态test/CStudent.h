#pragma once
#include "CPeople.h"
class CStudent :
    public CPeople
{
    int m_iStuNum;
public:
    CStudent(const char* name, int age, int stunum);
    void show();
};

