#include "Сlist.h"


void Clist::addWhithStr(char a)
{
	Ccooperator* temp;
	if(a=='K')
	temp= new CcoopK;
	else
		if (a == 'F')
	temp= new CcoopFamily;
		else {
			return;
		}
	std::stringstream ss1;

	std::cout << "\nВведите данные с клавиатуры в таком порядке: id, age, salary, weight,name,age rector, name rector,";
	if (a == 'K')
		std::cout << "place work\n";
	else
		std::cout << "amount child\n";
	string tid = " ", tage = " ", tsalary = " ", tweight = " ", tname = " ",trectage=" ", trectname = " ", pork=" ";
	int tid1;
	string tname1 = " ";
	cin >> tid >> tage >> tsalary >> tweight >>tname >> trectage >> trectname>>pork;
	ss1 << tid;
	ss1 >> tid1;
	temp->setId(tid1);
	ss1.clear();
	ss1 << tage;
	ss1 >> tid1;
	temp->setSalary(tid1);
	ss1.clear();
	ss1 << tsalary;
	ss1 >> tid1;
	temp->setAge(tid1);
	ss1.clear();
	ss1 << tname;
	ss1 >> tname1;
	temp->setName(tname1);
	ss1.clear();
	ss1 << tweight;
	ss1 >> tid1;
	temp->setWeight(tid1);
	ss1.clear();
	ss1 << trectage;
	ss1 >> tid1;
	Cchpi* rect= new Cchpi;
	rect->setAge(tid1);
	ss1.clear();
	ss1 << trectname;
	ss1 >> tname1;
	rect->setName(tname1);
	temp->setRect(rect);
	if (a=='F') {
		ss1.clear();
		ss1 << pork;
		ss1 >> tid1;
		temp->setAmountChild(tid1);
	}
	if (a=='K') {
		ss1.clear();
		ss1 << pork;
		ss1 >> tname1;
		temp->setmPlaceWork(tname1);

	}
	addNewEl(temp);
}

void Clist::sortMass(string sprz, Fun s)
{
	int prz = 0;
	Ccooperator* temp;
	if (sprz == "id") {
		do {
			prz = 0;
			for (size_t i = 1; i < size; i++) {
				if (s(mass[i - 1]->getId(), mass[i]->getId())) {
					temp = mass[i - 1];
					mass[i - 1] = mass[i];
					mass[i] = temp;
					prz = 1;
				}
			}

		} while (prz != 0);
	}
	if (sprz == "salary") {
		do {
			prz = 0;
			for (size_t i = 1; i < size; i++) {
				if (s(mass[i - 1]->getSalary(), mass[i]->getSalary())) {
					temp = mass[i - 1];
					mass[i - 1] = mass[i];
					mass[i] = temp;
					prz = 1;
				}
			}

		} while (prz != 0);
	}
	if (sprz == "age") {
		do {
			prz = 0;
			for (size_t i = 1; i < size; i++) {
				if (s(mass[i - 1]->getAge(), mass[i]->getAge())) {
					temp = mass[i - 1];
					mass[i - 1] = mass[i];
					mass[i] = temp;
					prz = 1;
				}
			}
		} while (prz != 0);
	}
}

void Clist::EndEnd()
{
	for (size_t i = 0; i < size; i++) {

		mass[i]->delRect();
		delete mass[i];
	}
	delete mass;
}

void Clist::showAll()
{
	for (size_t i = 0; i < size; i++)
		if (mass[i]) {
			cout <<"\nNum: "<< i <<mass[i]->getString();
		}
}

