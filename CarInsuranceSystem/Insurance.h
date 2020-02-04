#pragma once
#include<iostream>
#include<fstream>
#include"User.h"
#include"AC.h"
#include"OC.h"
#include"NNW.h"
#include"ASS.h"

class Insurance {
	User user;

	// ubezpieczenia beda pobierac z plikow raty( jak bardzo kótre sie liczynp. theft * theftRate .....)
	AC ac;
	OC oc;
	NNW nnw;
	ASS ass;

	int OcPrice=0;
	int AcPrice=0;
	int NnwPrice=0;
	int AssPrice=0;


public:
	Insurance(User user);

	//Getters
	int getOcPrice();
	int getAcPrice();
	int getNnwPrice();
	int getAssPrice();

	AC & getAc();
	ASS & getASS();
	NNW & getNNW();
	std::string getUserName();

	//Setters
	void setOc(OC oc);
	void setAc(AC ac);
	void setOcPrice(int price);
	
	//functions
	void countAC();
	void countOC();
	void countASS();
	void countNNW();
	int count();

	void createFile();
};