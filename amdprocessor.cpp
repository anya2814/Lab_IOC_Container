#include "amdprocessor.h"

AMDProcessor::AMDProcessor()
{
    Version = std::string();
    Type = ProcessorType::x64;
    Speed = 0;
}

void AMDProcessor::SetProcessor(std::string Version_, ProcessorType Type_, double Speed_)
{
    Version = Version_; Speed = Speed_;
    if (Type == 64 || Type == 86)
        Type = Type_;
    else std::cout << "Incorrect processor type." << std::endl;
}

std::string AMDProcessor::GetProcessorInfo()
{
    return "Processor AMD for " + Version + ", " + std::to_string(Speed) + " GHz, " + "x" + std::to_string(Type);
}
