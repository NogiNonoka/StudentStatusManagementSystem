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

void AddStudentWidget::on_addButton_clicked()
{
    if (ui->nameEdit->text() == ""
     || ui->idEdit->text() == ""
     || ui->sexEdit->text() == ""
     || ui->mathEdit->text() == ""
     || ui->cProgramEdit->text() == "")
    {
        QMessageBox::about(nullptr, "错误", "信息不完全。");
        return;
    }
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString sex = ui->sexEdit->text();
    double math = ui->mathEdit->text().toDouble();
    double cprogram = ui->cProgramEdit->text().toDouble();
    if (sex != "男" && sex != "女")
    {
        QMessageBox::about(nullptr, "错误", "性别有效值为：男/女。");
        return;
    }
    if (math < 0 || math > 100 || cprogram < 0 || cprogram > 100)
    {
        QMessageBox::about(nullptr, "错误", "成绩有效区间区间为：[1, 100]。");
        return;
    }
    QFile file("StudentStatus.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "数据文件打开失败。");
        return;
    }
    QTextStream out(&file);
    out << name << " " <<  id << " " << sex << " " << math << " " << cprogram << endl;
    file.close();
    QMessageBox::about(NULL, "反馈", "学生信息添加成功。");
    ui->nameEdit->clear();
    ui->idEdit->clear();
    ui->sexEdit->clear();
    ui->mathEdit->clear();
    ui->cProgramEdit->clear();
}

void AddStudentWidget::on_clearButton_clicked()
{
    ui->nameEdit->clear();
    ui->idEdit->clear();
    ui->sexEdit->clear();
    ui->mathEdit->clear();
    ui->cProgramEdit->clear();
}
