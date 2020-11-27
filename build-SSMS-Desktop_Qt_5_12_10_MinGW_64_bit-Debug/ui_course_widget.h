/********************************************************************************
** Form generated from reading UI file 'course_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COURSE_WIDGET_H
#define UI_COURSE_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseWidget
{
public:
    QPushButton *returnButton;
    QLabel *widgetLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *courseLabel;
    QLabel *averageLabel;
    QLabel *passLabel;
    QVBoxLayout *verticalLayout_2;
    QComboBox *courseBox;
    QLabel *getAverageLabel;
    QLabel *getPassLabel;

    void setupUi(QWidget *CourseWidget)
    {
        if (CourseWidget->objectName().isEmpty())
            CourseWidget->setObjectName(QString::fromUtf8("CourseWidget"));
        CourseWidget->resize(400, 300);
        returnButton = new QPushButton(CourseWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(300, 250, 80, 24));
        widgetLabel = new QLabel(CourseWidget);
        widgetLabel->setObjectName(QString::fromUtf8("widgetLabel"));
        widgetLabel->setGeometry(QRect(160, 70, 80, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        widgetLabel->setFont(font);
        widget = new QWidget(CourseWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(80, 120, 241, 91));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        courseLabel = new QLabel(widget);
        courseLabel->setObjectName(QString::fromUtf8("courseLabel"));

        verticalLayout->addWidget(courseLabel);

        averageLabel = new QLabel(widget);
        averageLabel->setObjectName(QString::fromUtf8("averageLabel"));

        verticalLayout->addWidget(averageLabel);

        passLabel = new QLabel(widget);
        passLabel->setObjectName(QString::fromUtf8("passLabel"));

        verticalLayout->addWidget(passLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        courseBox = new QComboBox(widget);
        courseBox->addItem(QString());
        courseBox->addItem(QString());
        courseBox->addItem(QString());
        courseBox->setObjectName(QString::fromUtf8("courseBox"));

        verticalLayout_2->addWidget(courseBox);

        getAverageLabel = new QLabel(widget);
        getAverageLabel->setObjectName(QString::fromUtf8("getAverageLabel"));

        verticalLayout_2->addWidget(getAverageLabel);

        getPassLabel = new QLabel(widget);
        getPassLabel->setObjectName(QString::fromUtf8("getPassLabel"));

        verticalLayout_2->addWidget(getPassLabel);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(CourseWidget);

        QMetaObject::connectSlotsByName(CourseWidget);
    } // setupUi

    void retranslateUi(QWidget *CourseWidget)
    {
        CourseWidget->setWindowTitle(QApplication::translate("CourseWidget", "Form", nullptr));
        returnButton->setText(QApplication::translate("CourseWidget", "\350\277\224\345\233\236", nullptr));
        widgetLabel->setText(QApplication::translate("CourseWidget", "\350\257\276\347\250\213\344\277\241\346\201\257", nullptr));
        courseLabel->setText(QApplication::translate("CourseWidget", "\350\257\276\347\250\213", nullptr));
        averageLabel->setText(QApplication::translate("CourseWidget", "\345\235\207\345\210\206", nullptr));
        passLabel->setText(QApplication::translate("CourseWidget", "\345\217\212\346\240\274\347\216\207", nullptr));
        courseBox->setItemText(0, QApplication::translate("CourseWidget", "\351\273\230\350\256\244", nullptr));
        courseBox->setItemText(1, QApplication::translate("CourseWidget", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        courseBox->setItemText(2, QApplication::translate("CourseWidget", "\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));

        getAverageLabel->setText(QApplication::translate("CourseWidget", "NULL", nullptr));
        getPassLabel->setText(QApplication::translate("CourseWidget", "NULL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseWidget: public Ui_CourseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_WIDGET_H
