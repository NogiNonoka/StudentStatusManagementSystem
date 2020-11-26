/********************************************************************************
** Form generated from reading UI file 'browser_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BROWSER_WIDGET_H
#define UI_BROWSER_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserWidget
{
public:

    void setupUi(QWidget *BrowserWidget)
    {
        if (BrowserWidget->objectName().isEmpty())
            BrowserWidget->setObjectName(QString::fromUtf8("BrowserWidget"));
        BrowserWidget->resize(400, 300);

        retranslateUi(BrowserWidget);

        QMetaObject::connectSlotsByName(BrowserWidget);
    } // setupUi

    void retranslateUi(QWidget *BrowserWidget)
    {
        BrowserWidget->setWindowTitle(QApplication::translate("BrowserWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowserWidget: public Ui_BrowserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_WIDGET_H
