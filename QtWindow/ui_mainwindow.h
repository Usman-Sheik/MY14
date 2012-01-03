/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Dec 29 10:58:38 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *lineEdit_Url;
    QPushButton *pushButton_Go;
    QComboBox *comboBox_Url;
    QComboBox *comboBox_FGBG;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1297, 822);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        lineEdit_Url = new QLineEdit(centralWidget);
        lineEdit_Url->setObjectName(QString::fromUtf8("lineEdit_Url"));
        lineEdit_Url->setGeometry(QRect(50, 30, 1041, 27));
        pushButton_Go = new QPushButton(centralWidget);
        pushButton_Go->setObjectName(QString::fromUtf8("pushButton_Go"));
        pushButton_Go->setGeometry(QRect(1130, 30, 71, 27));
        comboBox_Url = new QComboBox(centralWidget);
        comboBox_Url->setObjectName(QString::fromUtf8("comboBox_Url"));
        comboBox_Url->setGeometry(QRect(50, 80, 1041, 27));
        comboBox_FGBG = new QComboBox(centralWidget);
        comboBox_FGBG->setObjectName(QString::fromUtf8("comboBox_FGBG"));
        comboBox_FGBG->setGeometry(QRect(1120, 80, 85, 27));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1297, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        lineEdit_Url->setText(QApplication::translate("MainWindow", "http://www.google.com", 0, QApplication::UnicodeUTF8));
        pushButton_Go->setText(QApplication::translate("MainWindow", "Go", 0, QApplication::UnicodeUTF8));
        comboBox_FGBG->clear();
        comboBox_FGBG->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Set BG", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "Set FG", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
