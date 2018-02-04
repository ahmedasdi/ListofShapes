/*
 * ListOfShapes.cpp
 *
 *  Created on: Nov 23, 2016
 *      Author: Ahmed
 */
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include <vector>		//since we are using the vector class, it acts as an array
#include "ListOfShapes.h" 		//include the header file

using namespace std;		//for ease of syntax

ListOfShapes::ListOfShapes(){		//default constructor
}

void ListOfShapes::addShape(Shape* j) { 	//addShape member function adds a shape into the vector
	shapes.push_back(j);		//the object j(a rectangle or circle) is added to the vector shapes
	}

void ListOfShapes::removeShape() {		//removeShape member funciton removes the most recent shape in the vector

	if (!shapes.empty()) {		//if the vector is not empty then continue
		delete shapes.back();	//delete the most recent shape in shapes vector
		shapes.back() = 0;		//make the most recent value in vector shapes 0
		shapes.pop_back();		//pop the most recent place in vector shapes
	}
	else
	cout<<"List is empty!"<<endl;		//if list is empty
}

void ListOfShapes::displayShapes() {		//member function to display the shapes in vector

	unsigned int size = shapes.size();	//initialize the size of the vector shapes
	unsigned int j;

	if(shapes.empty()){
		cout << "List is empty! No shapes to display."<<endl;
	return;
	}

	for (j = 0;j < size;j++) {		//for loop to display the contents of vector shapes
	shapes[j]->print();
	}
	cout << endl;
}

ListOfShapes::~ListOfShapes(){ 		//deconstructor explicitly deletes the vector shapes

	unsigned int j;
	for(j = 0;j < shapes.size();j++) {
		delete shapes.at(j);
		shapes.at(j) = 0;

	}

}




