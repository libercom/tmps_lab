#include <vector>
#include <string>
#include <iostream>

#include "FillBufferHandler.cpp"
#include "ClearBufferHandler.cpp"
#include "SwapBufferHandler.cpp"

int main()
{
	FillBufferHandler* fillBufferHandler = new FillBufferHandler;
	ClearBufferHandler* clearBufferHandler = new ClearBufferHandler;
	SwapBufferHandler* swapBufferHandler = new SwapBufferHandler;

	fillBufferHandler->SetNext(swapBufferHandler)->SetNext(clearBufferHandler);

	std::vector<std::string> actions = { "FillBuffer", "SwapBuffer", "ClearBuffer" };

	for (auto action : actions)
	{
		auto result = fillBufferHandler->Handle(action);

		std::cout << result;
	}

	return 0;
}