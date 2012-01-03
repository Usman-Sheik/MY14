#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsScene>
#include <QtWebKit/QWebView>
#include <QtDebug>
#include <QGraphicsWebView>
#include <QCloseEvent>
#include "webpage.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_ncount = 0;
    pscene = new QGraphicsScene;
    pcurrentwebview = new QGraphicsWebView;
    pmapwebview = new QGraphicsWebView;
    ui->graphicsView->setScene(pscene);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Go_clicked()
{
    qDebug()<<"Go Button pressed\n"<<ui->lineEdit_Url->text();
    QGraphicsWebView *m_pwebview = new QGraphicsWebView();
    m_pwebview->setPage(new WebPage());
    m_mapbrowsers[ui->lineEdit_Url->text()]=m_pwebview;
    pcurrentwebview = m_pwebview;
    m_pwebview->resize(1302,816);
    m_pwebview->setUrl(ui->lineEdit_Url->text());
    m_ncount++ ;
    m_pwebview->setZValue(m_ncount);
    qDebug()<<pcurrentwebview->zValue();
    ui->comboBox_Url->addItem(ui->lineEdit_Url->text());
    ui->comboBox_Url->setCurrentIndex(ui->comboBox_Url->count()-1);
    pscene->addItem(m_pwebview);
}

void MainWindow::on_pushButton_clicked()
{
    pcurrentwebview->close();
    qDebug()<<"Currentweview is closed";
}

void MainWindow::on_pushButtonFG_clicked()
{
    pmapwebview = m_mapbrowsers[ui->comboBox_Url->currentText()] ;
    qDebug()<<"The Z Value of Request URL"<<pmapwebview->zValue();
    qDebug()<<"The Z Value of Top most URL"<<pcurrentwebview->zValue();
    m_itemp = pmapwebview->zValue();
    pmapwebview->setZValue(pcurrentwebview->zValue());
    pcurrentwebview->setZValue(m_itemp);
    pcurrentwebview = pmapwebview ;
}
