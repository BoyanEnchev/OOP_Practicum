#pragma once 

#include "stdafx.h"
#include <iostream>
#include "Car.h"
using namespace std;

class CarMarketItem{
	Car car;
	int year;
	char* id;
public:
	CarMarketItem();
	CarMarketItem(Car,int,char*);
	CarMarketItem(const Car&);
	Car &operator=(const Car &other);
	~CarMarketItem();

	Car getCar();
	int getYear();
	char* getId();
};