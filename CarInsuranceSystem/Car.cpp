#include "Car.h"

Car::Car() {};

Car::Car(std::string brand, std::string model, int price)
{
	this->brand = brand;
	this->model = model;
	this->price = price;
}
// Getters
std::string Car::getBrand()
{
	return this->brand;
}
std::string Car::getModel()
{
	return this->model;
}
int Car::getPrice()
{
	return this->price;
}
int Car::getCarValue()
{
	return this->carValue;
}
double Car::getEingineCapacity() 
{
	return this->engineCapacity;
}
bool Car::getGasInstalation()
{
	return this->gasInstalation;
}
int Car::getMileage()
{
	return this->mileage;
}
//Getters Tab
std::string Car::getStringYear()
{
	return this->tabYear[productionYear];
}
std::string Car::getStringMileage()
{
	return this->tabMileage[mileage];
}
// Setters
void Car::setProductionYear(int productionYear)
{
	this->productionYear = productionYear;
}
void Car::setEngineCapcity(double engineCapacity)
{
	this->engineCapacity = engineCapacity;
}
void Car::setMileage(int mileage)
{
	this->mileage = mileage;
}
void Car::setNumberOfCollisions(int  numberOfCollisions)
{
	this->numberOfCollisions = numberOfCollisions;
}
void Car::setGasInstalation(bool  gasInstalation)
{
	this->gasInstalation = gasInstalation;
}
// functions
void Car::countCarVaulue()										
{
	double mileageRate = (-(log10((pow(mileage+0.4, 1.2) / 180) + 0.013) + 1.0));
	double yearRate = (-(log10((((productionYear+0.5) / 300.0) + 0.013)) + 1.0));
	double numberOFCollisionsRate = 1 - 0.15*numberOfCollisions;
	double gasInstalationRate = 1 + 0.1*gasInstalation;
	carValue = price *( ( yearRate + mileageRate) / 2)*numberOFCollisionsRate*gasInstalationRate + 1500;
}

void Car::displayCar()const
{
	//cout << this->brand << "  " <<this->model << "  " << this->price << "\n";
}
