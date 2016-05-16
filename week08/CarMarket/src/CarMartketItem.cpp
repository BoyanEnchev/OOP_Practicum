#include "CarMarketItem.h"

CarMarketItem :: CarMarketItem(){
	car = Car();
	this->year = 1950;
	this->id;
}
CarMarketItem :: CarMarketItem(Car,int,char*){
}
CarMarketItem :: CarMarketItem(const Car&){
}
CarMarketItem &CarMarketItem :: operator=(const CarMarketItem &other){
	if(this =! &other){
	}
}
CarMarketItem :: ~CarMarketItem(){

}

Car getCar();
int getYear();
char* getId();