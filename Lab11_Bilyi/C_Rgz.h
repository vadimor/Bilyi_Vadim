#pragma once
#include <iostream>
#include <sstream>
using std::string;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::stringstream;
using std::getline;

class C_Rgz
{
protected:
	string object;
public:
	virtual void setObject(const string str);
	virtual string getObject() const;
	virtual string getString() const;
	virtual void input(istream& a);

	friend ostream& operator<< (ostream& output, C_Rgz& obj);

	virtual bool operator==(C_Rgz& obj);

	virtual bool operator>(C_Rgz& obj);

	virtual int getMark();

	virtual bool operator<(C_Rgz& obj);

	virtual C_Rgz& operator= (C_Rgz& temp);

	friend istream& operator>> (istream& input, C_Rgz& obj);


	C_Rgz();
	C_Rgz(string str);
	C_Rgz(C_Rgz &a);
	virtual ~C_Rgz() = default;
};
