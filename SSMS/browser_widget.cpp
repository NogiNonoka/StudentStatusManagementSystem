#include "browser_widget.h"
#include "ui_browser_widget.h"

BrowserWidget::BrowserWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::BrowserWidget)
{
    ui->setupUi(this);
}

BrowserWidget::~BrowserWidget()
{
    delete ui;
}
