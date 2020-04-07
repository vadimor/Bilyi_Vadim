/*!
	\brief ������ ����� ��������� ����� ����� Ccooperator
	������������� ����������

*/
#pragma once
#include <sstream>
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Cchpi.h"
#include "Cweight.h"
#include <clocale>
using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::ifstream;
using std::stringstream;
using std::ofstream;
/*!
	\brief ������ ����� �������� �����������
	�������� �������� ������ �������.
	����� ���� "����","�������","��������","���","������","���"

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
������ �����
*/
		virtual void setName(string name)final;
		/*!
������ ����
*/
		virtual void setId(const int id)final;
		/*!
������ ��������
*/
		virtual void setAge(const int age)final;
		/*!
������ ��������
*/
		virtual void setSalary(const int salary)final;
		/*!
������ �������
*/
		virtual void setRect(Cchpi* rect)final;
	
		/*!
������ ����
*/
		virtual void setWeight(Cweight w)final;
		/*!
������� Cchpi
*/
		virtual void delRect()final;
		/*!
����� ����
*/
		virtual int getId()const final;
		/*!
����� �������
*/
		virtual int getAge()const final;
		/*!
����� ��������
*/
		virtual int getSalary()const final;
		/*!
����� �����
*/
		virtual  string getName()final;
		/*!
����� �������
*/
		virtual Cchpi* getRect()final;
		/*!
����� ����
*/
		virtual Cweight getWeight()final;
		/*!
���������� ��� ������ ������� �������
*/
		virtual string getString() = 0;
		/*!
������ ����� ������
*/
		virtual void setmPlaceWork(const string a)= 0;
		/*!
����� ����� ������
*/
		virtual string getmPlaceWork()const = 0;
		/*!
������ ���������� �����
*/
		virtual void setAmountChild(const int n) = 0;
		/*!
����� ���������� �����
*/
		virtual int getAmountChild() const=0;
		/*!
	����������� �� ���������
	*/
		Ccooperator();
		/*!
	����������� � �����������
	*/
		Ccooperator(int a, int b, int c, const string f, Cweight d, Cchpi* i);
		/*!
	����������� �����������
	*/
		Ccooperator(const Ccooperator& a);
		/*!
	����������
	*/
		virtual ~Ccooperator() = default; 
	};

