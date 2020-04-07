#pragma once
#include <sstream>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Cchpi.h"
#include "Cweight.h"
#include <clocale>
using namespace std;
class Ccooperator
{
protected:
	int id, age, salary;
	string name;
	Cchpi *rect;
	Cweight weight;
public:
	void setName(string name);
	void setId(const int id);
	void setAge(const int age);
	void setSalary(const int salary);
	void setRect(Cchpi* rect);
	void setWeight(Cweight w);
	int getId()const;
	int getAge()const;
	int getSalary()const;
	string getName();
	Cchpi* getRect();
	Cweight getWeight();
	Ccooperator();
	Ccooperator(int a, int b, int c, const string f, Cweight d, Cchpi* i);
	Ccooperator(const Ccooperator& a);
	~Ccooperator() {};
};
