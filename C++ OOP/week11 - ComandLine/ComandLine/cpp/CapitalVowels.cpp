#include <iostream>
#include "CapitalVowels.h"

CapitalVowels :: CapitalVowels() : Filter(){}

CapitalVowels :: CapitalVowels(string _iFileName, string _oFileName) : Filter(_iFileName, _oFileName){}

void CapitalVowels :: done(ifstream &inStream, ofstream &outStream){
	
	string line;

	while(! inStream.eof()){
		getline(inStream, line);

		for(size_t i=0; i<line.length(); ++i){
			if(line.at(i) == 'a' || line.at(i) == 'e' || line.at(i) == 'i' || line.at(i) == 'o' || line.at(i) == 'u' || line.at(i) == 'y')
			{
				line[i] -= 32;
			}
			
		}
		outStream<<line<<"\n"; 

	
		}
	inStream.close();
	outStream.close();
}