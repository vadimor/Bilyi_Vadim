#include "cooperator.h"
#include "list.h"
#define _CRT_SECURE_NO_WARNINGS
#define N 5
#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	Ccooperator a;
	a.setAge(0);
	a.setAge(0);
	a.setSalary(0);
	CList a1[N];
	int test[N];
	int rezult1[N];
	int rezult2[N];
	int rezult3[N];
	test[0] = 1;
	test[1] = 5;
	test[2] = 10;
	test[3] = 25;
	test[4] = 50;
	rezult1[0] = 1;
	rezult1[1] = 5;
	rezult1[2] = 10;
	rezult1[3] = 25;
	rezult1[4] = 50;
	rezult2[0] = 2;
	rezult2[1] = 6;
	rezult2[2] = 11;
	rezult2[3] = 26;
	rezult2[4] = 51;
	rezult3[0] = 1;
	rezult3[1] = 5;
	rezult3[2] = 10;
	rezult3[3] = 25;
	rezult3[4] = 50;
	for (int i = 0; i < N; i++) {
		a1[i].creatMass(test[i]);
		if (a1[i].getAmount() == rezult1[i]) {
			printf("Тест 1.%i пройден\n", i);
		}
		else {
			printf("Тест 1.%i не пройден\n", i);
		}
	}
	for (int i = 0; i < N; i++) {
		a1[i].Add(a);
		if (a1[i].getAmount() == rezult2[i]) {
			printf("Тест 2.%i пройден\n", i);
		}
		else {
			printf("Тест 2.%i не пройден\n", i);
		}
	}
	for (int i = 0; i < N; i++) {
		a1[i].Delete(test[i]);
		if (a1[i].getAmount() == rezult3[i]) {
			printf("Тест 3.%i пройден\n", i);
		}
		else {
			printf("Тест 3.%i не пройден\n", i);
		}
	}
	Ccooperator Obtest1, Obtest2;
	Obtest1.setSalary(-200);
	Obtest2.setSalary(300);
	CList TestList;
	TestList.creatMass(0);
	TestList.Add(Obtest1);
	TestList.Add(Obtest2);
	if (TestList.averageSalary() == 50) {
		printf("Тест 4 пройден\n");
	}
	else {
		printf("Тест 4 не пройден\n");
	}
	TestList.End();
}
