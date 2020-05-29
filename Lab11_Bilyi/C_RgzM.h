#pragma once
#include "C_Rgz.h"
class C_RgzM :
	public C_Rgz
{
private:
	int mark;
public:
	void setMark(const int a);
	int getMark()override;
	virtual void input(istream& a);

	
	virtual bool operator==(C_Rgz& obj)override;

	virtual C_Rgz& operator= (C_Rgz& temp) override;

	string getString() const override;

	//friend ostream& operator<< (ostream& output, C_RgzM& obj);

	C_RgzM();
	C_RgzM(string str, int m);
	C_RgzM(C_RgzM& obj);
};

