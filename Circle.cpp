/*
 * Circle.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#include "Circle.h"		//include the header file
#include <iostream>
#define PI 3.14159265	//define a variable globally

using namespace std;	//for ease of syntax

Circle::Circle(double radius, const string& colour)			//non default constructor taking in variables from main and showing where it got assigned
		: Shape(colour), radius(radius){				//while initializing the variables
}

void Circle::print() {		//member function to print
	double area;			//member variable area initialized

		area = PI * radius * radius;		//area calculated
		cout << "Circle " << "R = " << radius << ", area = " << area << ", ";			//area and variables printed
		Shape::print(); 	//to print the colour from shape class
}
Circle::~Circle(){			//virtual deconstructor

}


