#ifndef IPROCESSOR_H
#define IPROCESSOR_H

#include <iostream>

// перечисление типов процессоров
enum ProcessorType
{
    x86 = 86,
    x64 = 64
};

// абстрактный класс для процессоров
class IProcessor
{
protected:
    std::string Version;
    ProcessorType Type;
    double Speed;
public:
    IProcessor();
    virtual void SetProcessor(std::string Version_, ProcessorType Type_, double Speed_);
    virtual std::string GetProcessorInfo() = 0;
};

#endif // IPROCESSOR_H
