#include "webpage.h"

#include <QWebPage>

WebPage::WebPage(QWebPage *parent) :
    QWebPage(parent)
{
}

bool WebPage::extension(Extension extension, const ExtensionOption *option, ExtensionReturn *output)
{
    const ErrorPageExtensionOption *error_option = static_cast<const ErrorPageExtensionOption*>(option);
    ErrorPageExtensionReturn *error_return = static_cast<ErrorPageExtensionReturn*>(output);
    error_return->content = QString("Inavalid URL... Error Loading Page").arg(error_option->errorString).toUtf8();
    return true;
}
bool WebPage::supportsExtension(Extension extension) const
{
    return true;
}
