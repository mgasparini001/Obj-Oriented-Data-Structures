#pragma once
#include <iostream>
#include <string>
using namespace std;
//declare class
class quadratic {
private:
	//store coefficinet in private so they cant be modified without using the functions
	double a, b, c;


public:
	//declare all the member functions and the constructor

	double geta();
	double getb();
	double getc();
	void seta(double a1);
	void setb(double b1);
	void setc(double c1);
	void add(quadratic quad2);
	void subtract(quadratic quad2);
	string toString();
	void solve();
	void multiply(double a1, double b1, double c1);
	//construct the quadratic with the coefficients
	quadratic(double a1, double b1, double c1);
	//exe confirmation
	~quadratic();
};
