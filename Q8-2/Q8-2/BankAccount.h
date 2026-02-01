#pragma once
#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
	string accountNumber; 
	
protected:
	
	string owner;


public:
	BankAccount(string accountMember, double balance, string owner);
	string getMember(); 
	string getOwner();
	double getBalance();
	void deposit(double amt);
	void withdraw(double amt);
	void display();
	double balance;
	 
};