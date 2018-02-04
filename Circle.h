/*
 * Circle.h
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include "Shape.h"		//include the header file due to circle class having an inheritance relationship with abstract shape class

using namespace std;	//for ease of syntax

class Circle : public Shape {	//the inheritance relationship with the abstract class shape can be seen here, the member variables of shape are initialized here
private:
	double radius;			//member variable radius of type double
public:
	Circle(double radius, const string& colour);	//non default constructor intializing radius and the member variable from shape class colour, can be done due to inheritance relationship made
	void print();				//member function print overrides the pure virtual print in Shape
	virtual ~Circle();		//virtual deconstructor needed due to the overriding of the virtual print function
};

#endif /* CIRCLE_H_ */
