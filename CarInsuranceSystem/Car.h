#pragma once
#include<string>
#include<iostream>
#include<vector>
#include <cmath>	// to count log for carValue

#include<fstream>


using namespace std;

class Car {
	std::string brand;
	std::string model;
	int price;	// new car price
	int productionYear;
	double engineCapacity;
	int mileage;
	int numberOfCollisions;
	bool gasInstalation;

	std::string tabYear[24]={ "2018","2017","2016","2015","2014","2013","2012","2011","2010","2009","2008","2007","2006","2005","2004","2003","2002","2001","2000","1999","1998","1997","1996","1995"};
	std::string tabMileage[11] = { "0 - 20","20 - 30","30 - 40","40 - 60","70 - 100","100 - 130","130 - 160", "160 - 200","200 - 250","250 - 300","over 300" };
	
	int carValue;
 
public:
	Car();
	Car::Car(std::string brand, std::string model, int price);

	// Setters
	void setProductionYear(int productionYear);
	void setEngineCapcity(double engineCapcity);
	void setMileage(int mileage);
	void setNumberOfCollisions(int  numberOfCollisions);
	void setGasInstalation(bool  gasInstalation);

	//Getters
	std::string getBrand();
	std::string getModel();
	int getPrice();
	int getCarValue();
	double getEingineCapacity();
	bool getGasInstalation();
	int getMileage();
	//Getters Tab
	std::string getStringYear();
	std::string getStringMileage();

	
	//functions
	void countCarVaulue();
	void displayCar()const;
	
};