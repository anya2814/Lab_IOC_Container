#ifndef AMDPROCESSOR_H
#define AMDPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора AMD
class AMDProcessor: public IProcessor
{
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    AMDProcessor();        // конструктор по умолчанию
    void SetProcessor(std::string Version_, ProcessorType Type_, double Speed_) override; // для задания характеристик процессора
    std::string GetProcessorInfo() override;         // получение информации о процессоре
};

#endif // AMDPROCESSOR_H
