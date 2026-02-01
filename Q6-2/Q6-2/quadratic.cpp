#include "quadratic.h"
#include <iostream>
#include <string>
using namespace std;

quadratic::~quadratic() {
	//make message after class is used
	cout << "\nThanks for using quadratic!\n";
}

//make coefficients modifiable by using setters which duplicate the variable
void quadratic::seta(double a1) {
	//confrim a is not zero so the quadratic equation will work
	if (a1 != 0) {
		a = a1;
	}
	else {
		cout << "\"A\" must be a nonzero number, setting a to 1.\n"; //default to 1 when a is entered as 0
		a = 1;
	}
}

void quadratic::setb(double b1) {
	b = b1; 
}

void quadratic::setc(double c1) {
	c = c1;
}

	//access the coefficinets by using getters
double quadratic::geta() {
	return a;
	
}
double quadratic::getb() {
return b;
	
}
double quadratic::getc() {
	return c;
}
//modify the class by making the parameter a new quadratric or class
	void quadratic::add(quadratic quad2) {
		a += quad2.a;
		b += quad2.b;
		c += quad2.c;
		
	}

	void quadratic::subtract(quadratic quad2) {
		a -= quad2.a;
		b -= quad2.b;
		c -= quad2.c;

	}
	//use to_string function to convert coefficients into strings
	string quadratic::toString() {

		return to_string(a) + "x^2 + " + to_string(b) + "x + " + to_string(c) + " = 0";
		
	}
	//use void functions to cout results
	void quadratic::solve() {
		//make sure the quadratic eqauation will produce real roots
		if ((b * b) - (4 * a * c) > 0) {
			//account for the + and - in equation
			double sol1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
			double sol2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
			//reduce redundancy if possible
			if (sol1 == sol2) {
				cout << sol1 << endl;
			}
			else {
				cout << sol1 << ", " << sol2<< endl;
				
			}
		}
		else {
			cout << "No real roots\n";
		}
		
	}
	//make constructor and call setters in it so the coefficients will be modifiable
	quadratic::quadratic(double a1=1, double b1=0, double c1=0) {
		seta(a1);
		setb(b1);
		setc(c1);
		cout << "found coefficients of the polynomial!\n";
	}

