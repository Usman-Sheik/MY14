#include "myvector.h"
#include <QVector>
#include<QDebug>


MyVector::MyVector(QObject *parent) :
    QObject(parent)
{
}

void MyVector::addno(int newno)
{
    v_list.append(newno);
}

void MyVector::displayv_list()
{
    foreach(int n, v_list)
    {
        qDebug()<<n;
    }
}
