#include "BankAccount.h"
#include "Header1.h"
#include "CheckAccount.h"
using namespace std;
string CheckAccount::getMember() {
}
void CheckAccount::calculateInterest() {
}
double CheckAccount::getBalance() {
	return balance; // derived class of derived class cant access base class attr, meaning public base members act as private when default inheritance happens
}
CheckAccount::CheckAccount(string number, double bal, string newOwner, double intamt) {
}
string CheckAccount::getOwner() {
	return owner;// derived class of derived class cant access base class attr, meaning protected base members act as private when default inheritance happens
}
void CheckAccount::display() {
}