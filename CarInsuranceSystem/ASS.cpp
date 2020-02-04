#include"ASS.h"

ASS::ASS(std::string companyName, double rate)
{
	this->companyName = companyName;
	this->rate = rate;
}
//Getters
int ASS::getMaxTowingDistance()
{
	return this->maxTowingDistance;
}
bool ASS::getLostKeysHelp()
{
	return this->lostKeysHelp;
}
bool ASS::getTireChange()
{
	return this->tireChange;
}
//Setters
void ASS::setMaxTowingDistance(int maxTowingDistance)
{
	this->maxTowingDistance = maxTowingDistance;
}
void ASS::setLostKeysHelp(bool lostKeysHelp)
{
	this->lostKeysHelp = lostKeysHelp;
}
void ASS::setTireChange(bool tireChange)
{
	this->tireChange = tireChange;
}