#pragma once
#include "cooperator.h"
#include <regex>
typedef bool (Fun)(const int&,const int &);
class CList {
private:
	int amount;
	Ccooperator* fEl;
	Ccooperator* fEl1;
public:
	static bool sortAsc(const int& a, const int& b);
	static bool sortDesc(const int& a, const int& b);
	void Sort(string sprz, Fun s);
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
