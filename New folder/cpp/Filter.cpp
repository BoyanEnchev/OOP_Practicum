// Filter.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Filter.h"
#include <fstream>

Filter:: Filter(){
	this->iFileName="";
	this->oFileName="";
}

Filter :: Filter(string iFileName, string oFileName){
	ifile.open(iFileName);
	ofile.open(oFileName);
	this->iFileName = iFileName;
	this->oFileName = oFileName;
}
	
void Filter :: Open(string iFileName, string oFileName){
	if(ifile.is_open()){
		Close();
	}
	ifile.open(iFileName);
	ofile.open(oFileName);
	this->iFileName = iFileName;
	this->oFileName = oFileName;
}
void Filter :: Close(){
	ifile.close();
	ofile.close();
	this->iFileName = "";
	this->oFileName = "";
}


