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
	void setId(int id);
	void setAge(int age);
	void setSalary(int salary);
	int getId()const;
	int getAge()const;
	int getSalary()const;
};
class list {
private:
	int amount;
	cooperator* fEl;
	cooperator* fEl1;
public:
	void creatMass();
	cooperator creatEl1();
	cooperator creatEl2();
	void Add();
	void Delete();
	void getCooperator(int a);
	void showAll();
	void End();
};