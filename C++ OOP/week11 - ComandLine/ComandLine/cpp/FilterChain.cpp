#include "FilterChain.h"
#include "Filter.h"
#include <iostream>


int FilterChain::countFilters = 0;
Filter** FilterChain::filters = new Filter*[10];

void FilterChain :: addFilter(Filter _filter)
{
	//filters[countFilters] = _filter;
}

void FilterChain :: openStreams(string _inStream, string _outStream){
	ifstream* _in = new ifstream(_inStream);
	ofstream* _out = new ofstream(_outStream);
	
	FilterChain::inStream = _in;
	FilterChain::outStream = _out;
}

ifstream* FilterChain::inStream;
ofstream* FilterChain::outStream;

void FilterChain :: done(Filter* _filter)
{
	_filter->done(*inStream, *outStream);
}

void FilterChain :: done(int index){
	
	FilterChain::filters[index]->done(FilterChain::inStream&, FilterChain::outStream&);
}



void FilterChain::doneByALL()
{

}

