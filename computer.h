#ifndef COMPUTER_H
#define COMPUTER_H

#include <iprocessor.h>
#include <ioc_container.h>

class Computer
{
    std::shared_ptr<IProcessor> m_processor;            // указатель на процессор
public:
    Computer(std::shared_ptr<IProcessor> processor):    // конструктор
        m_processor(processor) { }
    std::shared_ptr<IProcessor> GetProcessor() { return m_processor; }  // получаем ссылку на процессор
};

#endif // COMPUTER_H
