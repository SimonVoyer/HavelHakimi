#include "HavelHakimi.h"

bool HavelHakimi::graphRealization(std::vector<int> graph) {
	int n;
	std::sort(graph.begin(), graph.end(), std::greater<int>());
	removeZeros(graph);

	if (graph.empty()) {
		return true;
	}

	
	n = graph.front();
	graph.erase(graph.begin());

	if (n > graph.size()) {
		return false;
	}

	substractOne(graph, n);
	graph.shrink_to_fit();
	return graphRealization(graph);
}

void HavelHakimi::removeZeros(std::vector<int> & graph) {
	while (!graph.empty() && graph.back() == 0) {
		graph.pop_back();
	}
}

void HavelHakimi::substractOne(std::vector<int> & graph, int n) {
	for (int i = 0; i < n; ++i) {
		graph.at(i) = --graph.at(i);
	}
}



