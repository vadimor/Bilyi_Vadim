#include "list.h"
#include <sstream>
#include <iostream>
#include <fstream> 

void CList::creatMass(int a)
{
	amount = a;
	//printf("Введите количество елементов ");
	//scanf("%i", &amount);
	fEl = new Ccooperator[amount];
	//int a;
	//printf("\nВыбирите вариант создания елементов\n1. Cоздать елемент вручную\n2. Готовый елемент\nВаш выбор: ");
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
		cout << "Есть " << count << " похожих елементов, будет возвращен последний элемент";
		ss << "\nId: " << fEl[b].getId() << "\nAge:" << fEl[b].getAge() << "\nSalary: " << fEl[b].getSalary() << "\nName " << fEl[b].getName();
		ab = ss.str();
		return ab;
	}
	if (count == 0) {
		cout << "Похожих елементов нет, возвращен пустой символ";
		return ab;
	}
}
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
	int integer;
	string line;
	string str;
	string tstr="";
	Ccooperator temp;
	ifstream file;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " Файл не открыт, давай по новой Миша\n";
		return;
	}
	std::regex regular_main(
	"([0-9]*[ \\f\\n\\r\\t\\v]{1})"
	"([0-9]*[ \\f\\n\\r\\t\\v]{1})"
	"([0-9]*[ \\f\\n\\r\\t\\v]{1})"
	"([A-Z А-Я]{1}[A-Z А-Я a-z а-я 0-9]*[\.\,\;\:\-]{0,1})"
	"([ \\f\\n\\r\\t\\v]{0,1}[A-Z А-Я a-z а-я 0-9]*[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{0,1})*"
	);
	std::cmatch result;
	std::stringstream ss;
	while (getline(file, line)) {
		
		if (regex_match(line.c_str(), result, regular_main)) {
			ss << result[1];
			ss >> integer;
			temp.setId(integer);
			ss.clear();
			ss << result[2];
			ss >> integer;
			temp.setAge(integer);
			ss.clear();
			ss << result[3];
			ss >> integer;
			temp.setSalary(integer);
			
			for (int i = 4; i < result.size(); i++)
			{
				ss.clear();
				ss << result[i];
			ss >> str;
			if ((str+" ")!=tstr)
			tstr = tstr + str +" ";
		}
			temp.setName(tstr);
			tstr = "";
			Add(temp);
		}
		result.end();
	}
	file.close();
}
void CList::twoWorld() {
	std::regex regular("([A-Z А-Я a-z а-я 0-9]+[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{1}[A-Z А-Я a-z а-я 0-9]+[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{0,1}){1}");
	std::cmatch result;
	for(int i=0;i<amount;i++)
		if (regex_match(fEl[i].getName(), regular)) {
			cout <<"\n"<< "ID:" << fEl[i].getId() << "\n Age: " << fEl[i].getAge() << "\n Salary: " << fEl[i].getSalary() << "\n Name: " << fEl[i].getName();
		}
}
void CList::writeToFile(string fileName) {
	ofstream file;
	string str1;
	std::stringstream ss;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " Файл не открыт, давай по новой Миша\n";
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

	std::cout << "\nВведите данные с клавиатуры в таком порядке: id, age, salary, name\n";
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