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
