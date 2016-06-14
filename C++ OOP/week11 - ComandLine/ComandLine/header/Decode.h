#include <iostream>
#include <fstream>
#include <string>
#include "Filter.h"
#pragma once
using namespace std;

class Decode : public Filter
{
public:
	string word;
	Decode();
	Decode(string _iFileName, string _oFileName);

	void done(ifstream&, ofstream&);


};