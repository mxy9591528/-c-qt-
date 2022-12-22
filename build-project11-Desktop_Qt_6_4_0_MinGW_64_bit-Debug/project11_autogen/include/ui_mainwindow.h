/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include <mylabel.h>
#include "smallwidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    SmallWidget *widget;
    SmallWidget *widget_2;
    QPushButton *getval;
    QPushButton *sethalf;
    myLabel *label;
    QMenuBar *menubar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new SmallWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 139, 201, 41));
        widget_2 = new SmallWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(110, 20, 381, 61));
        getval = new QPushButton(centralwidget);
        getval->setObjectName("getval");
        getval->setGeometry(QRect(470, 110, 93, 29));
        sethalf = new QPushButton(centralwidget);
        sethalf->setObjectName("sethalf");
        sethalf->setGeometry(QRect(470, 160, 93, 29));
        label = new myLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 290, 241, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        getval->setText(QCoreApplication::translate("MainWindow", "\350\216\267\345\217\226\345\275\223\345\211\215\345\200\274", nullptr));
        sethalf->setText(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256\345\210\260\344\270\200\345\215\212", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
