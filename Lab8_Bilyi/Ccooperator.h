/*!
	\brief Данный класс являеться полем класа Ccooperator
	Демонстрирует композицию

*/
#pragma once
#include <sstream>
#include <fstream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Cchpi.h"
#include "Cweight.h"
#include <clocale>
#include <Windows.h>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::stringstream;
using std::ofstream;
using std::ostream;
using std::istream;
using std::ifstream;
using std::feof;
/*!
	\brief Данный класс является абстрактным
	Является основным класом проекта.
	Имеет поля "Айди","Возраст","Зарплата","Имя","Ректор","Вес"

*/
class Ccooperator
	{
	protected:
		int id, age, salary;
		string name;
		Cchpi* rect;
		Cweight weight;
	public:
		
		/*!
Сеттер имени
*/
		virtual void setName(string name)final;
		/*!
Сеттер айди
*/
		virtual void setId(const int id)final;
		/*!
Сеттер возраста
*/
		virtual void setAge(const int age)final;
		/*!
Сеттер зарплаты
*/
		virtual void setSalary(const int salary)final;
		/*!
Сеттер ректора
*/
		virtual void setRect(Cchpi* rect)final;
	
		/*!
Сеттер веса
*/
		virtual void setWeight(Cweight w)final;
		/*!
Очищает Cchpi
*/
		virtual void delRect()final;
		/*!
Гетер айди
*/
		virtual int getId()const final;
		/*!
Гетер возрата
*/
		virtual int getAge()const final;
		/*!
Гетер зарплаты
*/
		virtual int getSalary()const final;
		/*!
Гетер имени
*/
		virtual  string getName()final;
		/*!
Гетер ректора
*/
		virtual Cchpi* getRect()final;
		/*!
Гетер веса
*/
		virtual Cweight getWeight()final;
		/*!
Возвращает все данные обьекта строкой
*/
		virtual string getString() = 0;
		/*!
Сеттер места роботы
*/
		virtual void setmPlaceWork(const string a)= 0;
		/*!
Гетер места роботы
*/
		virtual string getmPlaceWork()const = 0;
		/*!
Сеттер количества детей
*/
		virtual void setAmountChild(const int n) = 0;
		/*!
Гетер количества детей
*/
		virtual int getAmountChild() const=0;
		/*!
	Конструктор по умолчанию
	*/
		Ccooperator();
		/*!
	Конструктор с параметрами
	*/
		Ccooperator(int a, int b, int c, const string f, Cweight d, Cchpi* i);
		/*!
	Конструктор копирования
	*/
		Ccooperator(const Ccooperator& a);

		/*!
	Деструктор
	*/
		virtual ~Ccooperator() = default; 

		virtual void input(istream& input) = 0;

		friend ostream& operator<< (ostream& output,  Ccooperator& obj);

		friend ofstream& operator<< (ofstream& output, Ccooperator& obj);

		virtual bool operator==(Ccooperator& obj);

		Ccooperator& operator= (Ccooperator& temp);

		friend istream& operator>> (istream& input, Ccooperator& obj);
	};

