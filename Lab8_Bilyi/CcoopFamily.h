#pragma once
#include "Ccooperator.h"
/*!
	\brief ������ ����� ��������� ������ ����������� ����� Ccooperator
	�������� ����� ���� "���������� �����".

*/
class CcoopFamily :
	public Ccooperator
{
private:
	int amountChild;
public:
	void setAmountChild(const int n)override;
	int getAmountChild() const override;
	void setmPlaceWork(const string a)override;
	string getmPlaceWork()const override;
	string getString() override;
	CcoopFamily();
	CcoopFamily(int amount);
	CcoopFamily(const CcoopFamily& temp);
	~CcoopFamily();

	void input(istream& input) override;

	CcoopFamily& operator= (CcoopFamily& temp);

	bool operator==(CcoopFamily& obj);

};

