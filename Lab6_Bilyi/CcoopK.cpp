#include "CcoopK.h"

void CcoopK::setmPlaiceWork(const string a)
{
	this->mPlaiceWork = a;
}

string CcoopK::getmPlaiceWork() const
{
	return this->mPlaiceWork;
}


string CcoopK::getString()
{
	stringstream ss;
	ss << "Id: " << id << "\nAge: " << age << "\nSalary: " << salary << "\nName: " << name;
	ss << "Weight: " << weight.getWeigt() << "Name Rector: " << rect->getName() << "Age Rector: " << rect->getAge();
	return ss.str();
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