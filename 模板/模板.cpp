#include <string>
#include "Vector.h"

#include <iostream>
using namespace std;



struct student
{
	string strName;
	double dScore;
public:
	student(string name = "no", double score = 0)
	{
		strName = name;
		dScore = score;
	}
	student(const student& obj)
	{
		strName = obj.strName;
		dScore = obj.dScore;
		cout << "拷贝构造函数" << endl;
	}
	friend ostream& operator<<(ostream& o, student s);
};

ostream& operator<<(ostream& o, student s)
{
	cout << s.strName << ' ' << s.dScore;
	return o;
}

int main()
{
	//1
	/*Vector<string> vec;

	vec.push_back("hello");
	vec.push_back(" ");
	vec.push_back("world");

	vec.print();


	vec.push_back(" I am ");
	vec.push_back("ZZD");


	vec.print();*/



	//2
	student st1("zhang", 12.2);
	student st2 = st1;
	student st3;
	Vector<student> vecStu;
	vecStu.push_back(st3);

	/*vecStu.push_back(student ("zhang", 12.2));
	vecStu.push_back(student ("li", 72.2));
	vecStu.push_back(student ("zhao", 122.2));*/


	for (int i = 0; i < vecStu.size(); i++)
	{
		cout << vecStu[i] << endl;
	}


}


