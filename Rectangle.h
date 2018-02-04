/*
 * Rectangle.h
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#ifndef RECTANGLE_H_
#define RECTANGLE_H_

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include "Shape.h"		//include the header file due to circle class having an inheritance relationship with abstract shape class

using namespace std;	//for ease of syntax

class Rectangle : public Shape {	//the inheritance relationship with the abstract class shape can be seen here, the member variables of shape are initialized here
private:
	double length;		//member variable length of type double
	double breadth;		//member variable breadth of type double
public:
	Rectangle(double length, double breadth, const string& colour);	//non default constructor intializing length and breadth and the member variable from shape class colour, can be done due to inheritance relationship made
	void print();		//member function print overrides the pure virtual print in Shape
	virtual ~Rectangle();		//virtual deconstructor needed due to the overriding of the virtual print function
};

#endif /* RECTANGLE_H_ */
