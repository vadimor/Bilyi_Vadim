#include "list.h"
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
Ccooperator CList::creatEl1() {
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
}
int CList::averageSalary() {
	int averageSalary=	0;
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
		printf("ID: %i\n Age: %i\n Salary: %i\n Name: %s\n", getCooperator(i).getId(), getCooperator(i).getAge(), getCooperator(i).getSalary(), getCooperator(i).getName());
	}
}
void CList::End() {
	delete[] fEl;
}