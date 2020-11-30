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
    QMessageBox::about(NULL, "反馈", "新建数据文件成功。");
}
