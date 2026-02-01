#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;
//declare class
class Polynomial {
private:
	//store coefficinet in private so they cant be modified without using the functions
	double a, b, c;


public:
	int getDegree();
	Polynomial(vector<double> initCoeffs);
	double geta();
	double getb();
	double getc();
	void seta(double a1);
	void setb(double b1);
	void setc(double c1);
	void add(Polynomial quad2);
	void subtract(Polynomial quad2);
	string toString();
	void solve();
	void multiply(double a1, double b1, double c1);
	//construct the quadratic with the coefficients
	Polynomial(double a1, double b1, double c1);
	//exe confirmation
	~Polynomial();
};
