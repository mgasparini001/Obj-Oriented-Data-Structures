
#include <iostream>
#include <string>
#include "quadratic.h"
	using namespace std;

	int main() {
		//call class with 3 different test cases
		quadratic P1(3, 6, 2);
		quadratic P2(8, 2, 56);
		quadratic P3(6, 12, 3);
		//print out the 3 cases usin gthe toString member
		cout << "3 test quadratic equations:\n" << P1.toString() << "\n" << P2.toString() << "\n" << P3.toString();
		//use other member functions
		P1.add(P2);
		//cout the equations with the new summed coefficients using the get functions
		cout << "The quadratic equation after adding Polynomial 1's coefficients to 2's is: " << P1.geta() << "x^2 + " << P1.getb() << "x + " << P1.getc() << endl;

		P2.subtract(P1);

		cout << "The quadratic equation after finding the difference between polynomial 2's and 1's coefficients is: " << P2.geta() << "x^2 + " << P2.getb() << "x + " << P2.getc() << endl;
		//call solve function on the cases
		cout << "Polynomial 1 solved: ";
		P1.solve();

		cout << "Polynomial 2 solved: ";
		P2.solve();

		cout << "Polynomial 3 solved: ";
		P2.solve();







		return 0;
	}


