// 多态项目_计算机.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include "CCpu.h"
#include "CCpuIntel.h"
#include "CCpuSumsang.h"
#include "CVideoCard.h"
#include "CVideoCardIntel.h"
#include "CVideoCardSumsang.h"
#include "CMemory.h"
#include "CMemoryIntel.h"
#include "CMemorySumsang.h"
#include "CComputer.h"

int main()
{
    CCpu* p1 = new CCpuSumsang;
    CVideoCard* p2 = new CVideoCardIntel;
	CMemory* p3 = new CMemoryIntel;

    CComputer c1(p1, p2, p3);
    c1.DoWork();
    delete p1;
    delete p2;
    delete p3;

	p1 = new CCpuIntel;
	p2 = new CVideoCardSumsang;
	p3 = new CMemorySumsang;

	CComputer c2(p1, p2, p3);
	c2.DoWork();

	delete p1;
	delete p2;
	delete p3;

    return 0;
}

