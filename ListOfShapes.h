/*
 * ListOfShapes.h
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */

#ifndef LISTOFSHAPES_H_
#define LISTOFSHAPES_H_

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>


#include "Shape.h"		//inlcude the header file
#include <vector>		//since were using vector class

#include <string>
using namespace std;	//ease of syntax

class ListOfShapes
{
private:
	vector<Shape*> shapes;		//initialize the member variable shapes of type vector that points to Shape class
public:
	ListOfShapes();		//default constructor
	~ListOfShapes();	//default deconstructor
	void addShape(Shape*);	//member function that adds an object of type vector by pointing to the shape class to a rectangle or circle class
	void removeShape();		//member function that removes the most recent shape from the vector shapes
	void displayShapes();	//member function to display the vector shapes
};

#endif /* LISTOFSHAPES_H_ */
