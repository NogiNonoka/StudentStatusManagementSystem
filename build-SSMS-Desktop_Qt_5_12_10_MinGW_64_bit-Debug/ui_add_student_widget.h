/********************************************************************************
** Form generated from reading UI file 'add_student_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_STUDENT_WIDGET_H
#define UI_ADD_STUDENT_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName(QString::fromUtf8("AddStudentWidget"));
        AddStudentWidget->resize(400, 300);

        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QApplication::translate("AddStudentWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_WIDGET_H
