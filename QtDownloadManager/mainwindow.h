#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>
#include <QtWebKit/QWebView>
#include <QUrl>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:
    void signal();
    
private slots:
    void on_pushButton_Download_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
