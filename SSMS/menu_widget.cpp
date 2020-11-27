#include "menu_widget.h"
#include "ui_menu_widget.h"

MenuWidget::MenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MenuWidget)
{
    ui->setupUi(this);
}

MenuWidget::~MenuWidget()
{
    delete ui;
}

void MenuWidget::on_addButton_clicked()
{
    emit display(1);
}


void MenuWidget::on_browserButton_clicked()
{
    emit display(2);
}

void MenuWidget::on_courseButton_clicked()
{
    emit display(3);
}

void MenuWidget::on_searchButton_clicked()
{
    emit display(4);
}

void MenuWidget::on_exitButton_clicked()
{
    emit QApplication::exit();
}
