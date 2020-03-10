#include "list.h"
void list::creatMass(int a)
{
	amount = a;
	//printf("Введите количество елементов ");
	//scanf("%i", &amount);
	fEl = new cooperator[amount];
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
cooperator list::creatEl1() {
	cooperator El;
	int a;
	printf("Введите id сотрудника: ");
	scanf("%i", &a);
	El.setId(a);
	printf("Введите зарплату сотрудника: ");
	scanf("%i", &a);
	El.setSalary(a);
	printf("Введите возраст сотрудника: ");
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
void list::Add(cooperator El1) {
	fEl1 = new cooperator[amount + 1];
	for (int i = 0; i < amount; i++) {
		fEl1[i] = fEl[i];
	}
	fEl1[amount] = El1;
	delete[] fEl;
	amount++;
	fEl = new cooperator[amount];
	for (int i = 0; i < amount; i++) {
		fEl[i] = fEl1[i];
	}
	delete[] fEl1;
}
int list::getAmount() {
	return amount;
}
void list::Delete(int a) {
	cooperator* fEl1 = new cooperator[amount - 1];
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
cooperator list::findCooperator(const int a) {
	int b=-1, count=0;
	for (int i=0; i < amount; i++) {
		if (a == fEl[i].getId()) {
			printf("ID: %i\n Age: %i\n Salary: %i\n", getCooperator(i).getId(), getCooperator(i).getAge(), getCooperator(i).getSalary());
			count++;
			b = i;
		}
	}
	if (count > 1) {
		printf("Есть %i похожих елементов", count);
	}
	if (count == 0) {
		printf("Похожих елементов нет, возвращен 1 елемент");
		return fEl[0];
	}
	return fEl[b];
}
cooperator list::getCooperator(const int a) {
	return fEl[a];
}
void list::showAll() {
	for (int i = 0; i < amount; i++) {
		printf("ID: %i\n Age: %i\n Salary: %i\n", getCooperator(i).getId(), getCooperator(i).getAge(), getCooperator(i).getSalary());
	}
}
void list::End() {
	delete[] fEl;
}