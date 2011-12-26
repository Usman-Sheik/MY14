#ifndef SENDER_H
#define SENDER_H

#include <QObject>

class sender : public QObject
{
    Q_OBJECT
public:
    explicit sender(QObject *parent = 0);
    void timerEvent(QTimerEvent *event);
    
signals:
    void sigSender();
    
public slots:
    void inFunctionSender();
    
};

#endif // SENDER_H
