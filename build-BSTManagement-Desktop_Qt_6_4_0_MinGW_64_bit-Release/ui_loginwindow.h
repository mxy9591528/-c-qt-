/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginWindow
{
public:
    QGridLayout *gridLayout_3;
    QLabel *title_label;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *user_label;
    QLineEdit *user_lineEdit;
    QLabel *pwd_label;
    QSpacerItem *horizontalSpacer;
    QLineEdit *pwd_lineEdit;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *login_btn;
    QPushButton *register_btn;

    void setupUi(QWidget *LoginWindow)
    {
        if (LoginWindow->objectName().isEmpty())
            LoginWindow->setObjectName("LoginWindow");
        LoginWindow->resize(400, 240);
        LoginWindow->setMinimumSize(QSize(400, 240));
        LoginWindow->setMaximumSize(QSize(400, 240));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/LoginWindowTitle.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        LoginWindow->setWindowIcon(icon);
        gridLayout_3 = new QGridLayout(LoginWindow);
        gridLayout_3->setObjectName("gridLayout_3");
        title_label = new QLabel(LoginWindow);
        title_label->setObjectName("title_label");
        title_label->setMinimumSize(QSize(0, 60));
        title_label->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setPointSize(18);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(title_label, 0, 0, 1, 1);

        widget_2 = new QWidget(LoginWindow);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        user_label = new QLabel(widget_2);
        user_label->setObjectName("user_label");
        QFont font1;
        font1.setPointSize(12);
        user_label->setFont(font1);
        user_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(user_label, 0, 1, 1, 1);

        user_lineEdit = new QLineEdit(widget_2);
        user_lineEdit->setObjectName("user_lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(user_lineEdit->sizePolicy().hasHeightForWidth());
        user_lineEdit->setSizePolicy(sizePolicy);
        user_lineEdit->setMinimumSize(QSize(180, 30));
        user_lineEdit->setMaximumSize(QSize(180, 30));
        user_lineEdit->setContextMenuPolicy(Qt::CustomContextMenu);
        user_lineEdit->setFrame(true);
        user_lineEdit->setEchoMode(QLineEdit::Normal);
        user_lineEdit->setCursorMoveStyle(Qt::LogicalMoveStyle);

        gridLayout_2->addWidget(user_lineEdit, 0, 2, 1, 1);

        pwd_label = new QLabel(widget_2);
        pwd_label->setObjectName("pwd_label");
        pwd_label->setFont(font1);
        pwd_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_2->addWidget(pwd_label, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 3, 1, 1);

        pwd_lineEdit = new QLineEdit(widget_2);
        pwd_lineEdit->setObjectName("pwd_lineEdit");
        sizePolicy.setHeightForWidth(pwd_lineEdit->sizePolicy().hasHeightForWidth());
        pwd_lineEdit->setSizePolicy(sizePolicy);
        pwd_lineEdit->setMinimumSize(QSize(180, 30));
        pwd_lineEdit->setMaximumSize(QSize(180, 30));
        pwd_lineEdit->setCursor(QCursor(Qt::IBeamCursor));
        pwd_lineEdit->setFocusPolicy(Qt::StrongFocus);
        pwd_lineEdit->setContextMenuPolicy(Qt::DefaultContextMenu);
        pwd_lineEdit->setFrame(true);
        pwd_lineEdit->setEchoMode(QLineEdit::Password);

        gridLayout_2->addWidget(pwd_lineEdit, 2, 2, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 0, 0, 1, 1);


        gridLayout_3->addWidget(widget_2, 1, 0, 1, 1);

        widget = new QWidget(LoginWindow);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(100, 0));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 2, 0);
        login_btn = new QPushButton(widget);
        login_btn->setObjectName("login_btn");
        login_btn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(login_btn, 0, 0, 1, 1);

        register_btn = new QPushButton(widget);
        register_btn->setObjectName("register_btn");
        register_btn->setMinimumSize(QSize(0, 35));

        gridLayout->addWidget(register_btn, 0, 1, 1, 1);


        gridLayout_3->addWidget(widget, 2, 0, 1, 1);


        retranslateUi(LoginWindow);

        QMetaObject::connectSlotsByName(LoginWindow);
    } // setupUi

    void retranslateUi(QWidget *LoginWindow)
    {
        LoginWindow->setWindowTitle(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225\347\252\227\345\217\243", nullptr));
        title_label->setText(QCoreApplication::translate("LoginWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        user_label->setText(QCoreApplication::translate("LoginWindow", "\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        user_lineEdit->setText(QString());
        user_lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245", nullptr));
        pwd_label->setText(QCoreApplication::translate("LoginWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        pwd_lineEdit->setInputMask(QString());
        pwd_lineEdit->setText(QString());
        pwd_lineEdit->setPlaceholderText(QCoreApplication::translate("LoginWindow", "\350\257\267\350\276\223\345\205\245", nullptr));
        login_btn->setText(QCoreApplication::translate("LoginWindow", "\347\231\273\345\275\225", nullptr));
        register_btn->setText(QCoreApplication::translate("LoginWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LoginWindow: public Ui_LoginWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
