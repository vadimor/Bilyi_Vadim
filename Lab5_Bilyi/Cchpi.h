
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
class Cchpi
{
private:
	std::string nameRect;
	int sizeList;
	std::string* List;
public:
	std::string getName()const;
	void setName(std::string name);
	void creatList(int num);
	void setMass(int n, std::string);
	std::string getElMass(int n)const;
	Cchpi();
	Cchpi(std::string nameRect1);
	Cchpi(const Cchpi& temp);
	~Cchpi();
};



