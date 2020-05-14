#include "list.h"
#include <sstream>
#include <iostream>
#include <fstream> 

 bool CList::sortAsc(const int &a, const int &b) {
	return a > b;
}
 bool CList::sortDesc(const int &a,const int &b) {
	return a < b;
}
void CList::Sort(string sprz, Fun s) {
	int prz=0;
	Ccooperator temp;
	if (sprz == "id") {
		do {
			prz = 0;
			for (size_t i = 1; i < amount; i++) {
				if (s(fEl[i - 1].getId(), fEl[i].getId())) {
					temp = fEl[i - 1];
					fEl[i - 1] = fEl[i];
					fEl[i] = temp;
					prz = 1;
				}
			}

		} while(prz!=0);
	}
	if(sprz == "salary"){
		do {
				prz = 0;
				for (size_t i = 1; i < amount; i++) {
					if (s(fEl[i - 1].getSalary(), fEl[i].getSalary())) {
						temp = fEl[i - 1];
						fEl[i - 1] = fEl[i];
						fEl[i] = temp;
						prz = 1;
					}
				}

			} while (prz != 0);
	}
	if (sprz== "age") {
		do {
			prz = 0;
			for (size_t i = 1; i < amount; i++) {
				if (s(fEl[i - 1].getAge(), fEl[i].getAge())) {
					temp = fEl[i - 1];
					fEl[i - 1] = fEl[i];
					fEl[i] = temp;
					prz = 1;
					}
				}
			} while (prz != 0);
	}
}
void CList::creatMass(int a)
{
	amount = a;
	fEl = new Ccooperator[amount];
	for (std::size_t i = 0; i < amount; i++) {
		fEl[i] = creatEl2();
	}
}
string CList::findCooperator(const int a) {
	std::stringstream ss;
	string ab;
	ss << " ";
	int b = -1, count = 0;
	for (std::size_t i = 0; i < amount; i++) {
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
	auto averageSalary = 0;
	for (std::size_t i = 0; i < amount; i++)
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
	"([0-9]*)"
	"([ \\f\\n\\r\\t\\v]{1}[A-Z А-Я]{1}[a-z а-я 0-9]*)"
	"([ \\f\\n\\r\\t\\v]{1}[A-Z А-Я]{1}[a-z а-я 0-9]*[\.\,\;\:\-]{0,1})([ \\f\\n\\r\\t\\v]{0,1}[a-z а-я 0-9]*[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{0,1})*"
	);
	std::cmatch result;
	std::stringstream ss;
	Cchpi* a;
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
			ss << result[4];
			ss >> integer;
			temp.setWeight(integer);
			ss.clear();
			ss << result[5];
			ss >> str;
			a = new Cchpi;
			a->setName(str);
			temp.setKaf(a);
			for (std::size_t i = 6; i < result.size(); i++)
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
	for(std::size_t i=0;i<amount;i++)
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
	for (std::size_t i = 0; i < amount; i++) {
		file << fEl[i].getId() << " " << fEl[i].getAge() << " " << fEl[i].getSalary() << " " << fEl[i].getName() << " " << fEl[i].getWeight() << " " << fEl[i].getKaf() << "\n";
	}

	file.close();
}
void CList::AddWhithString() {
	Ccooperator temp;
	std::stringstream ss1;
	fEl1 = new Ccooperator[amount + 1];
	for (std::size_t i = 0; i < amount; i++) {
		fEl1[i] = fEl[i];
	}

	std::cout << "\nВведите данные с клавиатуры в таком порядке: id, age, salary, name,\n";
	string tid = " ", tage = " ", tsalary = " ", tweight=" ", tkaf = " ",tname = " ";
	int tid1;
	string tname1 = " ";
	cin >> tid >> tage >> tsalary >> tweight >> tkaf >> tname ;
	ss1 << tid;
	ss1 >> tid1;
	temp.setId(tid1);
	ss1.clear();
	ss1 << tage;
	ss1 >> tid1;
	temp.setSalary(tid1);
	ss1.clear();
	ss1 << tsalary;
	ss1 >> tid1;
	temp.setAge(tid1);
	ss1.clear();
	ss1 << tname;
	ss1 >> tname1;
	temp.setName(tname1);
	ss1.clear();
	ss1 << tweight;
	ss1 >> tid1;
	temp.setWeight(tid1);
	ss1.clear();
	ss1 << tkaf;
	ss1 >> tname;
	Cchpi* a=new Cchpi;
	a->setName(tname);
	temp.setKaf(a);
	fEl1[amount] = temp;
	delete[] fEl;
	amount++;
	fEl = new Ccooperator[amount];
	for (std::size_t i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
void CList::Add(Ccooperator El1) {
	fEl1 = new Ccooperator[amount + 1];
	for (std::size_t i = 0; i < amount; i++) {
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
	for (std::size_t i = 0; i < a - 1; i++) {
		fEl1[i] = fEl[i];
	}
	for (std::size_t i = a - 1, j = a; j < amount; i++, j++) {
		fEl1[i] = fEl[j];
	}
	delete[] fEl;
	amount--;
	fEl = new Ccooperator[amount];
	for (std::size_t i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
Ccooperator CList::getCooperator(const int a) {
	return fEl[a];
}
void CList::showAll() {
	for (std::size_t i = 0; i < amount; i++) {
		cout << "ID:" << getCooperator(i).getId() << "\n Age: " << getCooperator(i).getAge() << "\n Salary: " << getCooperator(i).getSalary()<< "\n Weight:"<< getCooperator(i).getWeight()<<"\n Name Rector:"<< getCooperator(i).getKaf() << "\n Name: " << getCooperator(i).getName();
	}
}
void CList::End() {
	for (int i = 0; i < amount; i++) {
		if(fEl1[i].getAdresKaf())
		delete fEl[i].getAdresKaf();
	}
	delete[] fEl;
}