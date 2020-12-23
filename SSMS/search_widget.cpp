#include "search_widget.h"
#include "ui_search_widget.h"

SearchWidget::SearchWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SearchWidget)
{
    ui->setupUi(this);
}

SearchWidget::~SearchWidget()
{
    delete ui;
}

void SearchWidget::on_returnButton_clicked()
{
    emit display(0);
}

int SearchID(const int courseCnt, const QString &aimID)
{
    // 返回查询学生在数据库中行号；
    int lineID = -1;
    QFile file("StudentStatus.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "错误", "数据文件打开失败。");
        return lineID;
    }
    QTextStream inp(&file);
    while(!inp.atEnd())
    {
        lineID++;
        QString id, name, sex;
        inp >> id >> name >> sex;
        if (id == aimID)
        {
            file.close();
            return lineID;
        }
        for (int i = 0; i < courseCnt; ++i)
        {
            double scoreTmp;
            inp >> scoreTmp;
        }
    }
    QMessageBox::about(nullptr, "错误", "学生信息未找到。");
    return -1;
}

bool DeleteID(const int line)
{
    QFile file("StudentStatus.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "错误", "数据文件打开失败。");
        return false;
    }
    QTextStream inp(&file);
    QString fileStr = inp.readAll();
    int rmStartPos, rmEndPos;
    rmStartPos = 0;
    rmEndPos = 0;
    if (line == 0)
    {
        rmEndPos = fileStr.indexOf('\n', rmEndPos + 1);
        fileStr.remove(rmStartPos, rmEndPos - rmStartPos + 1);
    }
    else
    {
        for (int i = 0; i < line; ++i)
        {
            rmStartPos = fileStr.indexOf('\n', rmStartPos + 1);
            rmEndPos = fileStr.indexOf('\n', rmEndPos + 1);
        }
        rmEndPos = fileStr.indexOf('\n', rmEndPos + 1);
        fileStr.remove(rmStartPos + 1, rmEndPos - rmStartPos);
    }
    file.remove();
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "数据文件打开失败。");
        return false;
    }
    QTextStream out(&file);
    out << fileStr;
    file.close();
    return true;
}

void SearchWidget::on_searchButton_clicked()
{
    QString aimID = ui->idEdit->text();
    int courseCnt = 2;
    int line = SearchID(courseCnt, aimID);
    if (line == -1)
        return;
    QFile file("StudentStatus.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(nullptr, "错误", "数据文件打开失败。");
        return;
    }
    QTextStream inp(&file);
    for (int i = 0; i < line; ++i)
    {
        QString id, name, sex;
        inp >> id >> name >> sex;
        for (int i = 0; i < courseCnt; ++i)
        {
            double scoreTmp;
            inp >> scoreTmp;
        }
    }
    QString id, name, sex;
    inp >> id >> name >> sex;
    ui->idEdit->setText(id);
    ui->nameEdit->setText(name);
    ui->sexEdit->setText(sex);
    for (int i = 0; i < courseCnt; ++i)
    {
        double scoreTmp;
        inp >> scoreTmp;
        if (i == 0)
            ui->mathEdit->setText(QString::number(scoreTmp));
        if (i == 1)
            ui->cProgramEdit->setText(QString::number(scoreTmp));
    }
    file.close();
}

void SearchWidget::on_deleteButton_clicked()
{
    QString aimID = ui->idEdit->text();
    int courseCnt = 2;
    int line = SearchID(courseCnt, aimID);
    if (line == -1)
        return;
    if (DeleteID(line))
        QMessageBox::about(nullptr, "反馈", "学生信息删除成功。");
}

void SearchWidget::on_modifyButton_clicked()
{
    QString aimID = ui->idEdit->text();
    int courseCnt = 2;
    int line = SearchID(courseCnt, aimID);
    if (line == -1)
        return;
    QString name = ui->nameEdit->text();
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
        QMessageBox::about(nullptr, "错误", "成绩有效区间为：[0, 100]。");
        return;
    }
    if (!DeleteID(line))
        return;
    QFile file("StudentStatus.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "数据文件打开失败。");
        return;
    }
    QTextStream out(&file);
    out << aimID << " " <<  name << " " << sex << " " << math << " " << cprogram << endl;
    file.close();
    QMessageBox::about(NULL, "反馈", "学生信息修改成功。");
}
