#include <iostream>
#include "stdafx.h"
#include "Filter.h"
#pragma once
using namespace std;

class CapitalVowels : public Filter {

public:
	CapitalVowels();
	CapitalVowels(string, string);
	void Done();
};