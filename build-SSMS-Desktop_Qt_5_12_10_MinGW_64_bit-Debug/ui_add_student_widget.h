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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddStudentWidget
{
public:
    QPushButton *returnButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *idLabel;
    QLabel *nameLabel;
    QLabel *sexLabel;
    QLabel *mathLabel;
    QLabel *cProgramLabel;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *idEdit;
    QLineEdit *nameEdit;
    QLineEdit *sexEdit;
    QLineEdit *mathEdit;
    QLineEdit *cProgramEdit;
    QLabel *label;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *clearButton;

    void setupUi(QWidget *AddStudentWidget)
    {
        if (AddStudentWidget->objectName().isEmpty())
            AddStudentWidget->setObjectName(QString::fromUtf8("AddStudentWidget"));
        AddStudentWidget->resize(400, 300);
        returnButton = new QPushButton(AddStudentWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setEnabled(true);
        returnButton->setGeometry(QRect(300, 250, 80, 24));
        layoutWidget = new QWidget(AddStudentWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 321, 147));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        idLabel = new QLabel(layoutWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));

        verticalLayout->addWidget(idLabel);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        verticalLayout->addWidget(nameLabel);

        sexLabel = new QLabel(layoutWidget);
        sexLabel->setObjectName(QString::fromUtf8("sexLabel"));

        verticalLayout->addWidget(sexLabel);

        mathLabel = new QLabel(layoutWidget);
        mathLabel->setObjectName(QString::fromUtf8("mathLabel"));

        verticalLayout->addWidget(mathLabel);

        cProgramLabel = new QLabel(layoutWidget);
        cProgramLabel->setObjectName(QString::fromUtf8("cProgramLabel"));

        verticalLayout->addWidget(cProgramLabel);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        idEdit = new QLineEdit(layoutWidget);
        idEdit->setObjectName(QString::fromUtf8("idEdit"));

        verticalLayout_2->addWidget(idEdit);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        verticalLayout_2->addWidget(nameEdit);

        sexEdit = new QLineEdit(layoutWidget);
        sexEdit->setObjectName(QString::fromUtf8("sexEdit"));

        verticalLayout_2->addWidget(sexEdit);

        mathEdit = new QLineEdit(layoutWidget);
        mathEdit->setObjectName(QString::fromUtf8("mathEdit"));

        verticalLayout_2->addWidget(mathEdit);

        cProgramEdit = new QLineEdit(layoutWidget);
        cProgramEdit->setObjectName(QString::fromUtf8("cProgramEdit"));

        verticalLayout_2->addWidget(cProgramEdit);


        horizontalLayout->addLayout(verticalLayout_2);

        label = new QLabel(AddStudentWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(140, 30, 120, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("Agency FB"));
        font.setPointSize(12);
        label->setFont(font);
        widget = new QWidget(AddStudentWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(110, 230, 169, 26));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(widget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout_2->addWidget(addButton);

        clearButton = new QPushButton(widget);
        clearButton->setObjectName(QString::fromUtf8("clearButton"));

        horizontalLayout_2->addWidget(clearButton);


        retranslateUi(AddStudentWidget);

        QMetaObject::connectSlotsByName(AddStudentWidget);
    } // setupUi

    void retranslateUi(QWidget *AddStudentWidget)
    {
        AddStudentWidget->setWindowTitle(QApplication::translate("AddStudentWidget", "Form", nullptr));
        returnButton->setText(QApplication::translate("AddStudentWidget", "\350\277\224\345\233\236", nullptr));
        idLabel->setText(QApplication::translate("AddStudentWidget", "\345\255\246\345\217\267", nullptr));
        nameLabel->setText(QApplication::translate("AddStudentWidget", "\345\247\223\345\220\215", nullptr));
        sexLabel->setText(QApplication::translate("AddStudentWidget", "\346\200\247\345\210\253", nullptr));
        mathLabel->setText(QApplication::translate("AddStudentWidget", "\351\253\230\347\255\211\346\225\260\345\255\246 \346\210\220\347\273\251", nullptr));
        cProgramLabel->setText(QApplication::translate("AddStudentWidget", "\347\250\213\345\272\217\350\256\276\350\256\241 \346\210\220\347\273\251", nullptr));
        label->setText(QApplication::translate("AddStudentWidget", "\346\267\273\345\212\240\345\255\246\347\224\237\344\277\241\346\201\257", nullptr));
        addButton->setText(QApplication::translate("AddStudentWidget", "\346\267\273\345\212\240", nullptr));
        clearButton->setText(QApplication::translate("AddStudentWidget", "\346\270\205\347\251\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddStudentWidget: public Ui_AddStudentWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_STUDENT_WIDGET_H
