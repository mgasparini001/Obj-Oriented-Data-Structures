#pragma once
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
class SavingsAccount : BankAccount {

private:
	double interestRate;



public:
	string getMember();
	void calculateInterest();
	double getBalance();
	SavingsAccount(string number, double bal, string newOwner, double intamt);

	void display();
};