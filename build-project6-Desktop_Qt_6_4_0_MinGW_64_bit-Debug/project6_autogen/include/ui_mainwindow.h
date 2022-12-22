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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(350, 240);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(350, 240));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget_4 = new QWidget(centralwidget);
        widget_4->setObjectName("widget_4");
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(widget_4);
        gridLayout->setObjectName("gridLayout");
        lineEdit_2 = new QLineEdit(widget_4);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_2, 7, 2, 1, 1);

        lineEdit = new QLineEdit(widget_4);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 1, 2, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        label = new QLabel(widget_4);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 1, 1, 1);

        label_2 = new QLabel(widget_4);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 7, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 1, 3, 1, 1);


        verticalLayout->addWidget(widget_4);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        sizePolicy.setHeightForWidth(widget_3->sizePolicy().hasHeightForWidth());
        widget_3->setSizePolicy(sizePolicy);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton = new QPushButton(widget_3);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        horizontalSpacer_3 = new QSpacerItem(20, 10, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);


        verticalLayout->addWidget(widget_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\347\231\273\351\231\206\347\252\227\345\217\243", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
