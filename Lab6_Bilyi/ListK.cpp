#include "ListK.h"

void ListK::Creatmass(int n)
{
	mass = new CcoopK[n];
	size = n;
}

CcoopK& ListK::getCcoopK(int n)
{
	return mass[n];
}
void ListK::addNewEl(CcoopK El)
{
	CcoopK* temp = new CcoopK[size+1];

	for (int i=0; i < size; i++) {
		temp[i] = mass[i];
	}
	temp[size] = El;
	End();
	size++;
	mass = temp;
}
void ListK::Delete(int a) {
	CcoopK* temp = new CcoopK[size - 1];

	for (int i = 0; i < a; i++) {
		temp[i] = mass[i];
	}
	for (int i = a + 1; i < size; i++) {
		temp[i - 1] = mass[i];
	}
	End();
	size--;
	mass = temp;

}

void ListK::End()
{
	delete[] mass;
}

ListK::~ListK()
{
}
