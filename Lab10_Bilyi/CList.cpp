#include "CList.h"

template<class T1, class T2>
void CList::showMass(T1 mass, T2 size)
{
	for (T2 i = 0; i < size; i++) {
		cout<<mass[(int)i]<<endl;
	}
}

template<class T1, class T2, class T3>
T2 CList::index(T1 mass,T3 el,T2 size)
{
	for (T2 i = 0; i < size; i++) {
		if (el == mass[(int)i])
			return i;
	}
	return -1;
}

template<class T1, class T2, class T3>
void CList::sortMass(T1 mass, T2 size, T3 Primer)
{
	T3 temp;
	bool prz=1;
	while (prz) {
		prz = 0;
		for (T2 i = 0; i < size - 1; i++) {
			if (mass[(int)i] > mass[(int)i + 1])
			{
				temp = mass[(int)i];
				mass[(int)i] = mass[(int)i + 1];
				mass[(int)i + 1] = temp;
				prz = 1;
			}
		}
	}
}

template<class T1, class T2, class T3>
T3 CList::minEl(T1 mass, T2 size, T3 Primer)
{
	T3 min = Primer;
	if (size > 0)
	min = mass[0];
	for (T2 i = 0; i < size; i++) {
		if (min > mass[(int)i])
		{
			min = mass[(int)i];
		}
	}
	return min;
}
