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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CourseWidget
{
public:

    void setupUi(QWidget *CourseWidget)
    {
        if (CourseWidget->objectName().isEmpty())
            CourseWidget->setObjectName(QString::fromUtf8("CourseWidget"));
        CourseWidget->resize(400, 300);

        retranslateUi(CourseWidget);

        QMetaObject::connectSlotsByName(CourseWidget);
    } // setupUi

    void retranslateUi(QWidget *CourseWidget)
    {
        CourseWidget->setWindowTitle(QApplication::translate("CourseWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CourseWidget: public Ui_CourseWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COURSE_WIDGET_H
