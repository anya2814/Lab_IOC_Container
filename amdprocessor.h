#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора
class AMDProcessor: public IProcessor
{
public:
    AMDProcessor(): IProcessor() { }
    std::string GetProcessorInfo();
};

#endif // AMDPROCESSOR_H
