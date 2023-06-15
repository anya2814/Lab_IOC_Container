#ifndef COMPUTER_H
#define COMPUTER_H

#include <iprocessor.h>
#include <memory>

class Computer
{
    std::shared_ptr<IProcessor> m_processor;            // указатель на процессор
public:
    Computer(std::shared_ptr<IProcessor> processor):    // конструктор
        m_processor(processor) { }
    std::string GetProcessor() { return m_processor->GetProcessorInfo(); }  // получаем информацию о процессоре
};

#endif // COMPUTER_H
