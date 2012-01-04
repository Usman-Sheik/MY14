#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cnetworkam.h"
#include "cprogressbar.h"

#include <QNetworkAccessManager>
#include <QtWebKit/QWebView>
#include <QUrl>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>

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

void MainWindow::on_pushButton_Download_clicked()
{
    cNetworkAM *m_pcNetworkAM = new cNetworkAM();
    m_pcNetworkAM->objInit(ui->lineEdit_Url->text(),this);
}
