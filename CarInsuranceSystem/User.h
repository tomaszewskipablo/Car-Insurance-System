#pragma once
#include<string>
#include<iostream>

#include"car.h"
using namespace std;

class User {
	std::string name;
	int ageGroup;
	int carLicenseYear;
	int numberOfCollisions;
	std::string city;
	std::string street;
	std::string houseNumber;
	bool isMale;
	std::string phoneNumber;

	std::string tabAge[5] = { "16 - 18","19 - 24","25 - 35","35 - 60","60 or more" };
	std::string tabCarLicenceYera[4] = { "2014","2009","2004","erlier" };
		

	Car car;
public:
	// Constructors
	User() {};
	User(std::string name, int ageGroup, int carLicenseYear, int numberOfCollisions, std::string city, std::string street, std::string houseNumber);
	
	//Getters
	Car getCar();
	string getName();
	string getCity();
	string getStreet();
	string getHouseNumber();
	string getPhoneNumber();
	int getAgeGroup();
	//Setters
	void setName(string  name);
	void setAgeGroup(int age);
	void setCarLicenseYear(int carLicenseYear);
	void setNumberOfCollisions(int numberOfColissions);
	void setPhoneNumber(string phone);
	void setCar(Car car);
	
	void setCity(string  city);
	void setStreet(string street);
	void setHouseNumber(string houseNumber);
	void setGender(bool isMale);

	// functions
	
};