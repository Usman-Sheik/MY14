#include "cnetworkam.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cprogressbar.h"
#include <QNetworkAccessManager>
#include <QtWebKit/QWebView>
#include <QUrl>
#include <QFile>
#include <QFileInfo>
#include <QPrinter>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QDebug>
#include <QIODevice>

cNetworkAM::cNetworkAM()
{
    m_uint=0;
}

void cNetworkAM::objInit(const QUrl &url,MainWindow *mainWindow)
{
    cProgressBar *m_pcProgressBar = new cProgressBar(mainWindow);
    m_pcProgressBar->createProgressBar();
    m_pmanager = new QNetworkAccessManager();
    m_prequest = new QNetworkRequest(url);
    m_preply = m_pmanager->get(*m_prequest);
    connect(m_preply,SIGNAL(downloadProgress(qint64,qint64)),m_pcProgressBar,SLOT(updateDownloadProgress(qint64,qint64 )));
    connect(m_preply,SIGNAL(finished()),this,SLOT(downloadFinished()));
    connect(m_pcProgressBar->m_pCancelButton,SIGNAL(clicked()),this,SLOT(DownloadAbort()));
}

void cNetworkAM::downloadFinished()
{    
    QString filename = saveFileName(m_preply->url());
    qDebug()<<"File Name :"<<filename;
    if(writetoDisk(filename, m_preply))
    {
        qDebug()<<"File downloaded successfully";
    }
}

QString cNetworkAM::saveFileName(const QUrl &url)
{
    QString path = url.path();
    QString basename = QFileInfo(path).fileName();

    if (basename.isEmpty())
    {
        basename="Download";
    }
    if(QFile::exists(basename))
    {
        basename +='.';
        while(QFile::exists(basename + QString::number(m_uint)))
        {
            ++m_uint;
            basename += QString::number(m_uint);
        }
    }
    return basename;
}

bool cNetworkAM::writetoDisk(const QString &filename, QIODevice *data)
{
    QFile file(filename);

    if(!file.open(QIODevice::WriteOnly))
    {
        qDebug()<<"Could not open %s for writing: %s\n"<<qPrintable(filename)<<qPrintable(file.errorString());
        return false;
    }

    file.write(data->readAll());
    file.close();
    return true;
}

void cNetworkAM::DownloadAbort()
{
    qDebug()<<"Download Aborted";
    m_preply->abort();
}
