#include <iostream>
#include <fstream>
#include <string>
#include "Filter.h"
#pragma once
using namespace std;

class WordsFilter : public Filter
{
	
public:
	string word;
	WordsFilter();
	WordsFilter(string _iFileName, string _oFileName, string word);

	void done(ifstream&, ofstream&);
	void info();

	string getWord();
	void setWord(string word);
};
