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

void CcoopK::input(istream& input)
{
	string str;
	int init, init1;

	input >> id >> age >> salary >> name >> str >> init >> init1 >> mPlaceWork;
	if (rect) {
		rect->setName(str);
		rect->setAge(init);
	}
	weight.setWeigt(init1);
}

CcoopK& CcoopK::operator=(CcoopK& temp)
{
	id = temp.getId();
	age = temp.getAge();
	salary = temp.getSalary();
	name = temp.getName();
	rect = temp.getRect();
	weight = temp.getWeight();
	mPlaceWork = temp.getmPlaceWork();
	return *this;
}

bool CcoopK::operator==(CcoopK& obj)
{
	return this->getString() == obj.getString();
}
