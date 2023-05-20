#pragma once
#include <vector>
#include <string>

class LibraryManagementSystem {
private:
	//std::vector<std::vector<std::variant<std::string, int>>> items;
	vector<string> books;
	vector<int> current;
	vector<int> total;

public:
	void add(string name);
	void lend(string name);
	void relinquish(string name);
	void view();

	std::vector<std::vector<int>> getItems();

};