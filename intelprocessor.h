#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#include "iprocessor.h"

// класс конкретного процессора Intel
class IntelProcessor: public IProcessor
{
public:
    IntelProcessor(): IProcessor() { }      // конструктор по умолчанию
    std::string GetProcessorInfo();         // получение информации о процессоре
 };

#endif // INTELPROCESSOR_H
