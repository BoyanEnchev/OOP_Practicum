#pragma once 

#include "stdafx.h"
#include <iostream>
#include "Car.h"
#include "CarMarketItem.h"
using namespace std;

class CarMarket{
	CarMarketItem* cars;
	int capacity;
	int carsCount;
	int capital;

public:
	CarMarket();
	CarMarket(CarMarketItem*, int, int ,int);
	CarMarket(const CarMarket&);
	CarMarket &operator=(const CarMarket&);
	~CarMarket();

	void addCar(Car car, char* itemID, int price);
	void sellCar(char*);

};