#include <QtCore/QCoreApplication>
#include <QList>
#include <QDebug>
#include "mylist.h"
#include "myvector.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyLIst objList ;

    MyVector objvector;

    objvector.addno(2);
    objvector.displayv_list();

    objList.addElement(5);
    objList.addElement(10);
    objList.addElement(15);
    objList.addElement(20);

    objList.displayList();
    objList.remove();

    objList.displayList();
    objList.remove();

    objList.displayList();
    objList.remove();

    objList.displayList();
    objList.remove();

    objList.displayList();

    return a.exec();
}
