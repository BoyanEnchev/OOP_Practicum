#include <iostream>
#include <fstream>
#include <string>
#include "Filter.h"

class CapitalVowels : public Filter
{
public:
	CapitalVowels();
	CapitalVowels(string _iFileName, string _oFileName) : Filter(_iFileName, _oFileName){}

	void done(ifstream&, ofstream&);
};