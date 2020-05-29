#include "C_RgzM.h"

void C_RgzM::setMark(const int a)
{
	mark = a;
}

int C_RgzM::getMark()
{
	return mark;
}

void C_RgzM::input(istream& a)
{
	a >> object >> mark;
}

bool C_RgzM::operator==(C_Rgz& obj)
{
	return getString()==obj.getString();
}

C_Rgz& C_RgzM::operator=(C_Rgz& temp)
{
	object = temp.getObject();
	mark = temp.getMark();
	return *this;
}

/*C_Rgz& C_RgzM::operator=(C_RgzM& temp)
{
	object = temp.getObject();
	mark = temp.getMark();
	return *this;
}*/

string C_RgzM::getString()const
{
	stringstream ss;
	ss << object << " " << mark;
	string a;
	a = ss.str();
	a = " " + ss.str();
	return a;
}

C_RgzM::C_RgzM():mark(0)
{
	setObject("Nothing");
}

C_RgzM::C_RgzM(string str, int m):mark(m)
{
	setObject(str);
}

C_RgzM::C_RgzM(C_RgzM& obj):mark(obj.getMark())
{
	setObject(obj.getObject());
}

/*ostream& operator<<(ostream& output, C_RgzM& obj)
{
	output << obj.getString();
	return output;
}*/
