#include "Handler.h"

class SwapBufferHandler : public AbstractHandler
{
public:
    std::string Handle(std::string request) override {
        if (request == "SwapBuffer") {
            return "Buffer swaped\n";
        }
        else {
            return AbstractHandler::Handle(request);
        }
    }
};