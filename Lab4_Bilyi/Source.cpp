#include "cooperator.h"
#include "list.h"
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>

using std::string;
using std::cin;
using std::cout;
using std::ifstream;
typedef double drob;
int main() {
	
	setlocale(LC_ALL, "rus");
	Ccooperator a;
	CList List;
	List.creatMass(0);
	List.AddWhithString();
	cout << List.findCooperator(20);
	List.readFromFile("File.txt");
	List.twoWorld();
	List.writeToFile("File1.txt");
	List.showAll();

	List.End();




	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";
}
