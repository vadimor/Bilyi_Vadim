#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::string;
using std::ostream;
template<class T>
class CList
{
private:
	T** mass;
public: 
	T** getMass();
	void showMass(int size);
	int index(T el, int size);
	T* sortMass(int size);
	T minEl(int size);
	CList(T** mass);
	~CList()= default;

};
