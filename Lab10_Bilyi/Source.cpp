#include "CList.cpp"
using std::ostream;
struct MYTYPE {
	string ch;

	//MYTYPE& operator=(MYTYPE& temp) {
		//ch = temp.ch;
		//return *this;
	//};
};
ostream& operator<<(ostream& output, MYTYPE& obj)
{
	output << obj.ch;
	return output;
};
istream& operator>>(istream& input, MYTYPE& obj)
{
	input >> obj.ch;
	return input;
};
bool operator==(MYTYPE& a,MYTYPE& b) {
	return a.ch == b.ch;

};
bool operator>(MYTYPE& a, MYTYPE& b) {
	return a.ch > b.ch;

};
int main() {
	{	
	CList list;
	int d[8] = { 10,9,7,5,6,844,0,1};
	MYTYPE b;
	b.ch = "CCCC";
	MYTYPE a[4] = { "BBBB", "DDDD", "CCCC" , "AAAA" };
	list.showMass(a, 4);
	cout << list.index(a, b, 4) << endl;
	list.sortMass(a, 4, b);
	list.showMass(a, 4);
	b = list.minEl(a, 4, a[0]);
	cout << b << endl;
	list.showMass(d, 8);
	list.sortMass(d, 8, d[0]);
	list.showMass(d, 8);
}
	if (_CrtDumpMemoryLeaks())
		cout << "\nMemory leack deteckted\n";
	else
		cout << "\nMemory is not leack deteckted\n";

}