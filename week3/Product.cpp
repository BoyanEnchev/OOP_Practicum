// Product.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstring>
using namespace std;

enum Type { WAFFLE, WATER, COSMETIC, PAPER, FIZZY };

struct Product{

	Type type;
	char* name;
	char barcode[13];
	double price;
	int id;

	void Create(Type t, char* Name, char* Barcode, double Price, int Id){

		name = new char[strlen(Name)+1];
		type = t;
		strcpy_s(name, strlen(Name)+1, Name);
		price = Price;
		strcpy_s(barcode, Barcode);
	}

};

struct Market{

	char* nameM;
	Product *arrProducts;
	int countProducts;
	int capacity;

	void Create(char* Name, Product *arrP, int cap){
		nameM = new char[strlen(Name)+1];
		strcpy_s(nameM, strlen(Name)+1, Name);
		arrProducts = arrP;
		countProducts = 0;
		capacity = cap;
	}

	void addProduct(Product product){
		if(countProducts < capacity){
		arrProducts[countProducts] = product;
		countProducts++;
		}
		else cout<<"You have no space to adding products in the Market!";
	}
	
};

char* LowestPriceTypeProduct(Market* arrMarkets, int size, Type type){
	double tempPrice = arrMarkets[0].arrProducts[0].price;
	Market cheepMarket;
	
	
	for(int i=0; i<size; i++){
		for(int j=0; i<arrMarkets[j].countProducts; j++){
			if(arrMarkets[i].arrProducts[j].type == type){
				if(arrMarkets[i].arrProducts[j].price < tempPrice) 
				 {
					 tempPrice = arrMarkets[i].arrProducts[j].price;
					 cheepMarket.nameM = new char[strlen(arrMarkets[i].nameM)+1];
					 strcpy_s(cheepMarket.nameM,strlen(arrMarkets[i].nameM+1),arrMarkets[i].nameM);
				 }	
		 }
	}
		
}
	return cheepMarket.nameM;
}

int _tmain(int argc, _TCHAR* argv[])
{
	Product CocaCola, Morena, WaterMihalkovo, WaterBankya, WaterDevin;
	Product  arrMarket[100];

	
	CocaCola.Create(FIZZY, "Coca Cola", "789434832432", 1.2, 761234);
	Morena.Create(WAFFLE, "Morena", "789876543432", 0.5, 721742);
	WaterMihalkovo.Create(WATER, "Mihalkovo", "439434832432", 1.2, 723124);
	WaterBankya.Create(WATER, "Bankya", "789434832432", 0.7, 761234);
	WaterDevin.Create(WATER, "Morena", "119876543432", 0.8, 721742);

	


	
	
	Market Billa, Kaufland, Lidl;

	Billa.Create("Billa", arrMarket, 30);
	Billa.addProduct(CocaCola);
	Billa.addProduct(Morena);
	Billa.addProduct(WaterMihalkovo);

	Kaufland.Create("Kaufland", arrMarket, 100);
	Kaufland.addProduct(WaterDevin);
	Kaufland.addProduct(CocaCola);

	Lidl.Create("Lidl", arrMarket, 50);
	Lidl.addProduct(WaterBankya);
	Lidl.addProduct(CocaCola);

	

	Market arrMarkets[100];
	arrMarkets[0] = Kaufland;
	arrMarkets[1] = Billa;
	arrMarkets[2] = Lidl;

	cout<<LowestPriceTypeProduct(arrMarkets,3,WATER);

	delete[] Lidl.nameM;
	delete[] Kaufland.nameM;
	delete[] Billa.nameM;
	delete[] WaterBankya.name;
	delete[] CocaCola.name;
	delete[] WaterDevin.name;
	delete[] WaterMihalkovo.name;
	delete[] Morena.name;
	
	return 0;
}

