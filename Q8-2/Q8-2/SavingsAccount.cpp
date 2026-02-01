#include "BankAccount.h"
#include "Header1.h"
using namespace std;

void SavingsAccount::calculateInterest() {

	balance = balance * (1 + interestRate);
}
SavingsAccount::SavingsAccount(string number, double bal, string newOwner, double intamt) :BankAccount(number, bal, newOwner) {
	interestRate = intamt;

}
void SavingsAccount::display() {
	
	cout << "Account Info\nNumber: " << accountNumber << "\nOwner: " << owner << "\nBalance: " << balance << "\nInterest Rate: " << interestRate << endl << "-----------------\n";
}
double SavingsAccount::getBalance() {
	return balance; 
}
string SavingsAccount::getMember() {
	return accountNumber; // error C2248: 'BankAccount::accountNumber': cannot access private member declared in class 'BankAccount'
	//accountNumber (private in base class) becomes inaccessible when default inheritance happens
}