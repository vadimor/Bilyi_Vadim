#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
class cooperator
{
private:
	int id, age, salary;
public:
	void setId(const int id);
	void setAge(const int age);
	void setSalary(const int salary);
	int getId()const;
	int getAge()const;
	int getSalary()const;

};
