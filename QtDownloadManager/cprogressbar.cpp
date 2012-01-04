#include "cprogressbar.h"
#include <QtWebKit/QWebView>
#include <QProgressBar>
#include <QDebug>

cProgressBar::cProgressBar(QWidget *parent) :
    QWidget(parent)
{
    m_parent = parent;
}

int cProgressBar::m_iyposition = 120 ;

void cProgressBar::createProgressBar()
{
    qDebug()<<m_iyposition;
    qDebug()<<"Inside the create progress function";
    m_pprogressbar = new QProgressBar(m_parent);
    m_pprogressbar->setGeometry(80,m_iyposition,591,27);
    m_pprogressbar->show();

    m_pCancelButton = new QPushButton(m_parent);
    m_pCancelButton->setGeometry(780,m_iyposition,97,30);
    m_pCancelButton->show();
    m_pCancelButton->setText("Cancel");

    m_iyposition += 50 ;
}

void cProgressBar::updateDownloadProgress(qint64 bytesread, qint64 bytestotal)
{
    qDebug()<<"Download in Progress";
    m_pprogressbar->setMaximum(bytestotal);
    m_pprogressbar->setValue(bytesread);
}

