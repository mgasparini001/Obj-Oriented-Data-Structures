#pragma once
#include <iostream>
#include "character.h"
using namespace std;
class archer : public character {
public:
	void attack();
	archer(double hp, double stam, double mp);
};
