#define _CRT_SECURE_NO_WARNINGS
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include "Сlist.h"
#include "С_Menu.h"
#include <iostream>
#include <clocale>
#include <sstream>
#include <iostream>
typedef bool (Fun)(const int&, const int&);
/*!

	\author Bilyi Vadim
	\version 1.0
	\date 05.04.2020
	\warning Когда я начал писать программу только бог и я понимал как она работает, сейчас только бог понимает(РЕГУЛЯРНЫЕ ВЫРАЖЕНИЯ). Шутка.
	*/
int main() {
	setlocale(LC_ALL, "rus");
	С_Menu m;
	m.menu();
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}

