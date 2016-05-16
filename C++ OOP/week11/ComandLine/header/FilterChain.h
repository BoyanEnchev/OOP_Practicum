#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Filter.h"
#pragma once
using namespace std;

/*class FilterChain
{
private:
	Filter filters[100];
	int counter;
public:
	FilterChain();
	FilterChain(Filter*, int counter);

	void operator+=(Filter &other);
	FilterChain operator|(Filter &other);
	FilterChain operator+(FilterChain &other);
	Filter operator[](int index);

	int getCounter();
	
};
*/