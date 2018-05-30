﻿// HW3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

//PT -- 19/20

class Fan
{
public:
	Fan() {
		speed = 1;
		on = false;
		radius = 5;
	}

	Fan(int a, bool b, double c) {
		setSpeed(a);
		setOn(b);
		setRadius(c);
	}

	void setSpeed(int x) {
		//PT -- check that x is between 1 and 3
		// if (x >= 1 && x <= 3)
		// -1
		speed = x;
	}

	int getSpeed() {
		return speed;
	}

	void setOn(bool a)
	{
		on = a;
	}

	bool getOn() {
		return on;
	}

	void setRadius(double r) {
		//PT -- probably want to check that r isn't negative.
		radius = r;
	}
	
	double getRadius()
	{
		return radius;
	}
private:
	int speed;
	bool on;
	double radius;
};


int main()
{
	Fan Fan1(3, true, 10);
	Fan Fan2(2, false, 5);

	

	cout << "The speed for Fan 1 is " << Fan1.getSpeed() << endl;
	cout << "The radius for Fan 1 is " << Fan1.getRadius() << endl;
	cout << "The power status for Fan 1 is (0 for off, 1 for on) " << Fan1.getOn() << endl;


	cout << "The speed for Fan 2 is " << Fan2.getSpeed() << endl;
	cout << "The radius for Fan 2 is " << Fan2.getRadius() << endl;
	cout << "The power status for Fan 1 is (0 for off, 1 for on) " << Fan2.getOn() << endl;
	
	
    return 0;
}

