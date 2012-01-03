#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtWebKit/QWebView>
#include <QGraphicsWebView>
#include <QtGui>
#include <QMap>

namespace Ui
{
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    int m_ncount ;
    int m_itemp;
    QGraphicsScene *pscene;
    QGraphicsWebView *pcurrentwebview;
    QGraphicsWebView *pmapwebview;
    QMap <QString, QGraphicsWebView*> m_mapbrowsers;
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_Go_clicked();

    void on_pushButton_clicked();

    void on_pushButtonFG_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
