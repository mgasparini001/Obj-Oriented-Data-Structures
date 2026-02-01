#pragma once
#include <iostream>
#include "character.h"
using namespace std;
class warrior : public character {
public:
	void attack();
	warrior(double hp, double stam, double mp);
};
