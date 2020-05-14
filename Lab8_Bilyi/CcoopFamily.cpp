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

void CcoopFamily::input(istream& input)
{
	string str;
	int init, init1;

	input >> id >> age >> salary >> name >> str >> init >> init1 >> amountChild;
	if (rect) {
		rect->setName(str);
		rect->setAge(init);
	}
	weight.setWeigt(init1);
}

CcoopFamily& CcoopFamily::operator=(CcoopFamily& temp)
{
	id = temp.getId();
	age = temp.getAge();
	salary = temp.getSalary();
	name = temp.getName();
	rect = temp.getRect();
	weight = temp.getWeight();
	amountChild = temp.getAmountChild();
	return *this;
}

bool CcoopFamily::operator==(CcoopFamily& obj)
{
	
	return this->getString() == obj.getString();

}

