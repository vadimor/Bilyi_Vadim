#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::string;
using std::ostream;
class CMyClass
{
protected:
	int init;
public:
	virtual void setInit(const int);
	virtual int getInit() const;
	virtual bool operator==(CMyClass& obj);
	virtual bool operator>(CMyClass& obj);
	CMyClass& operator= (CMyClass& temp);
	CMyClass();
	CMyClass(int i);
	~CMyClass();
};

