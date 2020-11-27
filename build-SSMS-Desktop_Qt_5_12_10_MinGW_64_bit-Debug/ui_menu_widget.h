/********************************************************************************
** Form generated from reading UI file 'menu_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_WIDGET_H
#define UI_MENU_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *browserButton;
    QPushButton *addButton;
    QPushButton *searchButton;
    QPushButton *courseButton;
    QPushButton *exitButton;
    QLabel *widgetLabel;
    QLabel *systemName;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(400, 300);
        layoutWidget = new QWidget(MenuWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(140, 100, 121, 191));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        browserButton = new QPushButton(layoutWidget);
        browserButton->setObjectName(QString::fromUtf8("browserButton"));

        verticalLayout->addWidget(browserButton);

        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        verticalLayout->addWidget(addButton);

        searchButton = new QPushButton(layoutWidget);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));

        verticalLayout->addWidget(searchButton);

        courseButton = new QPushButton(layoutWidget);
        courseButton->setObjectName(QString::fromUtf8("courseButton"));

        verticalLayout->addWidget(courseButton);

        exitButton = new QPushButton(layoutWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        verticalLayout->addWidget(exitButton);

        widgetLabel = new QLabel(MenuWidget);
        widgetLabel->setObjectName(QString::fromUtf8("widgetLabel"));
        widgetLabel->setGeometry(QRect(160, 60, 79, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        widgetLabel->setFont(font);
        systemName = new QLabel(MenuWidget);
        systemName->setObjectName(QString::fromUtf8("systemName"));
        systemName->setGeometry(QRect(100, 20, 216, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Agency FB"));
        font1.setPointSize(16);
        systemName->setFont(font1);

        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QApplication::translate("MenuWidget", "Form", nullptr));
        browserButton->setText(QApplication::translate("MenuWidget", "\346\265\217\350\247\210", nullptr));
        addButton->setText(QApplication::translate("MenuWidget", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        searchButton->setText(QApplication::translate("MenuWidget", "\346\237\245\350\257\242\345\255\246\347\224\237", nullptr));
        courseButton->setText(QApplication::translate("MenuWidget", "\346\237\245\350\257\242\350\257\276\347\250\213", nullptr));
        exitButton->setText(QApplication::translate("MenuWidget", "\351\200\200\345\207\272", nullptr));
        widgetLabel->setText(QApplication::translate("MenuWidget", "\350\217\234\345\215\225 MENU", nullptr));
        systemName->setText(QApplication::translate("MenuWidget", "\345\255\246\347\224\237\345\255\246\347\261\215\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_WIDGET_H
