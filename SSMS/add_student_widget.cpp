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

bool CheckID(const int courseCnt, const QString &newID)
{
    for (int i = 0; i < newID.length(); ++i)
    {
        if (newID[i] < '0' || newID > '9')
        {
             QMessageBox::about(NULL, "错误", "学号应为纯数字。");
             return false;
        }
    }
    QFile file("StudentStatus.txt");
    if (!file.exists())
        return true;
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "错误", "数据文件检查失败");
        return false;
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        QString id, name, sex;
        inp >> id >> name >> sex;
        for (int i = 0; i < courseCnt; ++i)
        {
            double tmp;
            inp >> tmp;
        }
        if (newID == id)
        {
            QMessageBox::about(NULL, "错误", "数据文件已包含该学员，请去查询页面修改信息。");
            file.close();
            return false;
        }
    }
    file.close();
    return true;
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
    const int courseCnt = 2;
    QString name = ui->nameEdit->text();
    QString id = ui->idEdit->text();
    QString sex = ui->sexEdit->text();
    QVector<double> score;
    score.clear();
//    for (int i = 0; i < courseCnt; ++i);
    score.push_back(ui->mathEdit->text().toDouble());
    score.push_back(ui->cProgramEdit->text().toDouble());
    if (!CheckID(courseCnt, id))
        return;
    if (sex != "男" && sex != "女")
    {
        QMessageBox::about(nullptr, "错误", "性别有效值为：男/女。");
        return;
    }
    for (int i = 0; i < courseCnt; ++i)
    {
        if (score[i] < 0.0 || score[i] > 100.0)
        {
            QMessageBox::about(nullptr, "错误", "成绩有效区间为：[0, 100]。");
            return;
        }
    }
    QFile file("StudentStatus.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "数据文件打开失败。");
        return;
    }
    QTextStream out(&file);
    out << id << " " <<  name << " " << sex;
    for (int i = 0; i < courseCnt; ++i)
    {
        out << " " << score[i];
    }
    out << endl;
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
