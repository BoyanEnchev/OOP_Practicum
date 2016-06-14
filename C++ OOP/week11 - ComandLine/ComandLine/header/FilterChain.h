#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Filter.h"
#include "WordsFilter.h"
using namespace std;

class FilterChain
{
public:

	static ifstream* inStream;
	static ofstream* outStream;

	static void openStreams(string _inStream, string _outStream);

	static Filter** filters;
	static int countFilters;

	static void done(Filter *_filter);

	static void done(int index);
	
	static void doneByALL();

	static void addFilter(Filter _filter);
};

