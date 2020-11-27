#include "add_student_widget.h"
#include "ui_add_student_widget.h"

AddStudentWidget::AddStudentWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddStudentWidget)
{
    ui->setupUi(this);
}

AddStudentWidget::~AddStudentWidget()
{
    delete ui;
}

void AddStudentWidget::on_returnButton_clicked()
{
    emit display(0);
}
