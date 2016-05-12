// Filter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Filter.h"
#include <fstream>


void Filter:: ckeckWordin(string word, string ifile, string ofile){
	ifstream in_file(ifile, ios::in);
	ofstream out_file(ofile, ios::out); 

	string line;

	while(! in_file.eof()){
		getline(in_file,line);

		/*for(int i=0; i<line.length(); ++i){
			if(line.at(i) == 'a' || line.at(i) == 'e' || line.at(i) == 'i' || line.at(i) == 'o' || line.at(i) == 'u' || line.at(i) == 'y')
			{
				line[i] -= 32;
			}
			
		}
		out_file<<line<<"\n";*/

		if( line.find(word) != string::npos){
			out_file<<line<<"\n";
		}
	}
}
