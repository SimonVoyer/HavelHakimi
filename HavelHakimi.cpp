#include "HavelHakimi.h"

bool HavelHakimi::graphRealization(std::vector<int> sequence) {
	int n;
	std::sort(sequence.begin(), sequence.end(), std::greater<int>());
	removeZeros(sequence);

	if (sequence.empty()) {
		return true;
	}

	
	n = sequence.front();
	sequence.erase(sequence.begin());

	if (n > sequence.size()) {
		return false;
	}

	substractOne(sequence, n);
	sequence.shrink_to_fit();
	return graphRealization(sequence);
}

void HavelHakimi::removeZeros(std::vector<int> & sequence) {
	while (!sequence.empty() && sequence.back() == 0) {
		sequence.pop_back();
	}
}

void HavelHakimi::substractOne(std::vector<int> & sequence, int n) {
	for (int i = 0; i < n; ++i) {
		sequence.at(i) = --sequence.at(i);
	}
}



