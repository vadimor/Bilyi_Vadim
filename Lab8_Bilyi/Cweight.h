
#pragma once
#include <iostream>
/*!
	\brief Данный класс являеться полем класа Ccooperator
	Демонстрирует композицию

*/
class Cweight
{
private:
	int weight;
public:
	void setWeigt(const int m);
	int getWeigt() const;
	Cweight();
	Cweight(const int m);
	Cweight(const Cweight& m);
	virtual ~Cweight()= default;
};

