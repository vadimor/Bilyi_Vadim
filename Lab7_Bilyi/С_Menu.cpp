#include "�_Menu.h"

void �_Menu::menu()
{
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
			std::cout << "7 - ����� �������� �� id." << "\n";
			std::cout << "8 - ������� ��������." << "\n";
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
			case 7:
				list.screachEl();
				break;
			case 8:
				list.sredSal();
				break;
			default:
				break;
			}
		} while (n != 0);

	
}
