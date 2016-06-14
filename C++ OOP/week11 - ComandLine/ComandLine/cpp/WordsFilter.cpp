#include <iostream>
#include "WordsFilter.h"


WordsFilter :: WordsFilter() : Filter() {}

WordsFilter :: WordsFilter(string iFile, string oFile, string word = NULL) : Filter(iFile, oFile)
{
	this->word = word;
}

void WordsFilter :: done(ifstream &inStream, ofstream &outStream)
{	
	string line;

	

	while(! inStream.eof()){
		
		getline(inStream, line);
		
		if( line.find(word) != string::npos){
			outStream<<line<<"\n";
		}
	}
	inStream.close();
	outStream.close();
	/*
	string i = "Original";
	string o = "New";

	if(inStream.is_open()) inStream.close();
	if(outStream.is_open()) outStream.close();

	inStream.open(this->iFile.c_str());
	outStream.open(this->oFile.c_str());

	string line;

	while(! inStream.eof())
	{

		getline(inStream, line);

		if( line.find(this->word) != string::npos)
		{
			outStream<<line<<"\n";
		}
	}
	inStream.close();
	outStream.close();
	cout<<"Done!";*/


}

void WordsFilter :: info(){
	cout<<"Az sum naslednika";
}

string WordsFilter :: getWord()
{
	return this->word;
}
void WordsFilter :: setWord(string word)
{
	this->word = word;
}
