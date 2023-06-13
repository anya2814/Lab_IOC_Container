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
    IProcessor();   // конструктор по умолчанию
    virtual void SetProcessor(std::string Version_, ProcessorType Type_, double Speed_); // для задания характеристик процессора
    virtual std::string GetProcessorInfo() = 0;         // получение информации о процессоре
};

#endif // IPROCESSOR_H
