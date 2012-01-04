#ifndef CNETWORKAM_H
#define CNETWORKAM_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cprogressbar.h"

#include <QMainWindow>
#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QtWebKit/QWebView>
#include <QUrl>

class cNetworkAM : public QObject
{
    Q_OBJECT
    QNetworkAccessManager *m_pmanager;
    QNetworkRequest *m_prequest;
    int m_uint;

public:
    explicit cNetworkAM();
    QNetworkReply *m_preply;

signals:


public slots:
    void objInit(const QUrl &url,MainWindow *mainWindow);
    void downloadFinished();
    QString saveFileName(const QUrl &url);
    bool writetoDisk(const QString &filename, QIODevice *data);
    void DownloadAbort();

private:
    Ui::MainWindow *ui;
    
};

#endif // CNETWORKAM_H
