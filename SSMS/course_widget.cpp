#include "course_widget.h"
#include "ui_course_widget.h"

CourseWidget::CourseWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CourseWidget)
{
    ui->setupUi(this);
}

CourseWidget::~CourseWidget()
{
    delete ui;
}

void CourseWidget::on_returnButton_clicked()
{
    emit display(0);
}
