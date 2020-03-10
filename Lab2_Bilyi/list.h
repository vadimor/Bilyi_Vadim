#pragma once
#include "cooperator.h"
class CList {
private:
	int amount;
	Ccooperator* fEl;
	Ccooperator* fEl1;
public:
	int averageSalary();
	void creatMass(int a);
	Ccooperator creatEl1();
	Ccooperator creatEl2();
	void Add(Ccooperator);
	void Delete(int b);
	Ccooperator getCooperator(int a);
	void showAll();
	int getAmount();
	void End();
};
