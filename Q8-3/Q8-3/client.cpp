#include <iostream>
#include "character.h"
#include "warrior.h"
#include "archer.h"
#include "mage.h"
using namespace std;
int main() {
	//construct each derived obj
	warrior warrior1(200, 200, 50);
	mage mage1(100, 100, 300);
	archer archer1(150, 300, 50);

	//make base class pointers pointing to each derived obj, then point them to the obj's specific attack func to call it
	character* character = &warrior1;
	character->attack();
	character = &mage1;
	character->attack(); 
	character = &archer1;
	character->attack();





	return 0;
}