#pragma once
#include <iostream>
using namespace std;
class character {
	//always make base attrs protected so derived classes can access them
protected:
	double health;
	double stamina;
	double magic;

public:
	//make attack in base pure virtual by putting = 0, since character object will not be needed and thus derived objects need their own attack
	virtual void attack() = 0;
	//constructor
	character(double health, double stamina, double magic);








};