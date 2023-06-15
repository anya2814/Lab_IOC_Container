#include "intelprocessor.h"

IntelProcessor::IntelProcessor()
{
    Version = std::string();
    Type = ProcessorType::x64;
    Speed = 0;
}

void IntelProcessor::SetProcessor(std::string Version_, ProcessorType Type_, double Speed_)
{
    Version = Version_; Speed = Speed_; Type = Type_;
}

std::string IntelProcessor::GetProcessorInfo()
{
    return "Processor Intel for " + Version + ", " + std::to_string(Speed) + " GHz, " + "x" + std::to_string(Type);
}
