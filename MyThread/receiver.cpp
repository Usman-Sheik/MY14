#include "receiver.h"
#include <QDebug>
#include <QEventLoop>

receiver::receiver(QObject *parent):
    QThread(parent)
{
    moveToThread(this);
}

void receiver::run()
{
    QEventLoop obj_loop;
    obj_loop.exec();
}

void receiver::sltReceiver()
{
        qDebug()<<"receiver count";
        qDebug()<<"The current thread id is "<< QThread::currentThreadId();
        emit onThreadSignal();
}
