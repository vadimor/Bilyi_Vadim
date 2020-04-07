#define _CRT_SECURE_NO_WARNINGS
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include "Сlist.h"
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	//данные
	Clist list;

	if (list.sortAsc(0, 1))
	{
		cout << "\nТест 1.1 не пройден\n";
	};

	if (!list.sortAsc(1, 0)) {
		cout << "\nТест 1.1 не пройден\n";
	};
	if (list.sortAsc(1, 1))
	{
		cout << "\nТест 1.1 не пройден\n";
	};

	if (!list.sortDesc(0, 1))
	{
		cout << "\nТест 2.1 не пройден\n";
	};

	if (list.sortDesc(1, 0)) {
		cout << "\nТест 2.1 не пройден\n";
	};
	if (list.sortDesc(1, 1))
	{
		cout << "\nТест 2.1 не пройден\n";
	};
	list.addNewEl(new CcoopK);
	if (list.getSize() != 1) {
		cout << "\nТест 3.1 не пройден\n";
	}; list.addNewEl(new CcoopFamily);
	if (list.getSize() != 2) {
		cout << "\nТест 3.2 не пройден\n";
	};
	list.delEl(0);
	if (list.getSize() != 1) {
		cout << "\nТест 4 не пройден\n";
	};
	list.EndEnd();
		if (_CrtDumpMemoryLeaks())
			cout << "\nMemory leack deteckted\n";
		else
			cout << "\nMemory is not leack deteckted\n";
	
}
	