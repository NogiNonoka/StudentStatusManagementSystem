#ifndef SYSTEM_SETTINGS_WIDGET_H
#define SYSTEM_SETTINGS_WIDGET_H

#include <QWidget>
#include <QMessageBox>
#include <QFile>
#include <QString>

#include "course_info.h"

namespace Ui {
class SystemSettingsWidget;
}

class SystemSettingsWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SystemSettingsWidget(QWidget *parent = nullptr);
    ~SystemSettingsWidget();

private:
    Ui::SystemSettingsWidget *ui;

private slots:

    void on_returnButton_clicked();
    void on_initButton_clicked();

signals:
    void display(int number);
};

#endif // SYSTEM_SETTINGS_WIDGET_H
