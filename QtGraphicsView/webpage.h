#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QWebPage>

class WebPage : public QWebPage
{
    Q_OBJECT
public:
    explicit WebPage(QWebPage *parent = 0);
    
protected:
    bool extension(Extension extension, const ExtensionOption *option, ExtensionReturn *output);
    bool supportsExtension(Extension extension) const;
signals:
    
public slots:
    
};

#endif // WEBPAGE_H
