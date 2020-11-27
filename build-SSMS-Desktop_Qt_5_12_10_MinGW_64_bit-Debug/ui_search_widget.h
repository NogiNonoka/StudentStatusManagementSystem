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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SearchWidget
{
public:
    QPushButton *returnButton;
    QLabel *widgetLabel;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idEdit;
    QLineEdit *nameEdit;
    QLineEdit *sexEdit;
    QLineEdit *mathEdit;
    QLineEdit *cProgramEdit;

    void setupUi(QWidget *SearchWidget)
    {
        if (SearchWidget->objectName().isEmpty())
            SearchWidget->setObjectName(QString::fromUtf8("SearchWidget"));
        SearchWidget->resize(400, 300);
        returnButton = new QPushButton(SearchWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(300, 250, 80, 24));
        widgetLabel = new QLabel(SearchWidget);
        widgetLabel->setObjectName(QString::fromUtf8("widgetLabel"));
        widgetLabel->setGeometry(QRect(140, 30, 120, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        widgetLabel->setFont(font);
        widget = new QWidget(SearchWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(60, 70, 281, 161));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        idLabel = new QLabel(widget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        verticalLayout->addWidget(idLabel);

        nameLabel = new QLabel(widget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        sexLabel = new QLabel(widget);
        sexLabel->setObjectName(QString::fromUtf8("sexLabel"));

        verticalLayout->addWidget(sexLabel);

        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        idEdit = new QLineEdit(widget);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        verticalLayout_2->addWidget(idEdit);

        nameEdit = new QLineEdit(widget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout_2->addWidget(nameEdit);

        sexEdit = new QLineEdit(widget);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));

        verticalLayout_2->addWidget(sexEdit);

        mathEdit = new QLineEdit(widget);
        mathEdit->setObjectName(QString::fromUtf8("mathEdit"));

        verticalLayout_2->addWidget(mathEdit);

        cProgramEdit = new QLineEdit(widget);
        cProgramEdit->setObjectName(QString::fromUtf8("cProgramEdit"));

        verticalLayout_2->addWidget(cProgramEdit);


        horizontalLayout->addLayout(verticalLayout_2);


        retranslateUi(SearchWidget);

        QMetaObject::connectSlotsByName(SearchWidget);
    } // setupUi

    void retranslateUi(QWidget *SearchWidget)
    {
        SearchWidget->setWindowTitle(QApplication::translate("SearchWidget", "Form", nullptr));
        returnButton->setText(QApplication::translate("SearchWidget", "\350\277\224\345\233\236", nullptr));
        widgetLabel->setText(QApplication::translate("SearchWidget", "\346\237\245\350\257\242\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        idLabel->setText(QApplication::translate("SearchWidget", "\345\255\246\345\217\267", nullptr));
        nameLabel->setText(QApplication::translate("SearchWidget", "\345\247\223\345\220\215", nullptr));
        sexLabel->setText(QApplication::translate("SearchWidget", "\346\200\247\345\210\253", nullptr));
        label->setText(QApplication::translate("SearchWidget", "\351\253\230\347\255\211\346\225\260\345\255\246 \346\210\220\347\273\251", nullptr));
        label_2->setText(QApplication::translate("SearchWidget", "\347\250\213\345\272\217\350\256\276\350\256\241 \346\210\220\347\273\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SearchWidget: public Ui_SearchWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_WIDGET_H
