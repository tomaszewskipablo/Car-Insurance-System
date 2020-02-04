#pragma once
#include <Windows.h>
#include"CarBrand.h"

CarBrand::CarBrand(std::string name)
{
	this->name = name;
}
int CarBrand::amountOfCars()
{
	return this->car.size();
}
void CarBrand::loadCarsFromFile()
{
	ifstream file;
	string brand;
	string model;
	string priceString;
	int price;
	//string a= "../assets/" + name + ".csv";
	file.open("../assets/" + name + ".csv", ios::in);
	if (file.good()) {
		getline(file, brand, ';');	// download brand name
		getline(file, model);	// download and forget
		getline(file, priceString); // download and forget
		while (getline(file, model, ';'))
		{
			getline(file, priceString);
			car.push_back({ brand,model,atoi(priceString.c_str()) });	// create new car
		}
	}
	file.close();
}
void CarBrand::deleteCars() {
	this->car.clear();
}