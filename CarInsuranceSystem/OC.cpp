#include"OC.h"
OC::OC(std::string companyName, double rate)
{
	this->companyName = companyName;
	this->rate = rate;
}
double OC::getRate()
{
	return rate;
}