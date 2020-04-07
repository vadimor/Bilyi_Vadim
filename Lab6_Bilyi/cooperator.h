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
	Cchpi kaf;
	Cweight weight;
public:
	virtual void setName(string name);
	void setId(const int id);
	void setAge(const int age);
	void setSalary(const int salary);
	void setKaf(const string kaf);
	void setWeight(const int w);
	virtual string getName();
	int getId()const;
	int getAge()const;
	int getSalary()const;
	string getKaf();
	int getWeight();
	Ccooperator();
	Ccooperator(int a, int b, int c, int d, const string i, const string f);
	Ccooperator(const Ccooperator& a);
	~Ccooperator() {};
};
