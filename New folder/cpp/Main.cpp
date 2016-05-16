#include "stdafx.h"
#include <iostream>
#include <fstream>
#include "WordsFilter.h"
#include "CapitalVowels.h"
#include "FilterChain.h"
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	WordsFilter myFilter("DveHubaviOchi.txt", "NewFile.txt", "dete");
	//myFilter.FilterWith();
	//myFilter.Open("Abe.txt", "NewNewFile.txt");
	//myFilter.setWord("abe");
	//myFilter.FilterWithout();

	CapitalVowels filter2("Abe.txt", "NewNewFile.txt");
	filter2.Done();

	

	
	
	


	//myFilter.ckeckWordin("dete", "DveHubaviOchi.txt", "NewFile.txt");

	

	return 0;
}