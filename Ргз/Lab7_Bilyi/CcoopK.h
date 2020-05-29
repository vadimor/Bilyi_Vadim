#pragma once
#include "Ccooperator.h"
/*!
	\brief Данный класс являеться наследником класа Ccooperator
	Имеет дополнительное поле "Место роботы"

*/
class CcoopK :
	public Ccooperator
{
private:
	string mPlaceWork;
public:
	void setmPlaceWork(const string a)override;
	string getmPlaceWork()const override;
	string getString() override;
	void setAmountChild(const int n)override;
	int getAmountChild() const override;
	CcoopK();
	CcoopK(string a);
	CcoopK(const CcoopK& a);
	~CcoopK();
};

