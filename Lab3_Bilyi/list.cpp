#include "list.h"
#include <sstream>
#include <iostream>
#include <fstream> 

void CList::creatMass(int a)
{
	amount = a;
	//printf("������� ���������� ��������� ");
	//scanf("%i", &amount);
	fEl = new Ccooperator[amount];
	//int a;
	//printf("\n�������� ������� �������� ���������\n1. C������ ������� �������\n2. ������� �������\n��� �����: ");
	//scanf("%i", &a);
	//if (a == 1)
	//for (int i = 0; i < amount; i++) {
		//fEl[i] = creatEl1();
	//}
	//if (a == 2)
	for (int i = 0; i < amount; i++) {
		fEl[i] = creatEl2();
	}
}
string CList::findCooperator(const int a) {
	std::stringstream ss;
	string ab;
	ss << " ";
	int b = -1, count = 0;
	for (int i = 0; i < amount; i++) {
		if (a == fEl[i].getId()) {
			count++;
			b = i;
		}
	}
	if (count >= 1) {
		cout << "���� " << count << " ������� ���������, ����� ��������� ��������� �������";
		ss << "\nId: " << fEl[b].getId() << "\nAge:" << fEl[b].getAge() << "\nSalary: " << fEl[b].getSalary() << "\nName " << fEl[b].getName();
		ab = ss.str();
		return ab;
	}
	if (count == 0) {
		cout << "������� ��������� ���, ��������� ������ ������";
		return ab;
	}
}
/*Ccooperator CList::creatEl1() {
	Ccooperator El;
	int a;
	printf("������� id ����������: ");
	scanf("%i", &a);
	El.setId(a);
	printf("������� �������� ����������: ");
	scanf("%i", &a);
	El.setSalary(a);
	printf("������� ������� ����������: ");
	scanf("%i", &a);
	El.setAge(a);
	return El;
}*/
int CList::averageSalary() {
	int averageSalary = 0;
	for (int i = 0; i < amount; i++)
	{
		averageSalary = averageSalary + fEl[i].getSalary();
	}
	return averageSalary = averageSalary / amount;

};
Ccooperator CList::creatEl2() {
	Ccooperator El;
	El.setId(0);
	El.setSalary(0);
	El.setAge(0);
	return El;
}
void CList::readFromFile(string fileName) {
	End();
	creatMass(0);
	int a, b, c;
	string d;
	Ccooperator temp;
	ifstream file;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " ���� �� ������, ����� �� ����� ����\n";
		return;
	}
	while (!file.eof()) {
		file >> a >> b >> c >> d;
		temp.setId(a);
		temp.setAge(b);
		temp.setSalary(c);
		temp.setName(d);
		Add(temp);
	}
	file.close();
}
void CList::writeToFile(string fileName) {
	ofstream file;
	string str1;
	std::stringstream ss;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " ���� �� ������, ����� �� ����� ����\n";
		return;
	}
	for (int i = 0; i < amount; i++) {
		file << fEl[i].getId() << " " << fEl[i].getAge() << " " << fEl[i].getSalary() << " " << fEl[i].getName() << "\n";
	}

	file.close();
}
void CList::AddWhithString() {
	Ccooperator temp;
	std::stringstream ss1, ss2, ss3, ss4;
	fEl1 = new Ccooperator[amount + 1];
	for (int i = 0; i < amount; i++) {
		fEl1[i] = fEl[i];
	}

	std::cout << "\n������� ������ � ���������� � ����� �������: id, age, salary, name\n";
	string tid = " ", tage = " ", tsalary = " ", tname = " ";
	int tid1, tage1, tsalary1;
	string tname1 = " ";
	cin >> tid >> tage >> tsalary >> tname;
	ss1 << tid;
	ss1 >> tid1;
	ss2 << tage;
	ss2 >> tage1;
	ss3 << tsalary;
	ss3 >> tsalary1;
	ss4 << tname;
	ss4 >> tname1;
	temp.setId(tid1);
	temp.setSalary(tsalary1);
	temp.setAge(tage1);
	temp.setName(tname1);

	fEl1[amount] = temp;
	delete[] fEl;
	amount++;
	fEl = new Ccooperator[amount];
	for (int i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
void CList::Add(Ccooperator El1) {
	fEl1 = new Ccooperator[amount + 1];
	for (int i = 0; i < amount; i++) {
		fEl1[i] = fEl[i];
	}
	fEl1[amount] = El1;
	delete[] fEl;
	amount++;
	fEl = new Ccooperator[amount];
	for (int i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
int CList::getAmount() {
	return amount;
}
void CList::Delete(int a) {
	Ccooperator* fEl1 = new Ccooperator[amount - 1];
	for (int i = 0; i < a - 1; i++) {
		fEl1[i] = fEl[i];
	}
	for (int i = a - 1, j = a; j < amount; i++, j++) {
		fEl1[i] = fEl[j];
	}
	delete[] fEl;
	amount--;
	fEl = new Ccooperator[amount];
	for (int i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
Ccooperator CList::getCooperator(const int a) {
	return fEl[a];
}
void CList::showAll() {
	for (int i = 0; i < amount; i++) {
		cout << "ID:" << getCooperator(i).getId() << "\n Age: " << getCooperator(i).getAge() << "\n Salary: " << getCooperator(i).getSalary() << "\n Name: " << getCooperator(i).getName();
	}
}
void CList::End() {
	delete[] fEl;
}