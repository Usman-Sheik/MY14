#ifndef CPROGRESSBAR_H
#define CPROGRESSBAR_H
#include <QProgressBar>
#include <QWidget>
#include <QPushButton>

class cProgressBar : public QWidget
{
    Q_OBJECT
    static int m_iyposition ;
    QProgressBar *m_pprogressbar;
    QWidget *m_parent;
public:
    explicit cProgressBar(QWidget *parent = 0);
    QPushButton *m_pCancelButton;

signals:
    
public slots:
    void createProgressBar();
    void updateDownloadProgress(qint64,qint64);
    
};

#endif // CPROGRESSBAR_H
