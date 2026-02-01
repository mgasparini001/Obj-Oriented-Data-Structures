#pragma once
#include <iostream>
#include <string>
#include "BankAccount.h"
using namespace std;
//inherit the base as public so no members are lost
class SavingsAccount : public BankAccount{

private:
	double interestRate;
	
	

public:
	void calculateInterest();

	SavingsAccount(string number, double bal, string newOwner, double intamt);
	
	void display();
};