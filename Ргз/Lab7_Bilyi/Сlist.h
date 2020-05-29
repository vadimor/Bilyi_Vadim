
#pragma once
#include "Ccooperator.h"
#include "CcoopK.h"
#include "CcoopFamily.h"
#include <iostream>
#include <fstream>
#include <regex>
#include <ctype.h>
typedef bool (Fun)(const int&, const int&);
/*!
	\brief ������ ����� ��������� �������
	�������� � ������� CcoopK � CcoopFamily

*/
class Clist
{ 
private:
	size_t size;
	Ccooperator** mass;
public:
	/*!
��������� a>b;

*/
	static bool sortAsc(const int& a, const int& b);
	/*!
��������� a>b;

*/
	static bool sortDesc(const int& a, const int& b);
	/*!
��������� ����� �������
\param[in] el ������ �� �������
*/
	Ccooperator** addNewEl(Ccooperator* el);
	/*!
������� �������
\param[in] n ����� ��������
*/
	Ccooperator** delEl(size_t n);
	/*!
���������� �������
\param[in] n ����� ��������
*/
	Ccooperator* getEl(size_t n);
	/*!
������� ������� ���� CcoopK
*/
	Ccooperator* creatElK();
	/*!
������� ������� ���� CcoopFamily
*/
	Ccooperator* creatElF();
	/*!
���������� ���������� ���������
*/
	int getSize();
	/*!
��������� ������� � ����� � ��������� ��� ������� � ����������
\param[in] a �������� ��� ��������
*/
	void addWhithStr(char a);
	/*!
��������� ����� �� ������� ����������
\param[in] sprz �� ������ ���� �����������
\param[in] s ������� ����������
*/
	void sortMass(string sprz, Fun s);
	/*!
	������� ��� ������ ������
	*/
	void EndEnd();
	/*!
	������� �� ����� ��� ��������
*/
	void showAll();
	/*!
������� ������
\param[in] n ������ ������
*/
	void creatMass(size_t n);
	/*!
��������� ������ � �����
\param[in] fileName ��� �����
*/
	void readFile(string fileName);
	/*!
	���������� ������ � ���� 
\param[in] fileName ��� �����
*/
	void writeToFile(string fileName);
	/*!
������� ������ ������� ����� ����� Cchpi
*/
	void End();
	/*!
	����������� �� ���������
	*/
	Clist();
	/*!
	����������� � �����������
	*/
	Clist(int n, Ccooperator** m);
	/*!
	����������� �����������
	*/
	Clist(Clist& l);
	/*!
	����������
	*/
	virtual ~Clist( )= default;
	/*!
	����� �������� 
	*/
	void screachEl();
	/*!
	������ �������� ��������
	*/
	void sredSal();
};

