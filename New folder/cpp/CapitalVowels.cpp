#include "stdafx.h"
#include "CapitalVowels.h"

CapitalVowels :: CapitalVowels() : Filter(){}

CapitalVowels:: CapitalVowels(string iFileName, string oFileName) : Filter(iFileName, oFileName){}

void CapitalVowels:: Done(){
	
	string line;

	while(! this->ifile.eof()){
		getline(this->ifile, line);

		for(size_t i=0; i<line.length(); ++i){
			if(line.at(i) == 'a' || line.at(i) == 'e' || line.at(i) == 'i' || line.at(i) == 'o' || line.at(i) == 'u' || line.at(i) == 'y')
			{
				line[i] -= 32;
			}
			
		}
		this->ofile<<line<<"\n"; 

	
		}
	ifile.close();
	ofile.close();
}