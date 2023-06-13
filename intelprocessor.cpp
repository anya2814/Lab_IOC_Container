#include "intelprocessor.h"

std::string IntelProcessor::GetProcessorInfo()
{
    return "Processor Intel for " + Version + ", " + std::to_string(Speed) + " GHz, " + "x" + std::to_string(Type);
}
