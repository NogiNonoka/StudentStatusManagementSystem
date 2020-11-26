/********************************************************************************
** Form generated from reading UI file 'modify_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_WIDGET_H
#define UI_MODIFY_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QString::fromUtf8("ModifyWidget"));
        ModifyWidget->resize(400, 300);

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QApplication::translate("ModifyWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_WIDGET_H
