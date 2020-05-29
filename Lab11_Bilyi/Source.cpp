#include "CList.cpp"
#include "C_Rgz.h"
#include "C_RgzM.h"
struct MYTYPE {
	string ch;

	//MYTYPE& operator=(MYTYPE& temp) {
		//ch = temp.ch;
		//return *this;
	//};
};
ostream& operator<<(ostream& output, MYTYPE obj)
{
	output << obj.ch;
	return output;
};
istream& operator>>(istream& input, MYTYPE& obj)
{
	input >> obj.ch;
	return input;
};
bool operator==(MYTYPE& a, MYTYPE& b) {
	return a.ch == b.ch;
};
bool operator>(MYTYPE& a, MYTYPE& b) {
	return a.ch > b.ch;
};
int main() {
	{
		C_Rgz obj1("Math");
		C_RgzM obj2("Art",10);
		C_Rgz obj3("Algoritmh");
		C_Rgz** a= new C_Rgz*[6];
		for (size_t i = 0; i < 3; i++) {
			a[i] = new C_Rgz;
			*a[i] = obj1;
		}
		for (size_t i = 3; i < 6; i++) {
			a[i] = new C_RgzM;
			*a[i] = obj2;
		}
		*a[2] = obj3;
		CList <C_Rgz> b(a);
		

		cout << b.index(obj3,6)<<endl;
		cout << endl;
		b.showMass(6);
		cout << endl;
		b.sortMass(6);
		b.showMass(6);
		cout << endl;
		cout << b.minEl(6).getString();
		for (size_t i = 0; i < 6; i++)
		{
			delete a[i];
		}
		delete a;
	}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}
