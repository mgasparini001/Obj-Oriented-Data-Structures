#pragma once
#include <iostream>
#include <string>
#include "BankAccount.h"
#include "Header1.h"
using namespace std;
class CheckAccount : public SavingsAccount {

private:
	double interestRate;



public:
	string getMember();
	void calculateInterest();
	double getBalance();
	CheckAccount(string number, double bal, string newOwner, double intamt);
	string getOwner();
	void display();
};