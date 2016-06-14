#include <iostream>
#include "Decode.h"
#include "Filter.h"

Decode::Decode() : Filter() {}

Decode::Decode(string iFile, string oFile) : Filter(iFile, oFile)
{

}

void Decode::done(ifstream &inStream, ofstream &outStream)
{
	string line;



	while (!inStream.eof()){

		getline(inStream, line);

		for (int i = 0; i < line.length; ++i)
		{
			if (line[i] >= 265 ||line[i] <=322){
				line[3] -= 200;
			}
			if (line[i] >= 1065 || line[i] <= 1122){
				line[3] -= 1000;
			}
			if (line[i] >= 3065 || line[i] <= 3122){
				line[3] -= 3000;
			}
			if (line[i] >= 6065 || line[i] <= 6122){
				line[3] -= 6000;
			}
			if (line[i] >= 10065 || line[i] <= 10122){
				line[3] -= 10000;
			}
		}

		outStream << line << "\n";
		inStream.close();
		outStream.close();
	}