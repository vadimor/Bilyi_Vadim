#define _CRT_SECURE_NO_WARNINGS
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include "�list.h"
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>
int main() {
	setlocale(LC_ALL, "rus");
	//������
	Clist list;

	if (list.sortAsc(0, 1))
	{
		cout << "\n���� 1.1 �� �������\n";
	};

	if (!list.sortAsc(1, 0)) {
		cout << "\n���� 1.1 �� �������\n";
	};
	if (list.sortAsc(1, 1))
	{
		cout << "\n���� 1.1 �� �������\n";
	};

	if (!list.sortDesc(0, 1))
	{
		cout << "\n���� 2.1 �� �������\n";
	};

	if (list.sortDesc(1, 0)) {
		cout << "\n���� 2.1 �� �������\n";
	};
	if (list.sortDesc(1, 1))
	{
		cout << "\n���� 2.1 �� �������\n";
	};
	list.addNewEl(new CcoopK);
	if (list.getSize() != 1) {
		cout << "\n���� 3.1 �� �������\n";
	}; list.addNewEl(new CcoopFamily);
	if (list.getSize() != 2) {
		cout << "\n���� 3.2 �� �������\n";
	};
	list.delEl(0);
	if (list.getSize() != 1) {
		cout << "\n���� 4 �� �������\n";
	};
	list.EndEnd();
		if (_CrtDumpMemoryLeaks())
			cout << "\nMemory leack deteckted\n";
		else
			cout << "\nMemory is not leack deteckted\n";
	
}
	