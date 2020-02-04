#include"User.h"
User::User(std::string name, int ageGroup, int carLicenseYear, int numberOfCollisions, std::string city, std::string street, std::string houseNumber)
{
	this->name = name;
	this->ageGroup = ageGroup;
	this->carLicenseYear = carLicenseYear;
	this->numberOfCollisions = numberOfCollisions;
	this->city = city;
	this->street = street;
	this->houseNumber = houseNumber;
}

//Getters
Car User::getCar()
{
	return this->car;
}
string User::getName()
{
	return this -> name;
}
string User::getCity()
{
	return this->city;
}
string User::getStreet()
{
	return this->street;
}
string User::getHouseNumber()
{
	return this->houseNumber;
}
int User::getAgeGroup()
{
	return this->ageGroup;
}
string User::getPhoneNumber()
{
	return this->phoneNumber;
}
//Setters
void User::setName(string  name)
{
	this->name = name;
}
void User::setAgeGroup(int age)
{
	this->ageGroup = age;
}
void User::setCarLicenseYear(int carLicenseYear)
{
	this->carLicenseYear = carLicenseYear;
}
void User::setNumberOfCollisions(int numberOfCollisions)
{
	this->numberOfCollisions = numberOfCollisions;
}
void User::setPhoneNumber(string phone)
{
	this->phoneNumber = phone;
}
void User::setCity(string  city)
{
	this->city = city;
}
void User::setStreet(string street)
{
	this->street = street;
}
void User::setHouseNumber(string houseNumber)
{
	this->houseNumber = houseNumber;
}
void User::setGender(bool isMale)
{
	this->isMale = isMale;
}
void User::setCar(Car car)
{
	this->car = car;
}
// functions
