#pragma once
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;
using std::string;
class CList
{
public: 
	template <class T1, class T2> void showMass(T1, T2);
	template<class T1, class T2, class T3> T2 index(T1, T3, T2);
	template<class T1, class T2, class T3>	void sortMass(T1, T2, T3);
	template<class T1, class T2, class T3> T3 minEl(T1 mass, T2 size, T3 Rrimer);
};

