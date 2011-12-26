#include "sender.h"
#include <QDebug>

sender::sender(QObject *parent) :
    QObject(parent)
{
    m_icount=0;
    startTimer(200);
}

void sender::timerEvent(QTimerEvent *event)
{
     qDebug() << "Timer ID:" << event->timerId();

    m_icount++;
    while(m_icount==3)
    {
        m_icount=0;
        qDebug()<<"Emit";
        emit sigSender();
    }
}



