#include "LibraryManagementSystem.h"
#include <string>
#include <iostream>
using namespace std;

void LibraryManagementSystem::add(string name) {
	/*for (int i = 0; i < items[0].size(); i++) {
		if(items[0][i] == name)
	}*/
	for (int i = 0; i < books.size(); i++) {
		if (books[i] == name) {
			current[i] += 1;
			total[i] += 1;
			return;
		}
	}
	books.push_back(name);
	current.push_back(1);
	total.push_back(1);
	//view();
}

void LibraryManagementSystem::lend(string name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i] == name) {
			if (current[i] > 0) {
				current[i] -= 1;
			}
			else {
				cerr << books[i] << " is currently out of stock.\n";
			}
			return;
		}
	}
	cerr << "Invalid book name\n";
}

void LibraryManagementSystem::relinquish(string name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i] == name) {
			if (current[i] >= total[i]) {
				current[i] = total[i];
				cerr << "Adding more books may exceed the current limit. Please contact staff for assistance\n";
				return;
			}
			current[i] += 1;
			return;
		}
	}
	cerr << "Invalid book name\n";
}

void LibraryManagementSystem::view() {
	/*for (int i = 0; i < items[0].size(); i++) {
		cout << items[0][i] << '\t' << items[1][i] << " / " << items[2][i] << endl;
	}*/
	cout << "books\tcurrent / total\n";
	for (int i = 0; i < books.size(); i++) {
		cout << books[i] << '\t' << current[i] << " / " << total[i] << endl;
	}
}

void lower(string& text) {
	for (char& c : text)
		c = tolower(c);
}

void LibraryManagementSystem::menu() {
	string input;
	do {
		do {
			cout << "Please enter what action you would like to take (view, lend, relinquish, add): ";
			getline(cin, input);
			lower(input);
		} while (input != "view" && input != "lend" && input != "relinquish" && input != "add" && input != "exit");


		if (input == "view") {
			view();
		}

		else if (input == "lend") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			lend(input);
		}

		else if (input == "relinquish") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			relinquish(input);
		}

		else if (input == "add") {
			cout << "Please enter in the name of the book: ";
			getline(cin, input);
			add(input);
		}
	} while (input != "exit");
}
