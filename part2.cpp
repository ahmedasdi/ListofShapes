//============================================================================
// Name        : part2.cpp
// Author      : Ahmed Asdi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <climits>
#include <fstream>

#include "ListOfShapes.h"		//include all the header files used
#include "Rectangle.h"
#include "Circle.h"
#include "Shape.h"

using namespace std;		//for ease of syntax

int main() {

	int optionchosen;		//initialize and define the variables used
	int i = 0;
	double length;
	double breadth;
	double radius;
	string color;

	ListOfShapes sl1;		//create an object of class ListOfShapes
	Shape* s1;				//create an object pointer


	do{			//do while loop for the menu, below is the menu options

	cout << "=================" << endl ;

		cout << "[Shape List]" << endl ;
		cout << "There are currently " << i << " shape(s) in the list" << endl << endl ;
		cout << "Please choose an option: " << endl ;
		cout << "1. Add Rectangle" << endl ;
		cout << "2. Add Circle" << endl ;
		cout << "3. Remove Shape" << endl ;
		cout << "4. Display Shapes" << endl;
		cout << "5. Quit" << endl;
		cin >> optionchosen;				//user chooses an option from menu

	if (optionchosen == 1) {			//if 1 is chosen the add rectangle menu pops up
		cout << "===============" << endl;
		cout << "[Add Rectangle]" << endl;
		cout << "Enter Colour: " << endl;
		cin >> color;			//stores the user input into variable

		cout << "Enter length: " << endl;
		cin >> length;			//stores the user input into variable

		cout << "Enter breadth: " << endl;
		cin >> breadth;			//stores the user input into variable

		cout << "... [Adding Rectangle]" << endl;
		s1 = new Rectangle(length, breadth, color);		//a dynamically allocated object rectangle is made from the pointer shape of type vector
		sl1.addShape(s1);			//the priorly created object is added to the list of shapes
		i++;
		}
		else if(optionchosen == 2){		//if 2 is chosen the add circle menu pops up
		cout << "===============" << endl;
		cout << "[Add Circle]" << endl;
		cout << "Enter Colour: " << endl;
		cin >> color;		//stores the user input into variable

		cout << "Enter radius: " << endl;
		cin >> radius;		//stores the user input into variable

		cout << "... [Adding Circle]" << endl;
		s1 = new Circle(radius, color);			//a dynamically allocated object circle is made from the pointer shape of type vector
		sl1.addShape(s1);			//the priorly created object is added to the list of shapes
			i++;
		}
		else if(optionchosen == 3){		//if 2 is chosen the most recent shape is removed from the list
			cout << "... [Removing Shape]" << endl;
			sl1.removeShape();
			if (i != 0) {
			--i;
			}
		}
		else if(optionchosen == 4){			//if 4 is chosen the shapes added to the list are displayed
			cout << "[Display Shapes]" << endl;
			sl1.displayShapes();
		}
		else if (optionchosen == 5){		//if 5 is chosen the while loop is terminated stopping the program
		cout << "...[Quitting]" << endl;
		cout << "Thank you for using this very cool program!";
				i = 100;
		}
		else{
		cout << "Please choose a valid option";
	}
	}while (i < 100);
	return 0;
}
