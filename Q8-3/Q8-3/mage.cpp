#include <iostream>
#include "character.h"
#include "mage.h"
using namespace std;
void mage::attack() {
	cout << "You are no match for my spells!\n";
}
// derived constructor : baseconstructor(common params)  -- this is so the base class is constructed before derived is, since it has to be cuz derived is built on base
mage::mage(double hp, double stam, double mp) :character(hp, stam, mp) {
	health = hp;
	stamina = stam;
	magic = mp;
}