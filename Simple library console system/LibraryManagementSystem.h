#pragma once
#include <vector>
#include <string>

class LibraryManagementSystem {
private:
	std::vector<std::vector<int>> items;

public:
	void add(string name);
	void lend();
	void relinquish();
	void view();

	std::vector<std::vector<int>> getItems();

};