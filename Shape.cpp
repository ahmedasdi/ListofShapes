/*
 * Shape.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include "Shape.h"		//include the header file

using namespace std;	//for ease of syntax

Shape::Shape(const string& colour){			//member function initializes the colour chosen which is passed into it
	this->colour = colour;			//this pointer so that compiler knows which colour we are talking about
}

string Shape::getColour() {				//getter member function returns the colour chosen
	return colour;
}

void Shape::print() {			//member function that prints the colour
	cout << colour << endl;
 }
Shape::~Shape(){

}

