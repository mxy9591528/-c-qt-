/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QGridLayout *gridLayout_3;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *pwd_t_label;
    QLabel *pwd_label;
    QLabel *user_label;
    QLineEdit *user_line;
    QLineEdit *pwd_line;
    QLineEdit *pwd_t_line;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *cancel_btn;
    QPushButton *make_btn;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->resize(400, 300);
        gridLayout_3 = new QGridLayout(register);
        gridLayout_3->setObjectName("gridLayout_3");
        widget_2 = new QWidget(register);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        pwd_t_label = new QLabel(widget_2);
        pwd_t_label->setObjectName("pwd_t_label");
        pwd_t_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(pwd_t_label, 3, 0, 1, 1);

        pwd_label = new QLabel(widget_2);
        pwd_label->setObjectName("pwd_label");
        pwd_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(pwd_label, 2, 0, 1, 1);

        user_label = new QLabel(widget_2);
        user_label->setObjectName("user_label");
        user_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(user_label, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 3, 1);

        user_line = new QLineEdit(register);
        user_line->setObjectName("user_line");

        gridLayout_3->addWidget(user_line, 1, 1, 1, 1);

        pwd_line = new QLineEdit(register);
        pwd_line->setObjectName("pwd_line");
        pwd_line->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(pwd_line, 2, 1, 1, 1);

        pwd_t_line = new QLineEdit(register);
        pwd_t_line->setObjectName("pwd_t_line");
        pwd_t_line->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(pwd_t_line, 3, 1, 1, 1);

        widget = new QWidget(register);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        cancel_btn = new QPushButton(widget);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(50, 30));
        cancel_btn->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(cancel_btn, 0, 0, 1, 1);

        make_btn = new QPushButton(widget);
        make_btn->setObjectName("make_btn");
        make_btn->setMinimumSize(QSize(100, 30));
        make_btn->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(make_btn, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 4, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer, 0, 0, 1, 1);


        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QWidget *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        pwd_t_label->setText(QCoreApplication::translate("register", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", nullptr));
        pwd_label->setText(QCoreApplication::translate("register", "\345\257\206\347\240\201", nullptr));
        user_label->setText(QCoreApplication::translate("register", "\347\224\250\346\210\267\345\220\215", nullptr));
        cancel_btn->setText(QCoreApplication::translate("register", "\345\217\226\346\266\210", nullptr));
        make_btn->setText(QCoreApplication::translate("register", "\347\241\256\350\256\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
