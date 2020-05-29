#include "C_Rgz.h"

void C_Rgz::setObject(const string str)
{
	object = str;
}

string C_Rgz::getObject() const
{
	return object;
}

string C_Rgz::getString() const
{
	return object;
}

void C_Rgz::input(istream& a)
{
	a >> object;
}



bool C_Rgz::operator==(C_Rgz& obj)
{
	return getString() == obj.getString();

}

bool C_Rgz::operator>(C_Rgz& obj)
{
	return getString()>obj.getString();
}

int C_Rgz::getMark()
{
	return 0;
}

bool C_Rgz::operator<(C_Rgz& obj)
{
	return getString() < obj.getString();
}

C_Rgz& C_Rgz::operator=(C_Rgz& temp)
{
	object = temp.getObject();
	return *this;
}

C_Rgz::C_Rgz():object("Nothing")
{

}

C_Rgz::C_Rgz(string str):object(str)
{
}

C_Rgz::C_Rgz(C_Rgz& a):object(a.getObject())
{
}

ostream& operator<<(ostream& output, C_Rgz& obj)
{
	output << obj.getString();
	return output;
}

istream& operator>>(istream& input, C_Rgz& obj)
{
	obj.input(input);
	return input;
}
