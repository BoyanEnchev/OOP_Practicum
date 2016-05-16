// Dictionary_probno.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

const size_t initCap = 64;

class Dictionary{
private:
	char** bgWords;
	char** enWords;
	size_t capacity;
	size_t wordsCount;

public:
	Dictionary();
	Dictionary(const char** eWords, const char** bWords, size_t n);
	~Dictionary();
	void addWord(const char*bg, const char*en);
	void removeWord(const char* word);
};

Dictionary :: Dictionary(){
	capacity = initCap;
	bgWords = new char*[capacity];
	enWords = new char*[capacity];
	wordsCount = 0;
}
Dictionary :: Dictionary(const char** eWords, const char** bWords, size_t n){
	capacity = 2*n;
	bgWords = new char*[capacity];
	enWords = new char*[capacity];
	for(size_t i=0; i<n; ++i){
		enWords[i] = new char[strlen(eWords[i])+1];
		bgWords[i] = new char[strlen(bWords[i])+1];
		strcpy_s(enWords[i], strlen(eWords[i])+1, eWords[i]);
		strcpy_s(bgWords[i], strlen(bWords[i])+1, bWords[i]);
		wordsCount = n;
	}
}
Dictionary :: ~Dictionary(){
	for(size_t i=0; i<wordsCount; ++i){
		delete[] enWords[i];
		delete[] bgWords[i];
	}
	delete[] enWords;
	delete[] bgWords;
}
void Dictionary :: addWord(const char*bg, const char*en){
		if(wordsCount > capacity){
			cout<<"Not Enough space"<<endl;
			return; 
		}
		bgWords[wordsCount] = new char[strlen(bg)+1];
		enWords[wordsCount] = new char[strlen(en)+1];
		strcpy_s(bgWords[wordsCount], strlen(bg)+1, bg);
		strcpy_s(enWords[wordsCount], strlen(en)+1, en);
		++wordsCount;;
	}
void Dictionary ::removeWord (const char* word){
	for(size_t i=0; i<wordsCount; ++i){
		if( strcmp(bgWords[i], word) == 0 || strcmp(enWords[i], word) == 0 ){
			delete[] bgWords[i];
			delete[] enWords[i];
			for(size_t j = i; j<wordsCount-1; ++j){
				bgWords[j] = bgWords[j+1];
				enWords[j] = enWords[j+1];
			}
	/*      bgWords[i] = bgWords[wordsCount-1];
			bgWords[wordsCount-1] = nullptr;
			enWords[i] = enWords[wordsCount-1];
			delete[] enWords[wordsCount-1];
			enWords[wordsCount-1] = nullptr;       */
		}
	}
}


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

