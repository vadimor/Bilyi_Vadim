#pragma once
#include "cooperator.h"
#include "heder.h"
#include <regex>
class CList {
private:
	int amount;
	Ccooperator* fEl;
	Ccooperator* fEl1;
public:
	void twoWorld();
	int averageSalary();
	void writeToFile(string fileName);
	void readFromFile(string fileName);
	void creatMass(int a);
	//Ccooperator creatEl1();
	Ccooperator creatEl2();
	void Add(Ccooperator);
	void Delete(int b);
	void AddWhithString();
	string findCooperator(const int a);
	Ccooperator getCooperator(int a);
	void showAll();
	int getAmount();
	void End();
};
