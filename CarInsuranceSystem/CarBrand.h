#pragma once

#include<string>
#include<vector>
#include"Car.h"

class CarBrand{
	//static std::vector<std::string> sortsOfBrands;
	
	std::string name;
	std::vector<Car> car;
public:
	CarBrand() {};
	CarBrand(std::string name);
	//void loadAvaliableBrands(); // file names
	std::string getName() {
		return name;
	}
	Car getCar(int i) {
		return car[i];
	}

	void setName(std::string name)
	{
		this->name = name;
	}
	
	int amountOfCars();
	/*void setCar() {
		return name;
	}*/
	void loadCarsFromFile();
	void deleteCars();
};