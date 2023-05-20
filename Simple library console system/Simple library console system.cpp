// Simple library console system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "LibraryManagementSystem.h"

using namespace std;

void lower(string& text);

int main(){
	LibraryManagementSystem LMS;

	LMS.menu();

	// CONSIDER ADDING A NOTEPAD OR SQL DATABASE
	// TO STORE AND ACCESS PREVIOUSLY ADDED DATA
	// YOU MAY ALSO WANT TO ADD A DELETE FUNCTION
	 
	return 0;
}