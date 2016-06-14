#include "stdafx.h"
#include <iostream>
#include "Filter.h"

Filter :: Filter(){
	this->iFile = "";
	this->oFile = "";
}

Filter :: Filter(string iFile, string oFile){
	this->iFile = iFile;
	this->oFile = oFile;
}

void Filter :: done(ifstream &inStream, ofstream &outStream) {
	cout<<"Minah ot tuk"<<endl;
}

void Filter :: info(){
	cout<<"Az sum bashtata";
}