#ifndef SENDER_H
#define SENDER_H

#include <QTimerEvent>
#include <QObject>

class sender : public QObject
{
    Q_OBJECT
    int m_icount;
public:
    explicit sender(QObject *parent = 0);

protected:
    void timerEvent(QTimerEvent *event);

signals:
    void sigSender();
    
public slots:
    
};

#endif // SENDER_H
