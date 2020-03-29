#ifndef CONFIGSERIALPORT_H
#define CONFIGSERIALPORT_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class ConfigSerialPort; }
QT_END_NAMESPACE

class ConfigSerialPort : public QDialog
{
    Q_OBJECT

public:
    ConfigSerialPort(QWidget *parent = nullptr);
    ~ConfigSerialPort();

private:
    Ui::ConfigSerialPort *ui;
};
#endif // CONFIGSERIALPORT_H
