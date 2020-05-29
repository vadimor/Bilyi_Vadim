#include "ListK.h"

void ListK::Creatmass(int n)
{
	mass = new CcoopK[n];
	size = n;
}
CcoopK& ListK::getCcoopK(int n)
{
	return mass[n];
} 

void ListK::End()
{
	delete[] mass;
}

ListK::~ListK()
{
}
