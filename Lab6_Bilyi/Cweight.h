#pragma once
#include <iostream>
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
	~Cweight();
};

