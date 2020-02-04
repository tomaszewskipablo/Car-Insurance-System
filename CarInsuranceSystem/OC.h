#pragma once
#include<string>
class OC{
	std::string companyName;
	double rate;	// % of car value to pay
public:
	OC() {};
	OC(std::string companyName, double rate);

	double OC::getRate();
};