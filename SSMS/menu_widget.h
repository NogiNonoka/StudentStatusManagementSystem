#ifndef MENU_WIDGET_H
#define MENU_WIDGET_H

#include <QWidget>

namespace Ui {
class MenuWidget;
}

class MenuWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MenuWidget(QWidget *parent = nullptr);
    ~MenuWidget();

private:
    Ui::MenuWidget *ui;
};

#endif // MENU_WIDGET_H
