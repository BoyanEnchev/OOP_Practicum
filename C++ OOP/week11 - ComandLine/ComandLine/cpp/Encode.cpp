#include <iostream>
#include "Encode.h"
#include "Filter.h"

Encode::Encode() : Filter() {}

Encode::Encode(string iFile, string oFile) : Filter(iFile, oFile)
{
	
}

void Encode::done(ifstream &inStream, ofstream &outStream)
{
	string line;



	while (!inStream.eof()){

		getline(inStream, line);

		for (int i = 0; i < line.length; ++i)
		{
			if (line[i] % 5 == 0){
				line[3] += 200;
			}
			if (line[i] % 5 == 1){
				line[3] += 1000;
			}
			if (line[i] % 5 == 2){
				line[3] += 3000;
			}
			if (line[i] % 5 == 3){
				line[3] += 6000;
			}
			if (line[i] % 5 == 4){
				line[3] += 10000;
			}
		}

	outStream << line << "\n";
	inStream.close();
	outStream.close();
}