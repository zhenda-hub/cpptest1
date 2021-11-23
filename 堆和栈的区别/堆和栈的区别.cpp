// 堆和栈的区别.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

#include<stdio.h>
char* myString()
{
	char buffer[6] = { 0 };
	const char* s = "Hello World!";
	for (int i = 0; i < sizeof(buffer) - 1; i++)
	{
		buffer[i] = *(s + i);
	}
	return buffer;
}
int main(int argc, char** argv)
{
	printf("%s\n", myString());
	return 0;
}