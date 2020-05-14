#include <iostream>
#include "CList.h"
int main() {
	CList a;
	a.cycle();
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";



}