#define _CRT_SECURE_NO_WARNINGS
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include "�list.h"
#include "�_Menu.h"
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>
typedef bool (Fun)(const int&, const int&);
/*!

	\author Bilyi Vadim
	\version 1.0
	\date 05.04.2020
	\warning ����� � ����� ������ ��������� ������ ��� � � ������� ��� ��� ��������, ������ ������ ��� ��������(���������� ���������). �����.
	*/
int main() {
	setlocale(LC_ALL, "rus");
	�_Menu m;
	m.menu();
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}

