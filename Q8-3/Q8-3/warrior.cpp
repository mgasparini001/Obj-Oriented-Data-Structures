#include <iostream>
#include "character.h"
#include "warrior.h"
using namespace std;
void warrior::attack() {
	cout << "I shall slay thee with my sword!\n";
}
// derived constructor : baseconstructor(common params)  -- this is so the base class is constructed before derived is, since it has to be cuz derived is built on base
warrior::warrior(double hp, double stam, double mp) :character(hp, stam, mp){
	health = hp;
	stamina = stam;
	magic = mp;
}