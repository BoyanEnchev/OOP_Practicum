#include <iostream>
#include <fstream>
#include <string>
#include "Filter.h"
#pragma once
using namespace std;

class Encode : public Filter
{
public:
	string word;
	Encode();
	Encode(string _iFileName, string _oFileName);

	void done(ifstream&, ofstream&);


};