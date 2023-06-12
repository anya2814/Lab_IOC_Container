#ifndef COMPUTER_H
#define COMPUTER_H


class Computer
{
public:
    IntelProcessor* GetProcessor(double speed, ProcessorType type, string version)
    {
        return new IntelProcessor(speed, type, version);
    }

};

#endif // COMPUTER_H
