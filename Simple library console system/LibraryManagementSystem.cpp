#include "LibraryManagementSystem.h"
//#include <string>
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
	view();
}

void LibraryManagementSystem::lend(string name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i] == name) {
			if (current[i] > 0) {
				current[i] -= 1;
			}
			return;
		}
	}
	// error out
}

void LibraryManagementSystem::relinquish(string name) {
	for (int i = 0; i < books.size(); i++) {
		if (books[i] == name) {
			if (current[i] >= total[i]) {
				current[i] = total[i];
				return;
			}
			current[i] += 1;
			return;
		}
	}
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
