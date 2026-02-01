#include "BankAccount.h"
#include "SavingsAccount.h"
#include <iostream>
#include <string>
using namespace std;
//base constructor, what derived constructors build on
BankAccount::BankAccount(string number, double bal, string newOwner) {
	accountNumber = number;
	balance = bal;
	owner = newOwner;

}

string BankAccount::getNumber() {
	return accountNumber;
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
//base display func, what derived class displays can build on
void BankAccount::display() {
	cout << "Account Info\nName: " << accountNumber << "\nOwner: " << owner << "\nBalance: " << balance << endl << "-----------------\n";
}