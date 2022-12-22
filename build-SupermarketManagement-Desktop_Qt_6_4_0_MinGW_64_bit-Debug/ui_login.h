/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QAction *wechatimg;
    QAction *illustrate;
    QWidget *centralwidget;
    QGridLayout *gridLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *cus_login;
    QPushButton *exit;
    QPushButton *boos_login;
    QSpacerItem *verticalSpacer_4;
    QPushButton *emp_login;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *title_label;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 597);
        login->setMinimumSize(QSize(800, 597));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/winIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        login->setWindowIcon(icon);
        login->setStyleSheet(QString::fromUtf8(""));
        wechatimg = new QAction(login);
        wechatimg->setObjectName("wechatimg");
        illustrate = new QAction(login);
        illustrate->setObjectName("illustrate");
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        gridLayout_3 = new QGridLayout(centralwidget);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(800, 0));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName("gridLayout_2");
        widget = new QWidget(frame);
        widget->setObjectName("widget");
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        cus_login = new QPushButton(widget);
        cus_login->setObjectName("cus_login");

        gridLayout->addWidget(cus_login, 0, 0, 1, 1);

        exit = new QPushButton(widget);
        exit->setObjectName("exit");

        gridLayout->addWidget(exit, 6, 0, 1, 1);

        boos_login = new QPushButton(widget);
        boos_login->setObjectName("boos_login");

        gridLayout->addWidget(boos_login, 4, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 3, 0, 1, 1);

        emp_login = new QPushButton(widget);
        emp_login->setObjectName("emp_login");

        gridLayout->addWidget(emp_login, 2, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_3, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_5, 5, 0, 1, 1);


        gridLayout_2->addWidget(widget, 1, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 1, 4, 1, 1);

        title_label = new QLabel(frame);
        title_label->setObjectName("title_label");
        title_label->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(title_label, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 2, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 0, 1, 1, 1);


        gridLayout_3->addWidget(frame, 0, 0, 1, 1);

        login->setCentralWidget(centralwidget);
        menubar = new QMenuBar(login);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        login->setMenuBar(menubar);
        statusbar = new QStatusBar(login);
        statusbar->setObjectName("statusbar");
        login->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(wechatimg);
        menu->addSeparator();
        menu->addAction(illustrate);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237-\347\231\273\345\275\225\347\225\214\351\235\242", nullptr));
        wechatimg->setText(QCoreApplication::translate("login", "\345\276\256\344\277\241", nullptr));
        illustrate->setText(QCoreApplication::translate("login", "\344\275\277\347\224\250\350\257\264\346\230\216", nullptr));
        cus_login->setText(QCoreApplication::translate("login", "\351\241\276\345\256\242\347\231\273\345\275\225", nullptr));
        exit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        boos_login->setText(QCoreApplication::translate("login", "\350\200\201\346\235\277\347\231\273\345\275\225", nullptr));
        emp_login->setText(QCoreApplication::translate("login", "\345\221\230\345\267\245\347\231\273\345\275\225", nullptr));
        title_label->setText(QCoreApplication::translate("login", "\346\254\242\350\277\216\344\275\277\347\224\250\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        menu->setTitle(QCoreApplication::translate("login", "\345\205\263\344\272\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
