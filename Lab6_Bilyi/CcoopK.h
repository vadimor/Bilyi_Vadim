#pragma once
#include "cooperator.h"
class CcoopK :
	public Ccooperator
{
private: 
	string mPlaiceWork;
public:
	void setmPlaiceWork(const string a);
	string getmPlaiceWork()const;
	CcoopK();
	CcoopK(string a);
	CcoopK(const CcoopK &a);
	~CcoopK();
};

