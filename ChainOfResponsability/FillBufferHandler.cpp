#include "Handler.h"

class FillBufferHandler : public AbstractHandler
{
public:
    std::string Handle(std::string request) override {
        if (request == "FillBuffer") {
            return "Buffer filled with data\n";
        }
        else {
            return AbstractHandler::Handle(request);
        }
    }
};