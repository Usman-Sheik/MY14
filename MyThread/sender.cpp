#include "sender.h"
#include <QDebug>
#include <QTimerEvent>
#include <QThread>

sender::sender(QObject *parent) :
    QObject(parent)
{
    startTimer(2000);
}

void sender::timerEvent(QTimerEvent *event)
{
    qDebug() << "Timer ID:" << event->timerId();
    qDebug()<<"Emit";
    emit sigSender();
}

void sender::inFunctionSender()
{
    qDebug("Inside the Sender funciton in Sender File");
    qDebug()<<"The current thread id is "<< QThread::currentThreadId();
}
