#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <clocale>
using namespace std;
class cooperator {
private:
	int id, age, salary;
public:
	void setId(int id) {
		this->id = id;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
	int getId()const {
		return this->id;
	}
	int getAge()const {
		return this->age;
	}
	int getSalary()const {
		return this->salary;
	}
};
class list {
private:
	int amount;
	cooperator* fEl;
	cooperator* fEl1;
public:
	void creatMass()
	{
		printf("Введите количество елементов");
		scanf("%i", &amount);
		fEl = new cooperator[amount];
		int a;
		printf("\nВыбирите вариант создания елементов\n1. Cоздать елемент вручную\n2. Готовый елемент\nВаш выбор:");
		scanf("%i", &a);
		if (a == 1)
			for (int i = 0; i < amount; i++) {
				fEl[i] = creatEl1();
			}
		if (a == 2)
			for (int i = 0; i < amount; i++) {
				fEl[i] = creatEl2();
			}
	}
	cooperator creatEl1() {
		cooperator El;
		int a;
		printf("Введите id сотрудника");
		scanf("%i", &a);
		El.setId(a);
		printf("Введите зарплату сотрудника");
		scanf("%i", &a);
		El.setSalary(a);
		printf("Введите возраст сотрудника");
		scanf("%i", &a);
		El.setAge(a);
		return El;
	}
	cooperator creatEl2() {
		cooperator El;
		El.setId(0);
		El.setSalary(0);
		El.setAge(0);
		return El;
	}
	void Add() {
		fEl1 = new cooperator[amount + 1];
		for (int i = 0; i < amount; i++) {
			fEl1[i] = fEl[i];
		}
		fEl1[amount] = creatEl1();
		delete[] fEl;
		amount++;
		fEl = new cooperator[amount];
		for (int i = 0; i < amount; i++) {
			fEl[i] = fEl1[i];
		}
		delete[] fEl1;
	}
	void Delete() {
		int a;
		cooperator* fEl1 = new cooperator[amount - 1];
		printf("\nВведите номер елемента который хотите удалить: ");
		scanf("%i", &a);
		for (int i = 0; i < a - 1; i++) {
			fEl1[i] = fEl[i];
		}
		for (int i = a - 1, j = a; j < amount; i++, j++) {
			fEl1[i] = fEl[j];
		}
		delete[] fEl;
		amount--;
		fEl = new cooperator[amount];
		for (int i = 0; i < amount; i++) {
			fEl[i] = fEl1[i];
		}
		delete[] fEl1;
	}
	void getCooperator(int a) {
		printf("Id: %i\nAge: %i\nSalary:%i\n", fEl[a].getId(), fEl[a].getAge(), fEl[a].getSalary());
	}
	void showAll() {
		for (int i = 0; i < amount; i++) {
			getCooperator(i);
		}
	}
	void End() {
		delete[] fEl;
	}

};
int main() {
	setlocale(LC_ALL, "rus");
	list a1;
	a1.creatMass();
	a1.showAll();
	//a1.Add();
	//showAll();
	a1.Delete();
	a1.showAll();
	a1.End();
}