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
    injector.RegisterInstance<IProcessor, IntelProcessor>();
    auto processorIntel = injector.GetObject<IProcessor>();
    processorIntel->SetProcessor("i5-10400", ProcessorType::x64, 2.90);
    Computer computerIntel(processorIntel);
    std::cout << computerIntel.GetProcessor()->GetProcessorInfo() << std::endl;

    //------Example #2----------------
    injector.RegisterInstance<IProcessor, AMDProcessor>();
    auto processorAMD = injector.GetObject<IProcessor>();
    processorAMD->SetProcessor("Ryzen 3 4100", ProcessorType::x64, 3.80);
    Computer computerAMD(processorAMD);
    std::cout << computerAMD.GetProcessor()->GetProcessorInfo() << std::endl;

    return a.exec();
}
