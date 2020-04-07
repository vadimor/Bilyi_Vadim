
#include "cooperator.h"
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
void Ccooperator::setKaf(const string kaff){
	this->kaf.setName(kaff);
}
void Ccooperator::setWeight(const int w){
	weight.setWeigt(w);
}
string Ccooperator::getKaf() {
	return kaf.getName();
}
int Ccooperator::getWeight() {
	return weight.getWeigt();
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
Ccooperator::Ccooperator() :id(0), age(0), salary(0), weight(10),kaf("SOKOL"),name("Ivan") {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id<<"\n";

}
Ccooperator::Ccooperator(const Ccooperator& a) :id(a.id), age(a.age), salary(a.salary), weight(a.weight), kaf(a.kaf), name(a.name) {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id<<"\n";
}; 
Ccooperator::Ccooperator(int a , int b , int c ,int d, const string i ,const string f) : id(a), age(b), salary(c), weight(d),kaf(i),name(f) {
	cout << "\nБыл вызван конструктор по умолчанию в обекте с id: " << id<<"\n";
};
