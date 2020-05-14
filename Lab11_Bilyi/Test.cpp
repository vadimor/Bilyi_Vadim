#include "CList.cpp"
int main() {
	{
		
		int test[8] = { 9,7,5,6,844,0,1,0 };
		CList<int*, float, int> list(test, 8);
		int rez1[8] = { 0,0,1,5,6,7,9,844 };
		int rez2 = 0;
		list.sortMass();
		for (int i = 0; i < 8; i++) {
			if (list.getMass()[i] == rez1[i])
				cout << "test 1." << i << ": true"<<endl;
			else 
				cout << "test 1." << i << ": false" << endl;
		}
		if(list.minEl()==rez2)
			cout << "test 2: true" << endl;
		else
			cout << "test 2: false" << endl;
		if(list.index(844)==7)
			cout << "test 3: true" << endl;
		else
			cout << "test 3: false" << endl;
	}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}