#include "cooperator.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	list a1;
	a1.creatMass();
	a1.showAll();
	a1.Add();
	a1.showAll();
	a1.Delete();
	a1.showAll();
	a1.End();
}
