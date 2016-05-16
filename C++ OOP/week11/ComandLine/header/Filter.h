#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#pragma once
using namespace std;

class Filter
{
protected:
	ifstream ifile;
	ofstream ofile;
	string iFileName;
	string oFileName;
public:
	Filter();
	Filter(string, string);
	void Open(string, string);
	void Close();

};