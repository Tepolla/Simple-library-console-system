// Simple library console system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "LibraryManagementSystem.h"

using namespace std;



int main(){
	string input;
	do {
		cout << "Please enter what action you would like to take (view, lend, relinquish, add): ";
		getline(cin, input);
	} while(input != "view" && input != "lend" && input != "relinquish" && input != "add");

	LibraryManagementSystem LMS;

	while (input != "exit") {
		if (input == "view") {
			LMS.view();
		}

		else if (input == "lend") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			LMS.lend(input);
		}

		else if (input == "relinquish") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			LMS.relinquish(input);
		}

		else if (input == "add") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			LMS.add(input);
		}
	}
	 
	return 0;
}