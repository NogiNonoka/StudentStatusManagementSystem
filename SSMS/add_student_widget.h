#ifndef ADD_STUDENT_WIDGET_H
#define ADD_STUDENT_WIDGET_H

#include <QWidget>

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
};

#endif // ADD_STUDENT_WIDGET_H
