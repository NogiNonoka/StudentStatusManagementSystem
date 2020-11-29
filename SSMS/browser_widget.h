#ifndef BROWSER_WIDGET_H
#define BROWSER_WIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>


#include "student_status.h"

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

private slots:
    void on_returnButton_clicked();

    void on_sortButton_clicked();

signals:
    void display(int number);
};

#endif // BROWSER_WIDGET_H
