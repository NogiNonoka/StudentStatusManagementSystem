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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:
    QPushButton *returnButton;
    QPushButton *pushButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QString::fromUtf8("ModifyWidget"));
        ModifyWidget->resize(400, 300);
        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(300, 250, 80, 24));
        pushButton = new QPushButton(ModifyWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(300, 40, 80, 24));
        layoutWidget = new QWidget(ModifyWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 321, 147));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout->addWidget(label_3);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout->addWidget(label_6);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));

        verticalLayout_2->addWidget(lineEdit_3);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout_2->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout_2->addWidget(lineEdit_2);

        lineEdit_4 = new QLineEdit(layoutWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));

        verticalLayout_2->addWidget(lineEdit_4);

        lineEdit_5 = new QLineEdit(layoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        verticalLayout_2->addWidget(lineEdit_5);


        horizontalLayout->addLayout(verticalLayout_2);

        pushButton_2 = new QPushButton(ModifyWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 230, 80, 24));
        pushButton_3 = new QPushButton(ModifyWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 230, 80, 24));

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QApplication::translate("ModifyWidget", "Form", nullptr));
        returnButton->setText(QApplication::translate("ModifyWidget", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QApplication::translate("ModifyWidget", "\346\237\245\350\257\242", nullptr));
        label_3->setText(QApplication::translate("ModifyWidget", "\345\255\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("ModifyWidget", "\345\247\223\345\220\215", nullptr));
        label_4->setText(QApplication::translate("ModifyWidget", "\346\200\247\345\210\253", nullptr));
        label_5->setText(QApplication::translate("ModifyWidget", "\351\253\230\347\255\211\346\225\260\345\255\246 \346\210\220\347\273\251", nullptr));
        label_6->setText(QApplication::translate("ModifyWidget", "\347\250\213\345\272\217\350\256\276\350\256\241 \346\210\220\347\273\251", nullptr));
        pushButton_2->setText(QApplication::translate("ModifyWidget", "\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QApplication::translate("ModifyWidget", "\345\210\240\351\231\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_WIDGET_H
