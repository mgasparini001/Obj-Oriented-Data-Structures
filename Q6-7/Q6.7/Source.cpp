#include <iostream>
#include <string>
#include "item.h"
using namespace std;
//initialize multiplier globally so it will actually work, since its static it must be initialized outside all the functions
double item::discountMultiplier = 1;

//make multiplier modifiable by using setter which duplicates the variable
void item::setDiscount(double discount) {
	
	

	
	//confrim discount is not zero or below so it will work
	if (discount > 0) {
		discountMultiplier = 1-(discount/100); //use discount formula to find multiplier
	}
	else {
		cout << "Discount must be higher than 0. Defaulting to 1x multiplier.\n"; //default to 1 when percent is entered as 0 or lower
		
	}
	cout << "found discount(s)!\n";
}



//access the attrs by using getters
string item::getName() {
	return itemName;

}
double item::getOPrice() {
	return originalPrice;

}
double item::getDiscPrice() {
	return discountMultiplier * originalPrice; //calculate discounted price
}




//make constructor and set the name and og price in it so theyll be modifiable
item::item(string itemName1, double originalPrice1) {
	itemName = itemName1;
	originalPrice = originalPrice1;

}