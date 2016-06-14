#include <iostream>
#include <fstream>
#include <string>
#pragma once
using namespace std;

class Filter
{

public:
	string iFile;
	string oFile;
	Filter();
	Filter(string _iFileName, string _oFileName);
	
	virtual void done(ifstream&, ofstream&);
	
	virtual void info();
};
