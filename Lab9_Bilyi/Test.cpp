#include "CList.h"
int main() {
	CList a;
	a.cycle();
	float* rez1 = a.getMass1();
	float test1[2] = { 2, 2.5 };
	for (int i = 0; i < 2; i++) {
		if (rez1[i] == test1[i])
		{
			cout << "test 1." << i<<": true"<< endl;
		}
		else {
			cout << "test 1." << i << ": false" << endl;
		}
	}
	a.cycle();
	float* rez2 = a.getMass1();
	float test2[3] = { 44, 23, 3 };
	for (int i = 0; i < 3; i++) {
		if (rez2[i] == test2[i])
		{
			cout << "test 2." << i << ": true" << endl;
		}
		else {
			cout << "test 2." << i << ": false" << endl;
		}
	}

	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}