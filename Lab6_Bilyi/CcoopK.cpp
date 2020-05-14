#include "CcoopK.h"

void CcoopK::setmPlaiceWork(const string a)
{
	this->mPlaiceWork = a;
}

string CcoopK::getmPlaiceWork() const
{
	return this->mPlaiceWork;
}


CcoopK::CcoopK(): mPlaiceWork("Kafedra")
{

}

CcoopK::CcoopK(string a): mPlaiceWork(a)
{

}

CcoopK::CcoopK(const CcoopK& a): mPlaiceWork(a.getmPlaiceWork())
{

}

CcoopK::~CcoopK()
{

}