#include <vector>
#include <iostream>

#include "Iterator.cpp"

int main()
{
	std::vector<int> vect = { 1, 5, 2, 5, 6 };

	Iterator<int, std::vector<int>>* iterator = new Iterator<int, std::vector<int>>(&vect);

	for (iterator->First(); iterator->HasNext(); iterator->Next())
	{
		auto value = iterator->Current();

		std::cout << *value << '\n';
	}

	return 0;
}