#include <QCoreApplication>

enum ProcessorType
{ x86,
   x64
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    return a.exec();
}
