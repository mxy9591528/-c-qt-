/********************************************************************************
** Form generated from reading UI file 'makeuser.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAKEUSER_H
#define UI_MAKEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_makeuser
{
public:
    QGridLayout *gridLayout_3;
    QLineEdit *pwd_line;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *cancel_btn;
    QPushButton *make_btn;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *user_line;
    QLineEdit *pwd_t_line;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *makeuser)
    {
        if (makeuser->objectName().isEmpty())
            makeuser->setObjectName("makeuser");
        makeuser->resize(400, 300);
        gridLayout_3 = new QGridLayout(makeuser);
        gridLayout_3->setObjectName("gridLayout_3");
        pwd_line = new QLineEdit(makeuser);
        pwd_line->setObjectName("pwd_line");
        pwd_line->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(pwd_line, 2, 1, 1, 1);

        widget = new QWidget(makeuser);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        cancel_btn = new QPushButton(widget);
        cancel_btn->setObjectName("cancel_btn");
        cancel_btn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(cancel_btn, 0, 1, 1, 1);

        make_btn = new QPushButton(widget);
        make_btn->setObjectName("make_btn");
        make_btn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(make_btn, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget, 4, 0, 1, 2);

        widget_2 = new QWidget(makeuser);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        QFont font;
        font.setPointSize(12);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_3, 3, 0, 1, 1);

        label = new QLabel(widget_2);
        label->setObjectName("label");
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(label, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 3, 1);

        user_line = new QLineEdit(makeuser);
        user_line->setObjectName("user_line");

        gridLayout_3->addWidget(user_line, 1, 1, 1, 1);

        pwd_t_line = new QLineEdit(makeuser);
        pwd_t_line->setObjectName("pwd_t_line");
        pwd_t_line->setEchoMode(QLineEdit::Password);

        gridLayout_3->addWidget(pwd_t_line, 3, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Maximum);

        gridLayout_3->addItem(verticalSpacer, 0, 0, 1, 1);

        QWidget::setTabOrder(user_line, pwd_line);
        QWidget::setTabOrder(pwd_line, pwd_t_line);
        QWidget::setTabOrder(pwd_t_line, make_btn);
        QWidget::setTabOrder(make_btn, cancel_btn);

        retranslateUi(makeuser);

        QMetaObject::connectSlotsByName(makeuser);
    } // setupUi

    void retranslateUi(QDialog *makeuser)
    {
        makeuser->setWindowTitle(QCoreApplication::translate("makeuser", "\346\263\250\345\206\214\347\225\214\351\235\242", nullptr));
        cancel_btn->setText(QCoreApplication::translate("makeuser", "\345\217\226\346\266\210", nullptr));
        make_btn->setText(QCoreApplication::translate("makeuser", "\347\241\256\350\256\244", nullptr));
        label_2->setText(QCoreApplication::translate("makeuser", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("makeuser", "\347\241\256\350\256\244\345\257\206\347\240\201", nullptr));
        label->setText(QCoreApplication::translate("makeuser", "\347\224\250\346\210\267\345\220\215", nullptr));
    } // retranslateUi

};

namespace Ui {
    class makeuser: public Ui_makeuser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAKEUSER_H
