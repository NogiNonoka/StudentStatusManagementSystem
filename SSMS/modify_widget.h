#ifndef MODIFY_WIDGET_H
#define MODIFY_WIDGET_H

#include <QWidget>

namespace Ui {
class ModifyWidget;
}

class ModifyWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ModifyWidget(QWidget *parent = nullptr);
    ~ModifyWidget();

private:
    Ui::ModifyWidget *ui;

private slots:
    void ReturnButtonClick();

signals:
    void display(int number);
};

#endif // MODIFY_WIDGET_H
