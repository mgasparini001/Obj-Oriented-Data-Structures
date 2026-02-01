#pragma once
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
	//make attrs protected so indirectly derived classes can access them
protected:
	string accountNumber;
	double balance;
	string owner;
	

public:
	BankAccount(string number, double bal, string newOwner);
	string getNumber();
	string getOwner();
	double getBalance();
	void deposit(double amt);
	void withdraw(double amt);
	void display();
	//make this a virtual function so every derived class can use it in their own way
	virtual void calculateInterest() = 0;
};