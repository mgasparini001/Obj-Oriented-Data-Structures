#include "SavingsAccount.h"
#include "BankAccount.h"
using namespace std;

void SavingsAccount::calculateInterest() {
	
	balance = balance * (1 + interestRate);
}
//derived constructor using :BankAccount(savingsparams common with bank) enables it to build on base constructor
SavingsAccount::SavingsAccount(string number, double bal, string newOwner, double intamt) :BankAccount(number, bal, newOwner) {
	interestRate = intamt;

}

void SavingsAccount::display() {
	//call base display func inside to reuse base code
	BankAccount::display();
	cout << "Interest Rate: " << interestRate << endl << "-----------------\n";
}