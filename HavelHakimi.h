#ifndef HAVELHAKIMI_H
#define HAVELHAKIMI_H
#include <vector>
#include <algorithm>

class HavelHakimi {

public:

	bool graphRealization(std::vector<int> sequence);

private:
	void removeZeros(std::vector<int> & sequence);
	void substractOne(std::vector<int> & sequence, int n);
};



#endif // !HAVELHAKIMI_H

