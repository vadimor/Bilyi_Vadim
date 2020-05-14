
#include "CList.h"

int CList::getSize1()
{
	return size1;
}

float* CList::getMass1()
{
	return mass1;
}

int** CList::getMass2()
{
	return mass2;
}

string CList::nameFile()
{
	string fname;
	cout << "\nIf you want exit program, please enter \\exit\nEnter file name: ";
	cin >> fname;
	cout << endl;
	return fname;
}

void CList::readFile(string fname)
{
	stringstream ss;
	string line;
	ifstream file;
	int n;

	file.open(fname);
	if (!file.is_open()) {
		throw exception("file is not open");
	}
	getline(file,line);
	if (!file.is_open()) {
		return;
	}
	ss << line;
	ss >> size1;
	ss.clear();
	mass2 = new int* [size1];
	int i = 0;
	size2 = new int[size1];
	while (getline(file, line)&&i<size1)
	{
		ss << line;
		ss >> n;
		size2[i]=n;
		mass2[i] = new int[n];
		for (int j = 0; j < n; j++) {
			ss >> mass2[i][j];
		//	cout << mass2[i][j]<<" ";
		}
		ss.clear();
		i++;
	}	
	if (i != size1) {
		throw exception("file is not correct");
	};
	
	file.close();
}

void CList::mean()
{
	
	mass1 = new float[size1];
	for (int i = 0; i < size1; i++)
	{
		mass1[i] = 0;
		for (int j = 0; j < size2[i]; j++) {

			mass1[i]+=mass2[i][j];
		}
		if (size2[i] <= 0)
			mass2[i] = 0;
		mass1[i] = mass1[i]/(float)size2[i];
		//cout << mass1[i]<< " ";
	}

}
void CList::writeFile(string fname)
{

	stringstream ss;
	ofstream file;
	file.open(fname);
	if (!mass2||!mass1||!size2)
	{
		throw exception("mass is NULL");
	}

	file.exceptions(ofstream::badbit | ofstream::failbit);
	if (!file.is_open()) {
		throw exception("file is not open");
	}
	if (!file.is_open()) {
		return;
	}
	for (int i = 0; i < size1; i++)
	{
		ss<<mass1[i]<<" ";
	}
	file << ss.str();
}

int& CList::operator[](const int i)
{
	if (i > size1 || i < 0)
	{
		throw exception("Error! There is no such element in array");
	}
	return *mass2[i];
}
void CList::end() {
	delete[] size2;
	delete[] mass1;
	for (size_t i = 0; i < size1; i++)
		delete[] mass2[i];
	delete[] mass2;
	size1 = 0;
}

void CList::cycle()
{
	string fname;
	string exit = "\\exit";
	bool flag = true;
	while (flag)
	{
		try
		{

			while (fname != exit) {
				if (size1>0) {
					end();
				}
				fname = nameFile();
				if (fname == exit)
					return;
				readFile(fname);
				mean();
				fname = nameFile();
				if (fname == exit)
					return;
				writeFile(fname);
			}
			end();
			flag = false;
		}
		catch (const exception& ex)
		{
			cout << ex.what();
		}
		
	}
}
CList::CList() :mass2(NULL), mass1(NULL), size1(0), size2(NULL)
{
}


CList::~CList()
{
}
