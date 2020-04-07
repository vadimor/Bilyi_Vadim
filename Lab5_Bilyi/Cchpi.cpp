#include "Cchpi.h"
#include <iostream>
std::string Cchpi::getName()const {
	return nameRect;
}
void Cchpi::setName(std::string name) {
	nameRect = name;
}
void Cchpi::creatList(int num) {
	List = new std::string[num];
	sizeList = num;

}
void Cchpi::setMass(int n, std::string name)
{
	List[n] = name;
}
std::string Cchpi::getElMass(int n) const
{
	return List[n];;
}
Cchpi::Cchpi() : nameRect("E. Sokon") {};
Cchpi::Cchpi(std::string nameRect1) : nameRect(nameRect1) {};
Cchpi::Cchpi(const Cchpi& temp) : nameRect(temp.nameRect) {};
Cchpi::~Cchpi() {};
