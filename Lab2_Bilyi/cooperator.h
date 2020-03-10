#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
class Ccooperator
{
private:
	int id, age, salary;
	const char* name;
public:
	Ccooperator();
	Ccooperator(int a, int b, int c, const char* d);
	Ccooperator(const Ccooperator& a);
	void setId(const int id);
	void setAge(const int age);
	void setSalary(const int salary);
	void setName(char*);
	const char* getName();
	int getId()const;
	int getAge()const;
	int getSalary()const;
	~Ccooperator() {};
};
