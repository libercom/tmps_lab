#include "SortingStrategy.h"

class BubbleSortStrategy : public Libercom::SortingStrategy
{
	virtual std::vector<int> Sort(std::vector<int> data) const override
	{
		std::vector<int> arr(data);

		std::cout << "Performing bubble sort" << '\n';

		return arr;
	}
};