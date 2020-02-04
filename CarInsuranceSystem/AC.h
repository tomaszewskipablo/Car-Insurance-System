#pragma once
#include <string>

class AC {
public:
	std::string companyName;
	double rate;
	bool theft=0;
	bool collision=0;
	bool flood=0;
	bool hail=0;
	bool thunder=0;
public:
	AC() {};
	AC(std::string companyName, int rate);
	AC(std::string companyName, int rate, bool theft, bool collision, bool flood, bool hail, bool thunder);
	//Setters
	void setTheft(bool theft);
	void setCollision(bool collision);
	void setFlood(bool flood);
	void setHail(bool hail);
	void setThunder(bool thunder);
	//Getters
	bool getTheft();
	bool getCollision();
	bool getFlood();
	bool getHail();
	bool getThunder();
};