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
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QToolButton *toolButton;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *rbtnMan;
    QRadioButton *rbtnWomen;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QGroupBox *cBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *checkBox;
    QCheckBox *checkBox_4;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_2;
    QListWidget *listWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(513, 464);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        toolButton = new QToolButton(centralwidget);
        toolButton->setObjectName("toolButton");
        toolButton->setGeometry(QRect(180, -10, 151, 91));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/library.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        toolButton->setIcon(icon);
        toolButton->setIconSize(QSize(50, 50));
        toolButton->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        toolButton->setAutoRaise(true);
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(0, 0, 67, 98));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName("verticalLayout");
        rbtnMan = new QRadioButton(groupBox);
        rbtnMan->setObjectName("rbtnMan");

        verticalLayout->addWidget(rbtnMan);

        rbtnWomen = new QRadioButton(groupBox);
        rbtnWomen->setObjectName("rbtnWomen");

        verticalLayout->addWidget(rbtnWomen);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(300, 10, 81, 98));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName("radioButton_3");

        verticalLayout_2->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName("radioButton_4");

        verticalLayout_2->addWidget(radioButton_4);

        cBox = new QGroupBox(centralwidget);
        cBox->setObjectName("cBox");
        cBox->setGeometry(QRect(60, 0, 122, 160));
        verticalLayout_3 = new QVBoxLayout(cBox);
        verticalLayout_3->setObjectName("verticalLayout_3");
        checkBox = new QCheckBox(cBox);
        checkBox->setObjectName("checkBox");

        verticalLayout_3->addWidget(checkBox);

        checkBox_4 = new QCheckBox(cBox);
        checkBox_4->setObjectName("checkBox_4");

        verticalLayout_3->addWidget(checkBox_4);

        checkBox_3 = new QCheckBox(cBox);
        checkBox_3->setObjectName("checkBox_3");

        verticalLayout_3->addWidget(checkBox_3);

        checkBox_2 = new QCheckBox(cBox);
        checkBox_2->setObjectName("checkBox_2");

        verticalLayout_3->addWidget(checkBox_2);

        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(210, 120, 256, 192));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 513, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        toolButton->setText(QCoreApplication::translate("MainWindow", "\347\202\271\345\207\273\346\210\221", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\346\200\247\345\210\253", nullptr));
        rbtnMan->setText(QCoreApplication::translate("MainWindow", "\347\224\267", nullptr));
        rbtnWomen->setText(QCoreApplication::translate("MainWindow", "\345\245\263", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\251\232\345\247\273\345\205\263\347\263\273", nullptr));
        radioButton_3->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\251\232", nullptr));
        radioButton_4->setText(QCoreApplication::translate("MainWindow", "\346\234\252\345\251\232", nullptr));
        cBox->setTitle(QCoreApplication::translate("MainWindow", "\351\227\256\345\215\267\350\260\203\346\237\245", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "CheckBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
