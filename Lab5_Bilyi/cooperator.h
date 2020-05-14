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
private:

	int id, age, salary;
	string name;
	Cchpi* kaf;
	Cweight weight;
	
public:
	void setName(string name);
	void setId(const int id);
	void setAge(const int age);
	void setSalary(const int salary);
	void setKaf(Cchpi* kaff);
	void setWeight(const int w);
	string getName();
	int getId()const;
	int getAge()const;
	int getSalary()const;
	string getKaf();
	Cchpi* getAdresKaf();
	int getWeight();
	Ccooperator();
	Ccooperator(int a, int b, int c, int d, Cchpi* i, const string f);
	Ccooperator(const Ccooperator& a);
	~Ccooperator() {};
};
