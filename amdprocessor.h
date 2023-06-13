#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора AMD
class AMDProcessor: public IProcessor
{
public:
    AMDProcessor(): IProcessor() { }        // конструктор по умолчанию
    std::string GetProcessorInfo();         // получение информации о процессоре
};

#endif // AMDPROCESSOR_H
