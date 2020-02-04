#include"NNW.h"

NNW::NNW(std::string companyName, double rate)
{
	this->companyName = companyName;
	this->rate = rate;
}
//Getters
int NNW::getMaxInsuranceAmount()
{
	return this->maxInsuranceAmount;
}
double NNW::getRate()
{
	return this->rate;
}
//Setters
void NNW::setMaxInsuranceAmount(int maxInsuranceAmount)
{
	this->maxInsuranceAmount = maxInsuranceAmount;
}