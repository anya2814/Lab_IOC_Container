#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#include "iprocessor.h"
#include <string>

// класс конкретного процессора
class IntelProcessor: public IProcessor
{
public:
    IntelProcessor(): IProcessor() { }
    string GetProcessorInfo()
    {
        return "Processor Intel for " + Version + ", " + Speed + "GHz, " + "x" + Type;
    }
 };

#endif // INTELPROCESSOR_H
