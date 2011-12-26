#ifndef MYLIST_H
#define MYLIST_H

#include <QList>

#include <QObject>

class MyLIst : public QObject
{
    Q_OBJECT
    QList<int> list;
public:
    explicit MyLIst(QObject *parent = 0);    
signals:    
public slots:

    void addElement(int);
    void remove();
    void displayList();
    
};

#endif // MYLIST_H
