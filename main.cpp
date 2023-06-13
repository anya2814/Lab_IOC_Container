#include <QCoreApplication>

#include <iostream>
#include "computer.h"
#include "ioc_container.h"
#include "iprocessor.h"
#include "intelprocessor.h"
#include "amdprocessor.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //------Example #1----------------
    IOCContainer injector;
    // каждый раз запрашивая IProcessor получаем IntelProcessor
    injector.RegisterInstance<IProcessor, IntelProcessor>();
    // создаем процессор Intel
    auto processorIntel = injector.GetObject<IProcessor>();
    // задаем характеристики процессора
    processorIntel->SetProcessor("i5-10400", ProcessorType::x64, 2.90);
    // создаем объект Computer с уже созданным процессором
    Computer computerIntel(processorIntel);
    // вызываем через процессор функцию для получения информации
    std::cout << computerIntel.GetProcessor()->GetProcessorInfo() << std::endl;

    //------Example #2----------------
    // каждый раз запрашивая IProcessor получаем AMDProcessor
    injector.RegisterInstance<IProcessor, AMDProcessor>();
    auto processorAMD = injector.GetObject<IProcessor>();
    processorAMD->SetProcessor("Ryzen 3 4100", ProcessorType::x64, 3.80);
    Computer computerAMD(processorAMD);
    std::cout << computerAMD.GetProcessor()->GetProcessorInfo() << std::endl;

    return a.exec();
}
