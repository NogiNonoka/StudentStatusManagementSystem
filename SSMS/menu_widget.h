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

private slots:

    void on_addButton_clicked();
    void on_browserButton_clicked();
    void on_courseButton_clicked();
    void on_exitButton_clicked();
    void on_searchButton_clicked();

signals:
    void display(int number);
};

#endif // MENU_WIDGET_H
