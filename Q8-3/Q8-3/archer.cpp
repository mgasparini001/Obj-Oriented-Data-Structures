#include <iostream>
#include "character.h"
#include "archer.h"
using namespace std;
void archer::attack() {
	cout << "Ready, aim, fire!\n";
}
// derived constructor : baseconstructor(common params)  -- this is so the base class is constructed before derived is, since it has to be cuz derived is built on base
archer::archer(double hp, double stam, double mp) :character(hp, stam, mp) {
	health = hp;
	stamina = stam;
	magic = mp;
}