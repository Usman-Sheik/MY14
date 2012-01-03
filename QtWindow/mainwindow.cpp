#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDebug"
#include <QtWebKit/QWebView>
#include <QUrl>
#include <QTabWidget>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);    
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Go_clicked()
{
    QWebView *pobj_webview = new QWebView(this);
    m_mapBrowsers[ui->lineEdit_Url->text()] = pobj_webview;
    pobj_webview->setGeometry(QRect(30,130,1241,641));
    qDebug()<<"Go Button Pressed\n"<<ui->lineEdit_Url->text();
    pobj_webview->setUrl(ui->lineEdit_Url->text());
    pobj_webview->show();
    ui->comboBox_Url->addItem(ui->lineEdit_Url->text());
    ui->comboBox_Url->setCurrentIndex(ui->comboBox_Url->count()-1);
}

void MainWindow::on_comboBox_FGBG_currentIndexChanged(const QString &arg1)
{
    if(arg1 == "Set FG")
    {
        m_mapBrowsers[ui->comboBox_Url->currentText()]->raise();
    }

    else if(arg1 == "Set BG")
    {
        m_mapBrowsers[ui->comboBox_Url->currentText()]->lower();
    }
}
