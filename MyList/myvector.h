#ifndef MYVECTOR_H
#define MYVECTOR_H

#include <QObject>
#include <QVector>

class MyVector : public QObject
{
    Q_OBJECT
    QVector<int> v_list;
public:
    explicit MyVector(QObject *parent = 0);
    
signals:
    
public slots:
    void addno(int newno);
    void displayv_list();

};

#endif // MYVECTOR_H
