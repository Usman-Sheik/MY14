#include <QtCore/QCoreApplication>
#include <QtDebug>
#include <sender.h>
#include <receiver.h>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    receiver r;
    sender s;

    QObject::connect(&s,SIGNAL(sigSender()),&r,SLOT(sltReceiver()));
    
    return a.exec();
}
