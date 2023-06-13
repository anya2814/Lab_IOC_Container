#include <QCoreApplication>

#include <iostream>
#include <memory>
#include "iprocessor.h"
#include "intelprocessor.h"

enum ProcessorType
{ x86,
   x64
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IProcessor *processor = std::make_shared<IntelProcessor>();

    return a.exec();
}
