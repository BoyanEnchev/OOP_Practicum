#include "Car.h"


Car :: Car(){
	this->brand = NULL;
	this->model = NULL;
	this->colour = NULL;
	this->year = 1950;
}
Car :: Car(char* brand, char* model, char* colour, int year){
	this->brand = new char[strlen(brand)+1];
	strcpy_s(this->brand, strlen(brand)+1, brand);
	this->model = new char[strlen(model)+1];
	strcpy_s(this->model, strlen(model)+1, model);
	this->colour = new char[strlen(colour)+1];
	strcpy_s(this->colour, strlen(colour)+1, colour);
	this->year = year;
}

Car :: Car(const Car& other){
	this->brand = new char[strlen(other.brand)+1];
	strcpy_s(this->brand, strlen(other.brand)+1, other.brand);
	this->model = new char[strlen(other.model)+1];
	strcpy_s(this->model, strlen(other.model)+1, other.model);
	this->colour = new char[strlen(other.colour)+1];
	strcpy_s(this->colour, strlen(other.colour)+1, other.colour);
	this->year = other.year;
}
Car &Car :: operator=(const Car &other){
	if(this != &other){
		delete [] this->brand;
		delete[] this->model;
		delete[] this->colour;

		this->brand = new char[strlen(other.brand)+1];
		strcpy_s(this->brand, strlen(other.brand)+1, other.brand);
		this->model = new char[strlen(other.model)+1];
		strcpy_s(this->model, strlen(other.model)+1, other.model);
		this->colour = new char[strlen(other.colour)+1];
		strcpy_s(this->colour, strlen(other.colour)+1, other.colour);
		this->year = other.year;
	}
	return *this;
}
Car :: ~Car(){
	delete[] brand;
	delete[] model;
	delete[] colour;
}

char* Car :: getBrand(){
	return this->brand;
}
char* Car ::getModel(){
	return this->model;
}
char* Car ::getColour(){
	return this->colour;
}
int Car :: getYear(){
	return this->year;
}

void Car ::setBrand(char*);
void Car ::setModel(char*);
void Car ::setColour(char*);
void Car ::setYear(int);

