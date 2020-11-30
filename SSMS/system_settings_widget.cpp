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
