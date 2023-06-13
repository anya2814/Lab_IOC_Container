#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#include "iprocessor.h"
#include <string>

// класс конкретного процессора
class IntelProcessor
{
    string Version;
    ProcessorType Type;
    double Speed;
public:
    IntelProcessor(/*string Version_ = "i5-10400", ProcessorType Type_ = 64, double Speed_ = 4.30 /*Ghz*/)
    {
        Version = string();
        Type = 64;
        Speed = 0;
    }
    void SetProcessor(/*string Version_ = "i5-10400", ProcessorType Type_ = 64, double Speed_ = 4.30 /*Ghz*/):
        Version(Version_), Type(Type_), Speed(Speed_) { };
    string GetProcessorInfo()
    {
        return "Processor for " + Version + ", " + Speed + "GHz, " + "x" + Type;
    }

 };

#endif // INTELPROCESSOR_H
