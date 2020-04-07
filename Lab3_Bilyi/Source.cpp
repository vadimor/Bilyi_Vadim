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
int main() {
	setlocale(LC_ALL, "rus");
	{Ccooperator a;
	/*CList List;
	List.creatMass(0);
	List.AddWhithString();
	cout << List.findCooperator(20);
	List.readFromFile("File.txt");
	List.writeToFile("File1.txt");
	List.showAll();

	List.End();*/


	/*
	CList List1;
	Ccooperator Obj2;
	Ccooperator Obj3;
	Ccooperator Obj4;
	Ccooperator Obj5;
	printf("ID: %i\n Age: %i\n Salary: %i\n Name: %s\n", Obj2.getId(), Obj2.getAge(), Obj2.getSalary(), Obj2.getName());
	Obj3.setId(1);
	Obj3.setAge(19);
	Obj3.setSalary(1000);
	Obj4.setId(2);
	Obj4.setAge(28);
	Obj4.setSalary(500);
	Obj5.setId(3);
	Obj5.setAge(24);
	Obj5.setSalary(2000);
	List1.creatMass(0);
	List1.Add(Obj3);
	List1.Add(Obj4);
	List1.Add(Obj5);
	List1.showAll();
	printf("—редн€€ зарплата %i\n", List1.averageSalary());
	List1.End();
	Ccooperator testCop = Obj5;
	printf("ID: %i\n Age: %i\n Salary: %i\n Name: %s\n", testCop.getId(), testCop.getAge(), testCop.getSalary(), testCop.getName());
	*/
	}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";
}
