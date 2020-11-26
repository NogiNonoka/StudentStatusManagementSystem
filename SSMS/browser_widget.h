#ifndef BROWSER_WIDGET_H
#define BROWSER_WIDGET_H

#include <QWidget>

namespace Ui {
class BrowserWidget;
}

class BrowserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit BrowserWidget(QWidget *parent = nullptr);
    ~BrowserWidget();

private:
    Ui::BrowserWidget *ui;
};

#endif // BROWSER_WIDGET_H
