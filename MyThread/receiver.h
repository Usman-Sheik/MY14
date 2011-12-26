#ifndef RECEIVER_H
#define RECEIVER_H

#include <QThread>

class receiver : public QThread
{
    Q_OBJECT
public:
    explicit receiver(QObject *parent =0);
protected:
    void run();
signals:
    void onThreadSignal();
public slots:
    void sltReceiver();
};

#endif // RECEIVER_H
