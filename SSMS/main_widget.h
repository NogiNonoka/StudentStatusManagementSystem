#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <QStackedLayout>

#include "add_student_widget.h"
#include "browser_widget.h"
#include "course_widget.h"
#include "menu_widget.h"
#include "modify_widget.h"
#include "search_widget.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;

    AddStudentWidget *addStudentWidget;
    BrowserWidget *broswerWidget;
    CourseWidget *courseWidget;
    MenuWidget *menuWidget;
    SearchWidget *searchWidget;

    QStackedLayout *qStackedLayout;
};

#endif // MAIN_WIDGET_H
