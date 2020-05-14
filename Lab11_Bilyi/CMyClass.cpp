#include "CMyClass.h"

void CMyClass::setInit(const int n)
{
	init = n;
}

int CMyClass::getInit() const
{
	return init;
}

bool CMyClass::operator==(CMyClass& obj)
{
	return init==obj.getInit();
}

bool CMyClass::operator>(CMyClass& obj)
{
	return init>obj.getInit();
}

CMyClass& CMyClass::operator=(CMyClass& temp)
{
	init = temp.getInit();
	return *this;
}

CMyClass::CMyClass():init(0)
{
}

CMyClass::CMyClass(int i) : init(i)
{
}

CMyClass::~CMyClass()
{
}

ostream& operator<<(ostream& output, CMyClass& obj)
{
	output << obj.getInit();
	return output;
}

istream& operator>>(istream& input, CMyClass& obj)
{
	int i = -1;
	input >> i;
	obj.setInit(i);
	return input;
}
