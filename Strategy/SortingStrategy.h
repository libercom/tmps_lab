#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

namespace Libercom
{
	class SortingStrategy
	{
	public:
		virtual ~SortingStrategy() = default;
		virtual std::vector<int> Sort(std::vector<int> data) const = 0;
	private:
	};
}