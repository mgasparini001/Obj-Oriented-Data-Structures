#include <iostream>
#include "BankAccount.h"
#include "Header1.h"
using namespace std;
int main() {

	BankAccount acc("796", 100, "joe");
	SavingsAccount acc1("796", 100, "joe", 0.2);

	

	cout << "Savings Account\n";
	
	cout << acc1.getBalance();
	acc1.deposit(2000);
	cout << "After your deposit:\n";
	acc1.display();
	acc1.withdraw(200);
	cout << "After your withdrawal:\n";
	acc1.display();
	BankAccount* bankacc = &acc1; //savings class instance is inaccessible with pointers
	bankacc->getBalance();
	
	cout << "After interest:\n";
	acc1.display();

	return 0;
}
/*
private member (accountNumber) becomes hidden when inheriting without specifier
protected member (owner) becomes private 
public member (balance) becomes private

The default inheritance is therefore private
*/