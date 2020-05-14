#include "CList.cpp"
#include "CMyClass.h"
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
		CMyClass w;
		MYTYPE b [4] = { "A","B","C","D" };
		CList <MYTYPE*, float, MYTYPE> a(b,4);
		MYTYPE c;
		c.ch= "C";
		cout << a.index(c)<<endl;
		cout << endl;
		a.showMass();
		cout << endl;
		a.sortMass();
		a.showMass();
		cout << endl;
		cout << a.minEl();
	}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";
}
