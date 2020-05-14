#pragma once
#include "C_Rgz.h"
class C_RgzM :
	public C_Rgz
{
private:
	int mark;
public:
	void setMark(const int a);
	int getMark()const;
	virtual void input(istream& a);

	
	virtual bool operator==(C_RgzM& obj);

	virtual C_Rgz& operator= (C_RgzM& temp);

	string getString() const override;
	C_RgzM();
	C_RgzM(string str, int m);
	C_RgzM(C_RgzM& obj);
};

