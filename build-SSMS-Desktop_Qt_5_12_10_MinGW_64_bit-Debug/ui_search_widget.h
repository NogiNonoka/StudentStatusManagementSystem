/********************************************************************************
** Form generated from reading UI file 'search_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_WIDGET_H
#define UI_SEARCH_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(400, 300);

        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QApplication::translate("SearchWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_WIDGET_H
