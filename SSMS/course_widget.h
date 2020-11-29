#ifndef COURSE_WIDGET_H
#define COURSE_WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

#include "course_info.h"

namespace Ui {
class CourseWidget;
}

class CourseWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CourseWidget(QWidget *parent = nullptr);
    ~CourseWidget();

private:
    Ui::CourseWidget *ui;

private slots:

    void on_returnButton_clicked();

    void on_courseBox_currentTextChanged(const QString &arg1);

signals:
    void display(int number);
};

#endif // COURSE_WIDGET_H
