#include "CcoopFamily.h"


void CcoopFamily::setAmountChild(const int n)
{
	this->amountChild = n;
}

int CcoopFamily::getAmountChild() const
{
	return this->amountChild;
}

void CcoopFamily::setmPlaceWork(const string a)
{
}

string CcoopFamily::getmPlaceWork() const
{
	return string();
}

string CcoopFamily::getString()
{
	stringstream ss;
	ss << "\nId: " << id <<"\nAge: "<< age <<"\nSalary: "<< salary <<"\nName: "<< name;
	ss << "\nWeight: " << weight.getWeigt()<< "\nAmount child: "<< amountChild;
	if (rect != NULL) {
		ss << "\nName Rector: " << rect->getName() << "\nAge Rector: " << rect->getAge();
	}
	return ss.str();
}

CcoopFamily::CcoopFamily(): amountChild(0)
{
}

CcoopFamily::CcoopFamily(int amount): amountChild(0)
{
}

CcoopFamily::CcoopFamily(const CcoopFamily& temp): amountChild(temp.amountChild)
{
}

CcoopFamily::~CcoopFamily()
{
}
