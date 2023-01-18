#include "Handler.h"

class AbstractHandler : public Handler 
{
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