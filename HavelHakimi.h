#ifndef HAVELHAKIMI_H
#define HAVELHAKIMI_H
#include <vector>
#include <algorithm>

class HavelHakimi {

public:

	bool graphRealization(std::vector<int> graph);

private:
	void removeZeros(std::vector<int> & graph);
	void substractOne(std::vector<int> & graph, int n);
};



#endif // !HAVELHAKIMI_H

