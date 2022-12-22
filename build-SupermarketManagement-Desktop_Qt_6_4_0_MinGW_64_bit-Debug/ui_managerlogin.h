/********************************************************************************
** Form generated from reading UI file 'managerlogin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERLOGIN_H
#define UI_MANAGERLOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerlogin
{
public:
    QGridLayout *gridLayout;
    QPushButton *login_btn;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLineEdit *emp_pwd;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *emp_id;
    QPushButton *register_btn;
    QPushButton *forget_btn;

    void setupUi(QWidget *managerlogin)
    {
        if (managerlogin->objectName().isEmpty())
            managerlogin->setObjectName("managerlogin");
        managerlogin->resize(300, 240);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/winIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        managerlogin->setWindowIcon(icon);
        gridLayout = new QGridLayout(managerlogin);
        gridLayout->setObjectName("gridLayout");
        login_btn = new QPushButton(managerlogin);
        login_btn->setObjectName("login_btn");

        gridLayout->addWidget(login_btn, 3, 0, 1, 2);

        widget = new QWidget(managerlogin);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        emp_pwd = new QLineEdit(widget);
        emp_pwd->setObjectName("emp_pwd");
        emp_pwd->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(emp_pwd, 1, 1, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        emp_id = new QLineEdit(widget);
        emp_id->setObjectName("emp_id");

        gridLayout_2->addWidget(emp_id, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 0, 0, 1, 2);

        register_btn = new QPushButton(managerlogin);
        register_btn->setObjectName("register_btn");

        gridLayout->addWidget(register_btn, 2, 0, 1, 1);

        forget_btn = new QPushButton(managerlogin);
        forget_btn->setObjectName("forget_btn");

        gridLayout->addWidget(forget_btn, 2, 1, 1, 1);


        retranslateUi(managerlogin);

        QMetaObject::connectSlotsByName(managerlogin);
    } // setupUi

    void retranslateUi(QWidget *managerlogin)
    {
        managerlogin->setWindowTitle(QCoreApplication::translate("managerlogin", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237-\345\221\230\345\267\245\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        login_btn->setText(QCoreApplication::translate("managerlogin", "\347\231\273\345\275\225", nullptr));
        emp_pwd->setPlaceholderText(QCoreApplication::translate("managerlogin", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201:", nullptr));
        label_2->setText(QCoreApplication::translate("managerlogin", "\345\257\206\347\240\201:", nullptr));
        label->setText(QCoreApplication::translate("managerlogin", "\350\264\246\345\217\267:", nullptr));
        emp_id->setPlaceholderText(QCoreApplication::translate("managerlogin", "\350\257\267\350\276\223\345\205\245\350\264\246\345\217\267:", nullptr));
        register_btn->setText(QCoreApplication::translate("managerlogin", "\346\263\250\345\206\214\350\264\246\345\217\267", nullptr));
        forget_btn->setText(QCoreApplication::translate("managerlogin", "\345\277\230\350\256\260\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class managerlogin: public Ui_managerlogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERLOGIN_H
