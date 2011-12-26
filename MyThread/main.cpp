#include <QtCore/QCoreApplication>
#include "sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    sender *sen = new sender;
    receiver *rcvr = new receiver;
    QObject::connect(sen,SIGNAL(sigSender()),rcvr,SLOT(sltReceiver()));
    QObject::connect(rcvr,SIGNAL(onThreadSignal()),sen,SLOT(inFunctionSender()));
    rcvr->start();

    
    return a.exec();
}
