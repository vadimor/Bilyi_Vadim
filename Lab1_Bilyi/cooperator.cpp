
#include "cooperator.h"
void list::creatMass()
{
	printf("������� ���������� ���������");
	scanf("%i", &amount);
	fEl = new cooperator[amount];
	int a;
	printf("\n�������� ������� �������� ���������\n1. C������ ������� �������\n2. ������� �������\n��� �����:");
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
cooperator list::creatEl1() {
	cooperator El;
	int a;
	printf("������� id ����������");
	scanf("%i", &a);
	El.setId(a);
	printf("������� �������� ����������");
	scanf("%i", &a);
	El.setSalary(a);
	printf("������� ������� ����������");
	scanf("%i", &a);
	El.setAge(a);
	return El;
}
cooperator list::creatEl2() {
	cooperator El;
	El.setId(0);
	El.setSalary(0);
	El.setAge(0);
	return El;
}
void list::Add() {
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
void list::Delete() {
	int a;
	cooperator* fEl1 = new cooperator[amount - 1];
	printf("\n������� ����� �������� ������� ������ �������: ");
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
void list::getCooperator(int a) {
	printf("Id: %i\nAge: %i\nSalary:%i\n", fEl[a].getId(), fEl[a].getAge(), fEl[a].getSalary());
}
void list::showAll() {
	for (int i = 0; i < amount; i++) {
		getCooperator(i);
	}
}
void list::End() {
	delete[] fEl;
}
void cooperator::setId(int id) {
	this->id = id;
}
void cooperator::setAge(int age) {
	this->age = age;
}
void cooperator::setSalary(int salary) {
	this->salary = salary;
}
int cooperator::getId()const {
	return this->id;
}
int cooperator::getAge()const {
	return this->age;
}
int cooperator::getSalary()const {
	return this->salary;
}

