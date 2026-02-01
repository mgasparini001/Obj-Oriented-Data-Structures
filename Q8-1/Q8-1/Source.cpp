#include <iostream>
#include "SavingsAccount.h"
#include "BankAccount.h"
using namespace std;
int main() {
	
	//construct account obj
	SavingsAccount acc1("796", 100, "joe", 0.2);
	
	cout << "Savings Account\n";

	acc1.display();

	//use base functions and display them
	acc1.deposit(2000);

	cout << "After your deposit:\n";

	acc1.display();

	acc1.withdraw(200);

	cout << "After your withdrawal:\n";

	acc1.display();

	//use baseclass* basename = &derivedName to access and call the derived/overriden function
	BankAccount* bankaccPtr = &acc1;

	bankaccPtr->calculateInterest();

	cout << "After interest:\n";
	acc1.display();
	
	return 0;
}