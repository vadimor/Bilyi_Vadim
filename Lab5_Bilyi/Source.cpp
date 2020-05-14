#include "cooperator.h"
#include "list.h"
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
int main() {
	setlocale(LC_ALL, "rus");
	
	CList List;
	List.creatMass(0);
	List.AddWhithString();
	List.showAll();
	List.End();
	
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";
}