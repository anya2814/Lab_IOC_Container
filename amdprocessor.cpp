#include "amdprocessor.h"

std::string AMDProcessor::GetProcessorInfo()
{
    return "Processor AMD for " + Version + ", " + std::to_string(Speed) + " GHz, " + "x" + std::to_string(Type);
}
