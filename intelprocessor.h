#ifndef INTELPROCESSOR_H
#define INTELPROCESSOR_H

#

// класс конкретного процессора
class IntelProcessor
{
    string Version;
    ProcessorType Type;
    double Speed;
public:
    IntelProcessor(????){????}

//get,set????

    string GetProcessorInfo()
    {
        return "Processor for" + Version + Speed + Type;
    }

 };

#endif // INTELPROCESSOR_H
