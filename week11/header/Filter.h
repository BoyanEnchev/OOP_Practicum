#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#pragma once
using namespace std;

class Filter
{
private:
	ifstream ifile;
	ofstream ofile;
public:
	Filter(const Filter &other);
	Filter &operator=(const Filter &other);

	void ckeckWordin(string word, string ifile, string ofile);
};