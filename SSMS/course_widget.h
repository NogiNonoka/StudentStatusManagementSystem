#ifndef COURSE_WIDGET_H
#define COURSE_WIDGET_H

#include <QWidget>

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
};

#endif // COURSE_WIDGET_H
