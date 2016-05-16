#include "stdafx.h"
#include "WordsFilter.h"

WordsFilter :: WordsFilter() : Filter(){}

WordsFilter :: WordsFilter(string _ifile, string _ofile, string word) : Filter(_ifile, _ofile){
	this->word = word;
}

void WordsFilter :: FilterWith(){
	string line;

	while(! this->ifile.eof()){

		getline(this->ifile, line);

		if( line.find(word) != string::npos){
			this->ofile<<line<<"\n";
		}
	}
	ifile.close();
	ofile.close();
}

void WordsFilter :: FilterWithout(){
	string line;
	
	while(! this->ifile.eof()){

		getline(this->ifile, line);

		if( line.find(word) == string::npos){
			this->ofile<<line<<"\n";
		}
	}
	ifile.close();
	ofile.close();
}

string WordsFilter :: getWord(){
	return this->word;
}
void WordsFilter :: setWord(string word){
	this->word = word;
}