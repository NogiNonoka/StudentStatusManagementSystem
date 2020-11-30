#ifndef ADD_STUDENT_WIDGET_H
#define ADD_STUDENT_WIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class AddStudentWidget;
}

class AddStudentWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddStudentWidget(QWidget *parent = nullptr);
    ~AddStudentWidget();

private:
    Ui::AddStudentWidget *ui;

private slots:
    void on_returnButton_clicked();
    void on_addButton_clicked();
    void on_clearButton_clicked();

signals:
    void display(int number);
};

#endif // ADD_STUDENT_WIDGET_H
