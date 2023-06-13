#include <QCoreApplication>

#include <iostream>
#include <memory>
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


    return a.exec();
}
