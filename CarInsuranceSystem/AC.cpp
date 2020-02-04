#include"AC.h"

AC::AC(std::string companyName, int rate)
{
	this->companyName = companyName;
	this->rate = rate;
}
AC::AC(std::string companyName, int rate, bool theft, bool collision, bool flood, bool hail, bool thunder)
{
	this->companyName = companyName;
	this->rate = rate;
	this->theft = theft;
	this->collision = collision;
	this->flood = flood;
	this->hail = hail;
	this->thunder = thunder;
}
//Setters
void AC::setTheft(bool theft)
{
	this->theft = theft;
}
void AC::setCollision(bool collision)
{
	this->collision = collision;
}
void AC::setFlood(bool flood)
{
	this->flood = flood;
}
void AC::setHail(bool hail)
{
	this->hail = hail;
}
void AC::setThunder(bool thunder)
{
	this->thunder = thunder;
}
//Getters
bool AC::getTheft()
{
	return this->theft;
}
bool AC::getCollision()
{
	return this->collision;
}
bool AC::getFlood()
{
	return this->flood;
}
bool AC::getHail()
{
	return this->hail;
}
bool AC::getThunder()
{
	return this->thunder;
}