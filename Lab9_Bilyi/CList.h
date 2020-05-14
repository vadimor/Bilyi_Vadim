#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <regex>
#include <assert.h>
using std::regex_match;
using std::regex;
using std::ifstream;
using std::ofstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;
using std::exception;
using std::istringstream;
using std::stringstream;


class CList
{
private:
	int size1;
	int* size2;
	float* mass1;
	int** mass2;
	
public:
	int getSize1();
	float* getMass1();
	int** getMass2();
	string nameFile();
	void readFile(string fname);
	void mean();
	void writeFile(string fname);
	int& operator[] (int i);
	void cycle();
	void end();
	CList();
	~CList();
};

