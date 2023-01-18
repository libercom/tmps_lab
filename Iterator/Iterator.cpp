#include <vector>

template <typename T, typename U>
class Iterator
{
public:
	typedef typename std::vector<T>::iterator iter_type;

	Iterator(U* data)
	{
		m_Data = data;
		m_It = m_Data->begin();
	}

	void First()
	{
		m_It = m_Data->begin();
	}

	void Next()
	{
		m_It++;
	}

	bool HasNext()
	{
		return m_It != m_Data->end();
	}

	iter_type Current()
	{
		return m_It;
	}

private:
	U* m_Data;
	iter_type m_It;
};