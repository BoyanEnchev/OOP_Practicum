#include <iostream>
#include "stdafx.h"
#include "Filter.h"
#pragma once
using namespace std;

class WordsFilter : public Filter {
private:
	string word;
public:
	WordsFilter();
	WordsFilter(string, string, string);

	void FilterWith();
	void FilterWithout();

	string getWord();
	void setWord(string);
};