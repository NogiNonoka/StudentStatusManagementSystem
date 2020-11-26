#include "main_widget.h"
#include "ui_main_widget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    asw = new AddStudentWidget;
    bw = new BrowserWidget;
    cw = new CourseWidget;
    menu = new MenuWidget;
    mw = new ModifyWidget;
    sw = new SearchWidget;

    qsl = new QStackedLayout;

    qsl->addWidget(asw);
    qsl->addWidget(bw);
    qsl->addWidget(cw);
    qsl->addWidget(menu);
    qsl->addWidget(mw);
    qsl->addWidget(sw);

    setLayout(qsl);
}

MainWidget::~MainWidget()
{
    delete ui;
}
