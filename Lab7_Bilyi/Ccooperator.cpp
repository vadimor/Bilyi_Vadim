#include "Ccooperator.h"

void Ccooperator::setName(string name) {
	this->name = name;
}
string Ccooperator::getName() {
	return this->name;
}
void Ccooperator::setId(const int id) {
	this->id = id;
}
void Ccooperator::setAge(const int age) {
	this->age = age;
}
void Ccooperator::setRect(Cchpi* rect)
{
	this->rect = rect;
}
void Ccooperator::setWeight(Cweight w) {
	this->weight = w;
}
void Ccooperator::delRect()
{
	if(rect)
	if(rect->getAge()>=0)
		delete rect;
}
Cchpi* Ccooperator::getRect() {
	return rect;
}
Cweight Ccooperator::getWeight() {
	return weight;
}
void Ccooperator::setSalary(const int salary) {
	this->salary = salary;
}
int Ccooperator::getId()const {
	return this->id;
}
int Ccooperator::getAge()const {
	return this->age;
}
int Ccooperator::getSalary()const {
	return this->salary;
}
Ccooperator::Ccooperator() :id(0), age(0), salary(0), weight(0), rect(NULL), name("Ivan") {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id << "\n";

}
Ccooperator::Ccooperator(const Ccooperator& a) : id(a.id), age(a.age), salary(a.salary), weight(a.weight), rect(a.rect), name(a.name) {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id << "\n";
}
Ccooperator::Ccooperator(int a, int b, int c, const string f, Cweight d, Cchpi* i) : id(a), age(b), salary(c), weight(d), rect(i), name(f) {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id << "\n";
}