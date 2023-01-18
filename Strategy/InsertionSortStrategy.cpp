#include "SortingStrategy.h"

class InsertionSortStrategy : public Libercom::SortingStrategy
{
	virtual std::vector<int> Sort(std::vector<int> data) const override
	{
		std::vector<int> arr(data);

		std::cout << "Performing insertion sort" << '\n';

		return arr;
	}
};