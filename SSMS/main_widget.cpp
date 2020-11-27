#include "main_widget.h"
#include "ui_main_widget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    addStudentWidget = new AddStudentWidget;
    broswerWidget = new BrowserWidget;
    courseWidget = new CourseWidget;
    menuWidget = new MenuWidget;
    modifyWidget = new ModifyWidget;
    searchWidget = new SearchWidget;

    qStackedLayout = new QStackedLayout;

    qStackedLayout->addWidget(addStudentWidget);
    qStackedLayout->addWidget(broswerWidget);
    qStackedLayout->addWidget(courseWidget);
    qStackedLayout->addWidget(menuWidget);
    qStackedLayout->addWidget(modifyWidget);
    qStackedLayout->addWidget(searchWidget);

    setLayout(qStackedLayout);
}

MainWidget::~MainWidget()
{
    delete ui;
}
