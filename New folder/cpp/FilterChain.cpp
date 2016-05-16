#include "stdafx.h"
#include "FilterChain.h"

/*FilterChain:: FilterChain(){
	counter = 0;
}

FilterChain:: FilterChain(Filter* others, int counter){
	this->counter = counter;
	for(int i=0; i<counter; ++i){
		this->filters[i] = others[i];
	}
}

void FilterChain :: operator+=(Filter &other){
	this->filters[this->counter] = other;
	this->counter++;
}
FilterChain FilterChain :: operator|(Filter &other){
	FilterChain newFChain;
	newFChain += other;
	return newFChain;
}
FilterChain FilterChain :: operator+(FilterChain &other){
	FilterChain newFChain;

	for(int i=0; i<this->counter; ++i){
		newFChain[i] = this->filters[i];
	}
	int otherCounter = 0;
	for(int i = this->counter; i < this->counter + other.counter; ++i){
		newFChain[i] = other.filters[otherCounter];
		otherCounter++;
	}
}
Filter FilterChain :: operator[](int index){
	return filters[index];
}

int FilterChain :: getCounter(){
	return counter;
}
*/