void Clist::creatMass(size_t n)
{
	size = n;
	mass = new Ccooperator* [n];
	for (size_t i = 0; i < size;i++) {
		mass[i] = new CcoopK;
	}
}
void Clist::readFile(string fileName)
{
	if (mass != NULL)
		End();
	creatMass(0);
	ifstream file;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " Файл не открыт, давай по новой Миша\n";
		return;
	}
	std::regex regular_main(
		"([0-9]+[ \\f\\n\\r\\t\\v]{1})"//id
		"([0-9]+[ \\f\\n\\r\\t\\v]{1})"//age
		"([0-9]+[ \\f\\n\\r\\t\\v]{1})"//salary
		"([0-9]+[ \\f\\n\\r\\t\\v]{1})"//weight
		"([A-ZА-Я]{1}[A-ZА-Яa-zа-я]+[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{1}){1}"//name
		"([A-Z А-Я a-z а-я 0-9]*[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{1})*"
		"([0-9]+[ \\f\\n\\r\\t\\v]{1}){1}"//ageRect
		"([A-ZА-Яa-zа-я0-9]+[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{1}){1}"//nameRect
		"([A-Z А-Я a-z а-я 0-9]*[\.\,\;\:\-]{0,1}[ \\f\\n\\r\\t\\v]{1})*"
		"([A-Z А-Я a-z а-я 0-9]*[\.\, \; \:\ - ]{0,1}){1}"// Place or Child
	);

	std::cmatch result;
	std::stringstream ss;
	int integer;
	string str;
	string line;
	string tstr = "";
	Ccooperator* temp;
	int maxSize = 0;
	char ctype;
	//bool prz;
	Cweight w;
	Cchpi* ch;
	while (getline(file, line)) {
		//prz = 1;
		tstr = "";
		if (regex_match(line.c_str(), result, regular_main)) {
			maxSize = result.size()-1;
			if (isdigit(result[maxSize].str()[0])) {
				temp = creatElF();
				ctype = 'F';
			}
			else {
				temp = creatElK();
				ctype = 'K';
			}


			ss << result[1];
			ss >> integer;
			temp->setId(integer);
			ss.clear();
			ss << result[2];
			ss >> integer;
			temp->setAge(integer);
			ss.clear();
			ss << result[3];
			ss >> integer;
			temp->setSalary(integer);
			ss.clear();
			ss << result[4];
			ss >> integer;
			w.setWeigt(integer);
			temp->setWeight(w);
			if (ctype == 'F') {
				do {
					maxSize--;
				}while (!(isdigit(result[maxSize].str()[0])));
				//if ((isdigit(result[maxSize].str()[0])) && (isdigit(result[maxSize - 1].str()[0])))
				//{
				//	prz = 0; // Rector
				//}
			}
			else {
				do {
					maxSize--;
				} while (!(isdigit(result[maxSize].str()[0])));
				//if ((isdigit(result[maxSize].str()[0])) && !(isdigit(result[maxSize - 1].str()[0])))
				//{
				//	prz = 0;//Rector
				//}
			}
			if (ctype=='F') {

				for (int i = 5; i < maxSize; i++)
				{
					ss.clear();
					ss << result[i];
					ss >> str;
					if ((str + " ") != tstr)
						tstr = tstr + str + " ";
				}
				temp->setName(tstr);
				ss.clear();
				ss << result[maxSize];
				ss >> integer;
				ch = new Cchpi;
				ch->setAge(integer);
				tstr = "";
				for (int i = maxSize+1; i < result.size()-1; i++)
				{
					ss.clear();
					ss << result[i];
					ss >> str;
					if ((str + " ") != tstr)
						tstr = tstr + str + " ";
				}
				ch->setName(tstr);
				temp->setRect(ch);
				ss.clear();
				ss << result[result.size()-1];
				ss >> integer;
				temp->setAmountChild(integer);
				addNewEl(temp);
			}

			if (ctype == 'K') {
				for (int i = 5; i < maxSize; i++)
				{
					ss.clear();
					ss << result[i];
					ss >> str;
					if ((str + " ") != tstr)
						tstr = tstr + str + " ";
				}
				temp->setName(tstr);
				ss.clear();
				ss << result[maxSize];
				ss >> integer;
				ch = new Cchpi;
				ch->setAge(integer);
				tstr = "";
				for (int i = maxSize + 1; i < result.size()-1; i++)
				{
					ss.clear();
					ss << result[i];
					ss >> str;
					if ((str + " ") != tstr)
						tstr = tstr + str + " ";
				}
				ch->setName(tstr);
				temp->setRect(ch);
				ss.clear();
				ss << result[result.size()-1];
				ss >> str;
				temp->setmPlaceWork(str);
				
				addNewEl(temp);
			}
			ss.clear();
		}
		result.end();

	}
	file.close();
}

void Clist::writeToFile(string fileName)
{
	ofstream file;
	file.open(fileName);
	if (!file.is_open())
	{
		cout << " Файл не открыт, давай по новой Миша\n";
		return;
	}
	for (size_t i = 0; i < size; i++) {
		file << mass[i]->getString();
	}

	file.close();
}

bool Clist::sortAsc(const int& a, const int& b)
{
	return a > b;
}

bool Clist::sortDesc(const int& a, const int& b)
{
	return a < b;
}

Ccooperator** Clist::addNewEl(Ccooperator* el)
{
	Ccooperator** tempMass = new Ccooperator * [(size + 1)];
	for (size_t i = 0; i < size; i++) {
		tempMass[i] = mass[i];
		tempMass[i]->setRect(mass[i]->getRect());
	}
	tempMass[size] = el;
	if (size != 0) {
		End();
	}
	else
		EndEnd();

	size++;
	mass = tempMass;
	return mass;
}
Ccooperator** Clist::delEl(size_t n)
{
	Ccooperator** tempMass = new Ccooperator * [size - 1];
	if (n >= size) {
		cout << "Нельзя удалить несуществующий елемент" << endl;
		return mass;
	}
	for (int i = 0; i < n; i++) {
		tempMass[i] = mass[i];
		tempMass[i]->setRect(mass[i]->getRect());
	}
	for (int i = n + 1; i < size; i++) {
		tempMass[i-1] = mass[i];
		tempMass[i-1]->setRect(mass[i]->getRect());
	}
	mass[n]->delRect();
	delete mass[n];
	delete[] mass;
	size--;
	mass = tempMass;
}

Ccooperator* Clist::getEl(size_t n)
{
	if (n>=size) {
		cout<<"Нельзя вернуть несуществующий елемент"<<endl;
		return NULL;
	}
	return mass[n];
}

Ccooperator* Clist::creatElK()
{
	return new CcoopK;
}

Ccooperator* Clist::creatElF()
{
	return new CcoopFamily;
}

int Clist::getSize()
{
	return size;
}


void Clist::End()
{
	delete [] mass;
}

Clist::Clist(): size(0), mass(NULL)
{
}

Clist::Clist(int n, Ccooperator** m):size(n), mass(m)
{
}

Clist::Clist(Clist& l) : size(l.size), mass(l.mass)
{
}


