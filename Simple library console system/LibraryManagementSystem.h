#pragma once
#include <vector>
#include <string>

class LibraryManagementSystem {
private:
	//std::vector<std::vector<std::variant<std::string, int>>> items;
	std::vector<std::string> books;
	std::vector<int> current;
	std::vector<int> total;

public:
	void add(std::string name);
	void lend(std::string name);
	void relinquish(std::string name);
	void view();
	void menu();

	std::vector<std::vector<int>> getItems();

};