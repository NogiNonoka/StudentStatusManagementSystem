#include "main_widget.h"
#include "ui_main_widget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    menuWidget = new MenuWidget;

    addStudentWidget = new AddStudentWidget;
    broswerWidget = new BrowserWidget;
    courseWidget = new CourseWidget;
    searchWidget = new SearchWidget;

    qStackedLayout = new QStackedLayout;

    qStackedLayout->addWidget(menuWidget);

    qStackedLayout->addWidget(addStudentWidget);
    qStackedLayout->addWidget(broswerWidget);
    qStackedLayout->addWidget(courseWidget);
    qStackedLayout->addWidget(searchWidget);

    setLayout(qStackedLayout);

    connect(addStudentWidget, &AddStudentWidget::display, qStackedLayout, &QStackedLayout::setCurrentIndex);
    connect(broswerWidget, &BrowserWidget::display, qStackedLayout, &QStackedLayout::setCurrentIndex);
    connect(courseWidget, &CourseWidget::display, qStackedLayout, &QStackedLayout::setCurrentIndex);
    connect(menuWidget, &MenuWidget::display, qStackedLayout, &QStackedLayout::setCurrentIndex);
    connect(searchWidget, &SearchWidget::display, qStackedLayout, &QStackedLayout::setCurrentIndex);
}

MainWidget::~MainWidget()
{
    delete ui;
}
