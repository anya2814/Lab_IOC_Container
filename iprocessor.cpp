#include "iprocessor.h"



void IProcessor::SetProcessor(std::string Version_, ProcessorType Type_, double Speed_)
{
    Version = Version_; Speed = Speed_;
    if (Type == 64 || Type == 86)
        Type = Type_;
    else std::cout << "Incorrect processor type." << std::endl;
}
