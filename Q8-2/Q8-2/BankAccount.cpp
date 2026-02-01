#include "Header.h"
#include "Header1.h"
#include <iostream>
#include <string>
using namespace std;

BankAccount::BankAccount(string number, double bal, string newOwner) {
	accountNumber = number;
	balance = bal;
	owner = newOwner;

}



string BankAccount::getOwner() {
	return owner;
}
double BankAccount::getBalance() {
	return balance;
}
void BankAccount::deposit(double amt) {
	balance += amt;

}
void BankAccount::withdraw(double amt) {
	balance -= amt;

}


void BankAccount::display() {
	cout << "Account Info\nName: " << accountNumber << "\nOwner: " << owner << "\nBalance: " << balance << endl << "-----------------\n";
}