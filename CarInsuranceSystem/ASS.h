#pragma once
#include<string>
class ASS {
	std::string companyName;
	double rate;
	int maxTowingDistance=0;
	bool lostKeysHelp=0;
	bool tireChange=0;
public:
	ASS() {};
	ASS(std::string companyName, double rate);

	//Getters
	int getMaxTowingDistance();
	bool getLostKeysHelp();
	bool getTireChange();
	//Setters
	void setMaxTowingDistance(int maxTowingDistance);
	void setLostKeysHelp(bool lostKeysHelp);
	void setTireChange(bool tireChange);
	
};