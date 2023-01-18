#pragma once

#include <string>

class Handler
{
public:
	virtual Handler* SetNext(Handler* handler) = 0;
	virtual std::string Handle(std::string request) = 0;
};

class AbstractHandler : public Handler
{
public:
	virtual Handler* SetNext(Handler* handler) override
	{
		this->m_NextHandler = handler;

		return handler;
	}

	virtual std::string Handle(std::string request) override
	{
		if (this->m_NextHandler) {
			return this->m_NextHandler->Handle(request);
		}

		return {};
	}

private:
	Handler* m_NextHandler;
};