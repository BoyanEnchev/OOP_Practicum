#include "CarMarket.h"
#include "CarMarketItem.h"

CarMarket :: CarMarket(){
	cars = new CarMarketItem[16];
	this->capacity = 16;
	this->carsCount = 0;
	this->capital = 100000;
}
CarMarket :: CarMarket(CarMarketItem* cars, int capacity, int count ,int capital){
	this->cars = new CarMarketItem[capacity];
	for(int i=0; i<count; ++i){
		this->cars[i] = cars[i];
	}
	this->carsCount = carsCount;
	this->capacity = capacity;
	this->capital = capital;
}

CarMarket :: CarMarket(const CarMarket& other){
	this->cars = new CarMarketItem[other.capacity];
		for(int i=0; i<other.carsCount; ++i){
			this->cars[i] = other.cars[i];
		}
		this->carsCount = carsCount;
		this->capacity = other.capacity;
		this->capital = other.capital;
}
CarMarket &CarMarket :: operator=(const CarMarket& other){
	if(this != &other){
		delete[] cars;
		this->cars = new CarMarketItem[other.capacity];
		for(int i=0; i<other.carsCount; ++i){
			this->cars[i] = other.cars[i];
		}
		this->carsCount = carsCount;
		this->capacity = other.capacity;
		this->capital = other.capital;
	}
}
CarMarket :: ~CarMarket(){
	delete[] cars;
}

void CarMarket :: addCar(Car car, char* itemID, int price){

	if(carsCount == capacity){                                          //resize
		CarMarketItem* buffer = new CarMarketItem[capacity];
		for(int i=0; i < capacity; i++) buffer[i] = this->cars[i];
		delete[] cars;
		cars= new CarMarketItem[capacity*2];
		capacity *= 2;
		for(int i=0; i < capacity; i++) cars[i] = buffer[i];
	}

	if(capital > price){
		CarMarketItem item(car, price, itemID);
		cars[this->carsCount] = item;
		carsCount++;
		capital -= price;
	}
}
void CarMarket :: sellCar(char*){

}


