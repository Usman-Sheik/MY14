#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>

class receiver : public QObject
{
    Q_OBJECT
public:
    explicit receiver(QObject *parent = 0);
    
signals:
    
public slots:
    void sltReceiver();
    
};

#endif // RECEIVER_H
