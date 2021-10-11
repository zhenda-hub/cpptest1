#pragma once
class CAddress;

class CStudent
{
	char* m_pName;
	int m_nAge;
	float m_fScore;
public:
	CStudent(const char *pName, int nAge, float fScore);
	//friend void show(const CStudent &obj);
	void show(CAddress& obj);
	CStudent(const CStudent& obj);


};

