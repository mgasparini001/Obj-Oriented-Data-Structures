#pragma once
#include <iostream>
#include "character.h"
using namespace std; 
class mage : public character {
public:
	void attack();
	mage(double hp, double stam, double mp);
};

