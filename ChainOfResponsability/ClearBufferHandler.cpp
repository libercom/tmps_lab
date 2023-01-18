#include "Handler.h"

class ClearBufferHandler : public AbstractHandler
{
public:
    std::string Handle(std::string request) override {
        if (request == "ClearBuffer") {
            return "Buffer cleared\n";
        }
        else {
            return AbstractHandler::Handle(request);
        }
    }
};