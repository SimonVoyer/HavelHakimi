#include "HavelHakimi.h"
#include <iostream>
#include <string>

int main() {
	HavelHakimi havelHakimi;
	std::vector<int> graph;
	std::string input;
	std::cout << "Please enter a sequence of integers to verify whether it is graphical. Enter d when you are done.\n";
	std::cin >> input;

	while (input != "d" && input != "D"){
		graph.push_back(stoi(input));
		std::cin >> input;
	}

	bool isGraphical = havelHakimi.graphRealization(graph);

	if (isGraphical) {
		std::cout << "The sequence is graphical.";
	} else {
		std::cout << "The sequence is not graphical.";
	}
	return 0;
}