#include "cooperator.h"
#include "list.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	list a1;
	cooperator a2;
	a2.setId(111);
	a2.setAge(19);
	a2.setSalary(15000);
	a1.creatMass(2);
	//a1.showAll();
	a1.Add(a2);
	//a1.showAll();
	a1.Delete(2);
	//a1.showAll();
	a1.findCooperator(111);
	a1.End();
	if (_CrtDumpMemoryLeaks())
		printf("\nMemory leack deteckted\n");
	else
		printf("\nMemory is not leack deteckted\n");
}
