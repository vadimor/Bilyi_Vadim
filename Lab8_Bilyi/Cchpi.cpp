#include "Cchpi.h"
#include <iostream>
std::string Cchpi::getName()const {
	return nameRect;
}
int Cchpi::getAge() const
{
	return ageRect;
}
void Cchpi::setName(std::string name) {
	this->nameRect = name;
}
void Cchpi::setAge(int age)
{
	this->ageRect = age;
}
Cchpi::Cchpi() : nameRect("E. Sokon"), ageRect(68) {};
Cchpi::Cchpi(std::string name, int age) : nameRect(name), ageRect(age) {};
Cchpi::Cchpi(const Cchpi& temp) : nameRect(temp.nameRect), ageRect(temp.ageRect) {};
Cchpi::~Cchpi() {};
