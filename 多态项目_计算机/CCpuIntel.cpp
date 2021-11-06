#include "CCpuIntel.h"
#include <iostream>
using namespace std;


void CCpuIntel::DoCalc()
{
	cout << "英特尔cpu开始工作" << endl;
}

CCpuIntel::~CCpuIntel()
{
	cout << "英特尔cpu析构" << endl;

}

CCpuIntel::CCpuIntel()
{
	cout << "英特尔cpu构造" << endl;

}

