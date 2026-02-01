#include <iostream>
#include <string>
#include "item.h"
#include <vector>
using namespace std;
//make function which uses for loop to add objects to vector "inventory". use & to access inventory vector from main()
void addItemsToList(vector<item> &inventory) {
	string itemName;//declare name and price for user input
	double originalPrice;
	
	
	cout << "How many items would you like to add to the inventory? ";
	int items; //keep count of items to count the for loop
	cin >> items;
	//prompt user for name and price for each item obj
	for (int i = 0; i < items; i++) {
		cout << "Name: ";
		
		cin >> itemName;
		cout << "Original Price: ";
		
		cin >> originalPrice;
		//call constructor to put these inputs into the class to make new item obj with them each iteration
		item itemm(itemName, originalPrice);
		//add each one to the inv vector
		inventory.push_back(itemm);
		
	}
}
//make function which refs the inv vector and prints each item from it by using a for loop that iterates through every item
void printInventory(vector<item> &inventory) {
	
	for (int i = 0; i < inventory.size(); i++) {//use .size function so you dont have to make and pass a var keeping track of size through seperate functions
		cout << "Item " << i + 1 << endl; //account for the index being the num -1
		//output name, og price and discprice by using getter functions on each vector item
		cout <<"Name: "<< inventory[i].getName() << endl;
		cout << "Original Price: " << inventory[i].getOPrice() << endl;
		cout <<"Discounted Price: " << inventory[i].getDiscPrice() << endl;
		//divide the items for organization
		cout << "---------------------\n";
	}
	
}
int main()

{
	
	vector<item> inventory; //creates an empty list of items
	
	
	addItemsToList(inventory); //does what the above function states

	//set the num to any percentage to change the discount
	item::setDiscount(20); //sets the storewide discount to 20% for all items


	printInventory(inventory); //I wonder what this does?
	

}