#include "SortingContext.cpp"
#include "BubbleSortStrategy.cpp"
#include "InsertionSortStrategy.cpp"

int main()
{
	std::vector<int> data = { 1, 5, 6, 4, 2, 8 };
	
	SortingContext context(std::make_unique<BubbleSortStrategy>());
	context.Sort(data);
	context.SetStrategy(std::make_unique<InsertionSortStrategy>());
	context.Sort(data);

	return 0;
}