/*
 * Shape.h
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#ifndef SHAPE_H_
#define SHAPE_H_
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include <string>		//in order to use type string
using namespace std;	//ease of syntax

class Shape				//class named shape
{
private:			//for member variables
	string colour;		//member variable colour of type string
public:				//for member functions
	Shape(const string& colour);	//non default constructor initializes the member variable colour, making this an abstract class due to no default constructor
	string getColour();				//member function that returns the colour chosen when called upon
	virtual void print();			//pure virtual print function that is expected to be redefined in the inherited classes
	virtual ~Shape();				//virtual deconstructor
};




#endif /* SHAPE_H_ */
