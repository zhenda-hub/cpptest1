// c++ test1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <string>
using namespace std;

class String
{
    char* data;
    int n;
public:
    String(const char* s = 0)
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
        this->data = new char[ncount+1];
        for (int i=0; i<ncount; i++)
        {
            this->data[i] = s[i];
        }
        this->data[ncount] = '\0';
        this->n = ncount;
    }

    ~String() 
    {
        delete[]data;
        data = nullptr;
    }

    /*String(const String &s)
    {
        data = s.data;
        n = s.n;
        cout << "拷贝构造函数" << endl;
    }*/

	String(const String& s)
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

    int size()
    {
        return n;
    }

	char operator[](int i)const
	{
		if (i<0 || i>=n)
		{
			throw"下标非法";
		}
		return data[i];
	}

	char& operator[](int i)
	{
		if (i < 0 || i >= n)
		{
			throw"下标非法";
		}
		return data[i];
	}
};

ostream& operator<<(ostream& o, String s)
{
    for (int i=0; i<s.size(); i++)
    {
        cout << s[i];

    }
    return o;
}

int main()
{
    /*std::cout << "Hello World!\n";
    cout << (int)3.14 << endl;*/

    String str1,str2("hello world");
    str2[1] = 'E';
    
    String str3 = str2;//拷贝
    str3[4] = 'O';


	cout << str2[1] << endl;
	cout << str2 << endl;
    cout << str3 << endl;
	cout << str2 << endl;


}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
