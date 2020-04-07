#pragma once
#include "CcoopK.h"
class ListK
{
private:
	int size;
	CcoopK* mass;
public:
	void Creatmass(int n);
	CcoopK& getCcoopK(int n);
	void End();
	~ListK();
};

