#pragma once 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Car{
	char* brand;
	char* model;
	char* colour;
	int year;
public:
	Car();
	Car(char*, char*, char*, int);
	Car(const Car&);
	Car &operator= (const Car &other);
	~Car();

	char* getBrand();
	char*getModel();
	char*getColour();
	int getYear();

	void setBrand(char*);
	void setModel(char*);
	void setColour(char*);
	void setYear(int);

};