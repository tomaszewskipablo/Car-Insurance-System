#pragma once
#include<string>
class NNW {
	std::string companyName;
	double rate=0.03;
	int maxInsuranceAmount=0;
public:
	NNW() {};
	NNW(std::string companyName, double rate);
	//Getters
	int getMaxInsuranceAmount();
	double getRate();
	//Setters
	void setMaxInsuranceAmount(int maxInsuranceAmount);
};