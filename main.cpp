#include "configserialport.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ConfigSerialPort w;
    w.show();
    return a.exec();
}
