#pragma once
#include "cooperator.h"
class list {
private:
	int amount;
	cooperator* fEl;
	cooperator* fEl1;
public:
	void creatMass(int a);
	cooperator creatEl1();
	cooperator creatEl2();
	void Add(cooperator);
	void Delete(int );
	cooperator getCooperator(int a);
	void showAll();
	cooperator findCooperator(const int a);
	int getAmount();
	void End();
};
