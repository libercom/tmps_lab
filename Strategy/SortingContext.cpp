#include <memory>

#include "SortingStrategy.h"

class SortingContext
{
public:
	explicit SortingContext(std::unique_ptr<Libercom::SortingStrategy>&& strategy = {}) : m_Strategy(std::move(strategy))
	{
	}

	void SetStrategy(std::unique_ptr<Libercom::SortingStrategy> &&strategy)
	{
		m_Strategy = std::move(strategy);
	}

	void Sort(std::vector<int> data)
	{
		m_Strategy->Sort(data);
	}

private:
	std::unique_ptr<Libercom::SortingStrategy> m_Strategy;
};