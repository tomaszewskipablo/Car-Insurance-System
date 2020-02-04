#include"Insurance.h"
Insurance::Insurance(User user)
{
	this->user = user;
}
//Getters
	//Prices
int Insurance::getOcPrice()
{
	return OcPrice;
}
int Insurance::getAcPrice()
{
	return AcPrice;
}
int Insurance::getNnwPrice()
{
	return NnwPrice;
}
int Insurance::getAssPrice()
{
	return AssPrice;
}
//AC,ASS,NNW
AC & Insurance::getAc()
{
	return this->ac;
}
ASS & Insurance::getASS()
{
	return this->ass;
}
NNW & Insurance::getNNW()
{
	return this->nnw;
}
//Setters
void Insurance::setOc(OC oc)
{
	this->oc = oc;
}
void Insurance::setAc(AC ac)
{
	this->ac = ac;
}
void Insurance::setOcPrice(int price)
{
	this->OcPrice = price;
}

std::string Insurance::getUserName()
{
	return user.getName();
}
//Functions
void Insurance::countAC()
{
	int acCarVualue = user.getCar().getCarValue()* 0.02 + 20 * (5 - user.getAgeGroup());
	
	AcPrice = (ac.getTheft() * 2 + ac.getCollision() * 3 + ac.getThunder() + ac.getHail() + ac.getFlood()) *acCarVualue*0.2;
}
void Insurance::countASS()
{
	AssPrice = 50 * (ass.getLostKeysHelp() + ass.getTireChange());
	if (ass.getMaxTowingDistance() == 200)
		AssPrice += 150;
	else if (ass.getMaxTowingDistance() == 400)
		AssPrice += 250;
	else if (ass.getMaxTowingDistance() == 800)
		AssPrice += 320;
}
void Insurance::countOC()
{
	OcPrice = 1100 * (user.getCar().getEingineCapacity() / 5.0) + 100 * (5 - user.getAgeGroup()) + 100 * user.getCar().getMileage() / 11;
	if (user.getCar().getBrand() == "BMW")
		OcPrice += 100;
	if (user.getCar().getBrand() == "Skoda" || user.getCar().getBrand() == "Fiat")
		OcPrice -= 50;
}
void Insurance::countNNW()
{
	NnwPrice = double(nnw.getMaxInsuranceAmount()) * getNNW().getRate();
}
int Insurance::count(){
	return AcPrice + OcPrice + NnwPrice + AssPrice;
}

void Insurance::createFile()
{
	ofstream myfile;
	//user data
	myfile.open("../users/" + user.getName() + ".txt");
	myfile << user.getName() << endl;
	myfile << "live in: " << user.getCity() << " " << user.getStreet() << " " << user.getHouseNumber() << endl;
	myfile << "phone number: " << user.getPhoneNumber() << endl << endl;

	// car data
	myfile << "car: " << user.getCar().getBrand() << " " << user.getCar().getModel() << endl;
	myfile << "producted in: " << user.getCar().getStringYear() << endl;
	myfile << "Engine Capacity " << user.getCar().getEingineCapacity() << endl;
	if (user.getCar().getGasInstalation())
		myfile << "gas Instalation: " << "Yes" << endl;
	myfile << "car Price " << user.getCar().getCarValue() << endl << endl;

	//insurance data

	myfile << "Bought:" << endl;
	
	// AC
	if (AcPrice)
	{
		myfile << "AC for " << AcPrice << " zl" << " Consist of refund in case of " << endl;
		if (ac.getCollision())
			myfile << "- collision" << endl;
		if (ac.getTheft())
			myfile << "- theft" << endl;
		if (ac.getFlood())
			myfile << "- flood" << endl;
		if (ac.getHail())
			myfile << "- hail" << endl;
		if (ac.getThunder())
			myfile << "- thunder" << endl;

		myfile << endl;
	}
	
	//OC
	if (OcPrice)
	{
		myfile << "OC for " << OcPrice << " zl" << endl << endl;
	}
	if (AssPrice)
	{
		myfile << "ASS for " << AssPrice << " zl" << " Consist of refund in case of " << endl;
		if (ass.getMaxTowingDistance())
			myfile << "- towing up to " << ass.getMaxTowingDistance() << endl;
		if (ass.getLostKeysHelp())
			myfile << "- lost key help" << endl;
		if (ass.getTireChange())
			myfile << "- tire change" << endl;
		myfile << endl;
	}
	if (NnwPrice)
	{
		myfile << "NNW for " << NnwPrice << " zl" << " Consist of refund in case of accident in maximum amount of " << NnwPrice / getNNW().getRate() << endl;
	}
		myfile.close();
}