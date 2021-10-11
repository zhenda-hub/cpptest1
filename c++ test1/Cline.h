#pragma once
class Cline
{
	int* ptr;
public:
	int getlength();
	Cline(int len);
	Cline(const Cline& obj);
	~Cline();
};

