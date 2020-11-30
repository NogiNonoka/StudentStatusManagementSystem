#include "browser_widget.h"
#include "ui_browser_widget.h"

BrowserWidget::BrowserWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BrowserWidget)
{
    ui->setupUi(this);
    ui->statusTable->setColumnCount(6);
    QStringList headerLabels;
    headerLabels << tr("学号") << tr("姓名") << tr("性别") << tr("总分") << tr("高等数学") << tr("程序设计");
    ui->statusTable->setHorizontalHeaderLabels(headerLabels);
    ui->statusTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->statusTable->setRowCount(0);
}

BrowserWidget::~BrowserWidget()
{
    delete ui;
}

void BrowserWidget::on_returnButton_clicked()
{
    emit display(0);
}

bool InputStudentStatus(QVector<StudentStatus> &statusArray)
{
    QFile file("StudentStatus.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "反馈", "数据文件打开失败");
        return false;
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        QString id, name, sex;
        double math, cprogram;
        inp >> id >> name >> sex >> math >> cprogram;
        statusArray.push_back(StudentStatus(id, name, sex, math, cprogram));
    }
    statusArray.pop_back();
    file.close();
    return true;
}

bool cmp_id(StudentStatus &a, StudentStatus &b){return a.GetID() < b.GetID();}
bool cmp_name(StudentStatus &a, StudentStatus &b){return a.GetName() < b.GetName();}
bool cmp_sum(StudentStatus &a, StudentStatus &b){return a.GetSum() < b.GetSum();}
bool cmp_math(StudentStatus &a, StudentStatus &b){return a.GetMath() < b.GetMath();}
bool cmp_cprogram(StudentStatus &a, StudentStatus &b){return a.GetCProgram() < b.GetCProgram();}

void BrowserWidget::on_sortButton_clicked()
{
    ui->statusTable->clearContents();
    ui->statusTable->setRowCount(0);
    QVector<StudentStatus> statusArray;
    if (!InputStudentStatus(statusArray))
        return;
    if (statusArray.size() == 0)
    {
        QMessageBox::about(nullptr, "反馈", "学生信息为空");
        return;
    }

    QString mode = ui->modeBox->currentText();
    QString type = ui->typeBox->currentText();
    if (mode == "默认" || mode == "学号")
        std::sort(statusArray.begin(), statusArray.end(), cmp_id);
    if (mode == "姓名")
         std::sort(statusArray.begin(), statusArray.end(), cmp_name);
    if (mode == "总分")
        std::sort(statusArray.begin(), statusArray.end(), cmp_sum);
    if (mode == "高等数学")
        std::sort(statusArray.begin(), statusArray.end(), cmp_math);
    if (mode == "程序设计")
        std::sort(statusArray.begin(), statusArray.end(), cmp_cprogram);
    if (type == "降序")
        std::reverse(statusArray.begin(), statusArray.end());
    ui->statusTable->setRowCount(statusArray.size());
    for(int i = 0; i < statusArray.size(); i++)
    {
        ui->statusTable->setItem(i, 0, new QTableWidgetItem(statusArray[i].GetID()));
        ui->statusTable->setItem(i, 1, new QTableWidgetItem(statusArray[i].GetName()));
        ui->statusTable->setItem(i, 2, new QTableWidgetItem(statusArray[i].GetSex()));
        ui->statusTable->setItem(i, 3, new QTableWidgetItem(QString::number(statusArray[i].GetSum())));
        ui->statusTable->setItem(i, 4, new QTableWidgetItem(QString::number(statusArray[i].GetMath())));
        ui->statusTable->setItem(i, 5, new QTableWidgetItem(QString::number(statusArray[i].GetCProgram())));
    }
}

void BrowserWidget::on_clearButton_clicked()
{
    QFile file("StudentStatus.txt");
    file.remove();
    file.close();
}
