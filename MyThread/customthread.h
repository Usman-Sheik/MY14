#ifndef CUSTOMTHREAD_H
#define CUSTOMTHREAD_H

#include <QThread>

class CustomThread : public QThread
{
    Q_OBJECT
public:
    explicit CustomThread(QObject *parent = 0);

protected:
    void run();
    
signals:
    
public slots:
    
};

#endif // CUSTOMTHREAD_H
