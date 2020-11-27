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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BrowserWidget
{
public:
    QPushButton *returnButton;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QRadioButton *idRadio;
    QRadioButton *sumRadio;
    QRadioButton *mathRadio;
    QRadioButton *cProgramRadio;
    QTableWidget *browserTable;
    QLabel *widgetLabel;

    void setupUi(QWidget *BrowserWidget)
    {
        if (BrowserWidget->objectName().isEmpty())
            BrowserWidget->setObjectName(QString::fromUtf8("BrowserWidget"));
        BrowserWidget->resize(400, 300);
        returnButton = new QPushButton(BrowserWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(300, 250, 80, 24));
        widget = new QWidget(BrowserWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(40, 60, 321, 181));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        idRadio = new QRadioButton(widget);
        idRadio->setObjectName(QString::fromUtf8("idRadio"));

        horizontalLayout->addWidget(idRadio);

        sumRadio = new QRadioButton(widget);
        sumRadio->setObjectName(QString::fromUtf8("sumRadio"));

        horizontalLayout->addWidget(sumRadio);

        mathRadio = new QRadioButton(widget);
        mathRadio->setObjectName(QString::fromUtf8("mathRadio"));

        horizontalLayout->addWidget(mathRadio);

        cProgramRadio = new QRadioButton(widget);
        cProgramRadio->setObjectName(QString::fromUtf8("cProgramRadio"));

        horizontalLayout->addWidget(cProgramRadio);


        verticalLayout->addLayout(horizontalLayout);

        browserTable = new QTableWidget(widget);
        browserTable->setObjectName(QString::fromUtf8("browserTable"));

        verticalLayout->addWidget(browserTable);


        horizontalLayout_2->addLayout(verticalLayout);

        widgetLabel = new QLabel(BrowserWidget);
        widgetLabel->setObjectName(QString::fromUtf8("widgetLabel"));
        widgetLabel->setGeometry(QRect(140, 20, 120, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        widgetLabel->setFont(font);

        retranslateUi(BrowserWidget);

        QMetaObject::connectSlotsByName(BrowserWidget);
    } // setupUi

    void retranslateUi(QWidget *BrowserWidget)
    {
        BrowserWidget->setWindowTitle(QApplication::translate("BrowserWidget", "Form", nullptr));
        returnButton->setText(QApplication::translate("BrowserWidget", "\350\277\224\345\233\236", nullptr));
        idRadio->setText(QApplication::translate("BrowserWidget", "\345\255\246\345\217\267", nullptr));
        sumRadio->setText(QApplication::translate("BrowserWidget", "\346\200\273\345\210\206", nullptr));
        mathRadio->setText(QApplication::translate("BrowserWidget", "\351\253\230\347\255\211\346\225\260\345\255\246", nullptr));
        cProgramRadio->setText(QApplication::translate("BrowserWidget", "\347\250\213\345\272\217\350\256\276\350\256\241", nullptr));
        widgetLabel->setText(QApplication::translate("BrowserWidget", "\346\265\217\350\247\210\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BrowserWidget: public Ui_BrowserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BROWSER_WIDGET_H
