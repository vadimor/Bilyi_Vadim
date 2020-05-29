#include "CcoopK.h"

void CcoopK::setmPlaceWork(const string a)
{
	this->mPlaceWork = a;
}

string CcoopK::getmPlaceWork() const
{
	return this->mPlaceWork;
}

CcoopK::CcoopK(): mPlaceWork("Kafedra")
{

}

CcoopK::CcoopK(string a): mPlaceWork(a)
{

}

CcoopK::CcoopK(const CcoopK& a): mPlaceWork(a.getmPlaceWork())
{

}
string CcoopK::getString() {
	stringstream ss;
	ss << "\nId: " << id << "\nAge: " << age << "\nSalary: " << salary << "\nName: " << name;
	ss << "\nWeight: " << weight.getWeigt() << "\nPlace work: " << mPlaceWork;
	if (rect != NULL) {
		ss << "\nName Rector: " << rect->getName() << "\nAge Rector: " << rect->getAge();
	}
	return ss.str();
}
void CcoopK::setAmountChild(const int n)
{
}
int CcoopK::getAmountChild() const
{
	return 0;
}
CcoopK::~CcoopK()
{

}