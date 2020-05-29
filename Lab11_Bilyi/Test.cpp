#include "CList.cpp"
int main() {
	{
		
		int** test= new int*[8];

		for (size_t i = 0; i < 8; i++)
		{
			test[i] = new int;
		}
		*test[0] = 0;
		*test[1] = 1;
		*test[2] = 0;
		*test[3] = 6;
		*test[4] = 5;
		*test[5] = 7;
		*test[6] = 844;
		*test[7] = 9;
		CList<int> list(test);
		int rez1[8] = { 0,0,1,5,6,7,9,844 };
		int rez2 = 0;
		list.sortMass(8);

		for (int i = 0; i < 8; i++) {
			if (*list.getMass()[i] == rez1[i])
				cout << "test 1." << i << ": true"<<endl;
			else 
				cout << "test 1." << i << ": false" << endl;
		}

		if(list.minEl(8)==rez2)
			cout << "test 2: true" << endl;
		else
			cout << "test 2: false" << endl;
		if(list.index(844,8)==7)
			cout << "test 3: true" << endl;
		else
			cout << "test 3: false" << endl;
	}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}