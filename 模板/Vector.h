#pragma once
#include <iostream>
using namespace std;
template <typename T> //ģ����

class Vector
{
	T* data;
	int capacity;
	int n;

public:
	Vector(int cap = 3)
	{
		data = new T[cap];//new��ҪĬ�Ϲ��캯��
		if (data == nullptr)
		{
			throw "new NG";
			return;
		}
		capacity = cap;
		n = 0;
	}

	~Vector()
	{
		if (data)
		{
			delete[] data;
			data = nullptr;
		}

	}

	void print()
	{
		for (int i = 0; i < n; i++)
		{
			cout << data[i];
		}
		cout << endl;
	}

	void push_back(T e)
	{
		if (n == capacity)//�ռ�����
		{
			cout << "��������" << endl;
			T* p = new T[2 * capacity];
			if (p)
			{
				for (int i = 0; i < n; i++)
				{
					p[i] = data[i];
				}
				delete[] data;
				data = p;
				capacity *= 2;
			}
			else
			{
				throw "new NG";
				return;
			}


		}
		data[n] = e;
		n++;
	}

	int size()
	{
		return n;
	}

	void clear()
	{
		delete[] data;
		capacity = 0;
		n = 0;
	}

	T operator[] (int i) const
	{
		if (i < 0 || n <= i)
		{
			throw"�±�Ƿ�";
		}
		else
		{
			return data[i];

		}
	}

	T& operator[] (int i)
	{
		if (i < 0 || n <= i)
		{
			throw"�±�Ƿ�";
		}
		else
		{
			return data[i];

		}
	}

};

