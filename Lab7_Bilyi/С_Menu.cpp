#include "С_Menu.h"

void С_Menu::menu()
{
		int n;
		string str;
		Clist list;
		do {
			n = 0;
			std::cout << "\nВыберите желаемую опцию:" << "\n";
			std::cout << "1 - добавить элемент в список." << "\n";
			std::cout << "2 - удалить элемент из списка." << "\n";
			std::cout << "3 - показать все элементы списка." << "\n";
			std::cout << "4 - прочитать данные из файла. " << "\n";
			std::cout << "5 - записать текущий список данных в файл. " << "\n";
			std::cout << "6 - отсортировать массив." << "\n";
			std::cout << "7 - поиск елемента по id." << "\n";
			std::cout << "8 - средняя зарплата." << "\n";
			std::cout << "0 - завершить работу программы." << "\n";
			std::cin >> n;
			switch (n)
			{
			case 0:
				list.EndEnd();
				break;
			case 1:
				std::cout << "Выбирите элемент какого типа вы желаете добавить.\n1 - Элемент типа Ccoopk\n2 - Элемент типа CcoopFamily\n";
			std:cin >> n;
				if (n == 1)
					list.addWhithStr('K');
				if (n == 2)
					list.addWhithStr('F');

				break;
			case 2:
				std::cout << "\nВыбирете номер элемента, который хотите удалить: ";
				std::cin >> n;
				list.delEl(n);
				n = 20;
				break;
			case 3:
				list.showAll();
				break;
			case 4:
				std::cout << "\nВведите имя файла: ";
				std::cin >> str;
				list.readFile(str);
				break;
			case 5:
				std::cout << "\nВведите имя файла: ";
				std::cin >> str;
				list.writeToFile(str);
				break;
			case 6:
				std::cout << "\nВыбирите по какому параметру вы хотите отсортировать масив.\n1 - Id\n2 - Age\n3 - Salary\n";
				std::cin >> n;
				std::cout << "\nОтсортировать по возрастанию? (y/n)\n";
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
