#include "system_settings_widget.h"
#include "ui_system_settings_widget.h"

SystemSettingsWidget::SystemSettingsWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SystemSettingsWidget)
{
    ui->setupUi(this);
}

SystemSettingsWidget::~SystemSettingsWidget()
{
    delete ui;
}

void SystemSettingsWidget::on_returnButton_clicked()
{
    emit display(0);
}

bool checkNum(int &cnt, const QString &str)
{
    if (str.isEmpty())
    {
        QMessageBox::about(nullptr, "错误", "课程数量为空。");
        return false;
    }
    cnt = 0;
    for (int i = 0; i < str.length(); ++i)
    {
        if (!str[i].isNumber())
        {
            QMessageBox::about(nullptr, "错误", "课程数量应为纯数字。");
            return false;
        }
    }
    cnt = str.toInt();
    return true;
}

void SystemSettingsWidget::on_initButton_clicked()
{
    QFile file("StudentStatus.txt");
    file.remove();
    file.close();
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    if(!file.isOpen())
    {
        QMessageBox::about(NULL, "错误", "新建数据文件失败。");
        return;
    }
    file.close();
    QString cnt = ui->initEdit->text();
    if (!checkNum(CourseInfo::courseCnt, cnt))
        return;
    QMessageBox::about(NULL, "反馈", "新建数据文件成功。");
    CourseInfo::courseName.clear();
}
