#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H

#include "iprocessor.h"
#include <string>

// класс конкретного процессора
class AMDProcessor
{
public:
    IntelProcessor(): IProcessor() { }
    string GetProcessorInfo()
    {
        return "Processor Intel for " + Version + ", " + Speed + "GHz, " + "x" + Type;
    }
};

#endif // AMDPROCESSOR_H
