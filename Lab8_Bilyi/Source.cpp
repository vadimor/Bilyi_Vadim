#define _CRT_SECURE_NO_WARNINGS
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include "�list.h"
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
void menu();
int main() {
	setlocale(LC_ALL, "rus");
	//menu();
	
	{	CcoopK a;
	CcoopK b;
	Cchpi* c = new Cchpi;
	a.setRect(c);
	cin >> a;
	if (a == b) {

	}
	else {
		b = a;
	};
	cout << b;
	Clist list;
	cin >> list;
	cout << list;
	/*ifstream file;
	file.open("File.txt");
	if (!file.is_open())
	{
		cout << " ���� �� ������, ����� �� ����� ����\n";
		return 0;
	}
	file >> list;
	cout << list;
	file >> list;
	file >> list;
	file >> list;
	cout << list;
	*/
	list.EndEnd();

}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";


}
/*!
	\brief ������ ������� �������� ���� ��� ������ � ������ Clist

*/
void menu() {
	int n;
	string str;
	Clist list;
	do {
		n = 0;
		std::cout << "\n�������� �������� �����:" << "\n";
		std::cout << "1 - �������� ������� � ������." << "\n";
		std::cout << "2 - ������� ������� �� ������." << "\n";
		std::cout << "3 - �������� ��� �������� ������." << "\n";
		std::cout << "4 - ��������� ������ �� �����. " << "\n";
		std::cout << "5 - �������� ������� ������ ������ � ����. " << "\n";
		std::cout << "6 - ������������� ������." << "\n";
		std::cout << "0 - ��������� ������ ���������." << "\n";
		std::cin >> n;

		switch (n)
		{
		case 0: 
			list.EndEnd();
			break;
		case 1:
		std::cout << "�������� ������� ������ ���� �� ������� ��������.\n1 - ������� ���� Ccoopk\n2 - ������� ���� CcoopFamily\n";
	std:cin >> n;
		if (n == 1)
			list.addWhithStr('K');
		if (n == 2)
		list.addWhithStr('F');
			
				break;
		case 2:
			std::cout << "\n�������� ����� ��������, ������� ������ �������: ";
			std::cin >> n;
			list.delEl(n);
			n = 20;
			break;
		case 3:
			list.showAll();
			break;
		case 4:
		std::cout << "\n������� ��� �����: ";
		std::cin >> str;
		list.readFile(str);
			break;
		case 5:
		std::cout << "\n������� ��� �����: ";
		std::cin >> str;
		list.writeToFile(str);
			break;
		case 6:
		std::cout << "\n�������� �� ������ ��������� �� ������ ������������� �����.\n1 - Id\n2 - Age\n3 - Salary\n";
	std::cin >> n;
		std::cout << "\n������������� �� �����������? (y/n)\n";
	std::cin >> str;
		if (n == 1 && str == "y")
			list.sortMass("id", list.sortAsc);
		if (n == 2 && str == "y")
			list.sortMass("age", list.sortAsc);
		if (n == 3 && str == "y")
			list.sortMass("salary", list.sortAsc);
		if (n == 1 && str == "n")
			list.sortMass("id", list.sortDesc);
		if (n == 2 && str == "n")
			list.sortMass("age", list.sortDesc);
		if (n == 3 && str == "n")
			list.sortMass("salary", list.sortDesc);
			break;
		default:
			break;
		}
	} while (n!=0);
	
}