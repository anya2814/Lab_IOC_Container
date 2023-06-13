#ifndef COMPUTER_H
#define COMPUTER_H

#include <iprocessor.h>
#include <ioc_container.h>

class Computer
{
    std::shared_ptr<IProcessor> m_processor;
public:
    Computer(std::shared_ptr<IProcessor> processor):
        m_processor(processor) { }
    std::shared_ptr<IProcessor> GetProcessor()
    {
        return m_processor;
    }

};

#endif // COMPUTER_H
