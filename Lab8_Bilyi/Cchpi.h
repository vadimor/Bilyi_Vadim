/*!
	\brief ������ ����� ��������� ����� ����� Ccooperator
	������������� ���������

*/
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class Cchpi
{
private:
	std::string nameRect;
	int ageRect;
public:
	std::string getName()const;
	int getAge() const;
	void setName(std::string name);
	void setAge(int age);
	Cchpi();
	Cchpi(std::string name, int age);
	Cchpi(const Cchpi& temp);
	~Cchpi();
};



