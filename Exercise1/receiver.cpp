#include "receiver.h"

#include <QDebug>

receiver::receiver(QObject *parent) :
    QObject(parent)
{
}

void receiver::sltReceiver()
{
    static int i=0;
    qDebug()<<"receiver count"<<++i;
}
