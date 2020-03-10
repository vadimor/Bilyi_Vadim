
#include "cooperator.h"
void cooperator::setId(const int id) {
	this->id = id;
}
void cooperator::setAge(const int age) {
	this->age = age;
}
void cooperator::setSalary(const int salary) {
	this->salary = salary;
}
int cooperator::getId()const {
	return this->id;
}
int cooperator::getAge()const {
	return this->age;
}
int cooperator::getSalary()const {
	return this->salary;
}

