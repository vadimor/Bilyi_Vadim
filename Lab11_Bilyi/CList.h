#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::string;
using std::ostream;
template<class T1, class T2, class T3>
class CList
{
private:
	T1 mass;
	T2 size;
public: 
	T1 getMass();
	T2 getSize();
	void showMass();
	T2 index(T3 el);
	void sortMass();
	T3 minEl();
	CList();
	CList(T1 m, T2 s);
	~CList();

};




