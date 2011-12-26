#include "mylist.h"
#include<QDebug>

MyLIst::MyLIst(QObject *parent) :
    QObject(parent)
{
}

void MyLIst::addElement(int newVal)
{
    list.append(newVal);
}

void MyLIst::remove()
{
    list.removeFirst();
}

void MyLIst::displayList()
{
    foreach(int n, list)
    {
        qDebug()<<n;
    }

}
