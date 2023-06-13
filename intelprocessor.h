#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора
class IntelProcessor: public IProcessor
{
public:
    IntelProcessor(): IProcessor() { }
    std::string GetProcessorInfo();
 };

#endif // INTELPROCESSOR_H
