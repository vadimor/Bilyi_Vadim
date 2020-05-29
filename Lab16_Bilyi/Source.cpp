#include <iostream>
#include "C_RgzM.h"
#include <vector>
using std::cout;
using std::endl;
int main() {
	const int N = 3;
	C_Rgz* array[N];
	*array = new C_Rgz("Math");
	*(array + 1) = new C_Rgz("Physics");
	*(array + 2) = new C_RgzM("Chemistry",100);
	for (size_t i = 0; i < N; i++)
		cout << *array[i] << endl;
	cout << endl;
	C_Rgz* arrRgz = new C_Rgz[N]();
	arrRgz[0].setObject("1");
	arrRgz[1].setObject("2");
	arrRgz[2].setObject("3");
	for (size_t i = 0; i < N; i++)
		cout << arrRgz[i] << endl;
	cout << endl;
	for (size_t i = 0; i < N; i++)
		delete*(array + i);
	delete[] arrRgz;
	if (_CrtDumpMemoryLeaks())
		cout << "ERROR! Memory leak!" << endl;
	else
		cout << endl << "There is no memory leak" << endl;

}