#include "cooperator.h"
#include "list.h"
#include "CcoopK.h"
#include "ListK.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>
typedef bool (Fun)(const int&, const int&);
using std::string;
using std::cin;
using std::cout;
using std::ifstream;
void menu();
int main() {
	setlocale(LC_ALL, "rus");
	{ListK a;
	a.Creatmass(0);
	CcoopK b;
	a.addNewEl(b);
	a.Delete(0);
	a.End(); }
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}

