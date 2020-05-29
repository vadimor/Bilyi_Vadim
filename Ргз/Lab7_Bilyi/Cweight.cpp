#include "Cweight.h"
void Cweight::setWeigt(const int m) {
	weight = m;
}
int Cweight::getWeigt() const {
	return weight;
}
Cweight::Cweight() : weight(0){}
Cweight::Cweight(const int m): weight(m){}
Cweight::Cweight(const Cweight& m): weight(m.weight){}
