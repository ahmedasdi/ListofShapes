/*
 * Rectangle.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include "Rectangle.h"		//include the header file

using namespace std;		//for ease of syntax


Rectangle::Rectangle(double length, double breadth, const string& colour)	//non default constructor taking in variables from main and showing where it got assigned
  : Shape(colour), length(length), breadth(breadth) {	//while initializing the variables
}

void Rectangle::print() {		//member function to print
	double area;			//member variable area initialized

	area = length * breadth;		//area calculated
	cout << "Rectangle " << "L = " << length << ", B = " << breadth <<  ", area = " << area << ", ";	//area and variables printed
	Shape::print();			//to print the colour
 }

Rectangle::~Rectangle(){	//virtual deconstructor

}


