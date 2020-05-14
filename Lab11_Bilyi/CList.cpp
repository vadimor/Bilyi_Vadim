#include "CList.h"

template<class T1, class T2, class T3>
T1 CList<T1, T2, T3>::getMass()
{
	return mass;
}

template<class T1, class T2, class T3>
T2 CList<T1, T2, T3>::getSize()
{
	return size;
}

template<class T1, class T2, class T3>
void CList<T1, T2, T3>::showMass()
{
	for (T2 i = 0; i < size; i++) {
		cout<<mass[(int)i]<<endl;
	}
}

template<class T1, class T2, class T3>
T2 CList<T1, T2, T3>::index(T3 el)
{
	for (T2 i = 0; i < size; i++) {
		if (el == mass[(int)i])
			return i;
	}
	return -1;
}

template<class T1, class T2, class T3>
void CList<T1, T2, T3>::sortMass()
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
T3 CList<T1, T2, T3>::minEl()
{
	T3 min;
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
template<class T1, class T2, class T3> CList<T1, T2, T3>::CList() : mass(NULL), size(NULL)
{

}
template<class T1, class T2, class T3> CList<T1, T2, T3>::CList(T1 m, T2 s): mass(m),size(s)
{

}

template<class T1, class T2,class T3> CList<T1, T2, T3>::~CList()
{
}





