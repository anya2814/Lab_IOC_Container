#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора Intel
class IntelProcessor: public IProcessor
{
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    IntelProcessor();      // конструктор по умолчанию
    void SetProcessor(std::string Version_, ProcessorType Type_, double Speed_) override; // для задания характеристик процессора
    std::string GetProcessorInfo() override;         // получение информации о процессоре
 };

#endif // INTELPROCESSOR_H
