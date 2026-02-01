#pragma once
#include <string>
using namespace std;
//declare class with attrs private and member functions public
class item {
private:
	string itemName;
	double originalPrice;
	//make discount multiplier static so it applies to all objects the same
	static double discountMultiplier;


public:
	//make the setter for it static as well to match it
	static void setDiscount(double discount);
	string getName();
	double getOPrice();
	double getDiscPrice();
	item(string itemName, double originalPrice);
	

	

	


};