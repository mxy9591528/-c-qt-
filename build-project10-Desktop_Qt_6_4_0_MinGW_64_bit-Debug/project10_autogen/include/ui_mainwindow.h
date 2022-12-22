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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_11;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QPushButton *pushButton_8;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_3;
    QToolBox *toolBox;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QWidget *page_6;
    QVBoxLayout *verticalLayout_4;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QWidget *tab_3;
    QPushButton *btnsa;
    QPushButton *btntb;
    QPushButton *btntw;
    QComboBox *comboBox;
    QPushButton *btnsch;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(30, 20, 208, 291));
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        verticalLayout_2 = new QVBoxLayout(page_4);
        verticalLayout_2->setObjectName("verticalLayout_2");
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 163, 411));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName("verticalLayout");
        pushButton = new QPushButton(scrollAreaWidgetContents);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(scrollAreaWidgetContents);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout->addWidget(pushButton_3);

        pushButton_7 = new QPushButton(scrollAreaWidgetContents);
        pushButton_7->setObjectName("pushButton_7");

        verticalLayout->addWidget(pushButton_7);

        pushButton_4 = new QPushButton(scrollAreaWidgetContents);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(scrollAreaWidgetContents);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(scrollAreaWidgetContents);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout->addWidget(pushButton_6);

        pushButton_11 = new QPushButton(scrollAreaWidgetContents);
        pushButton_11->setObjectName("pushButton_11");

        verticalLayout->addWidget(pushButton_11);

        pushButton_10 = new QPushButton(scrollAreaWidgetContents);
        pushButton_10->setObjectName("pushButton_10");

        verticalLayout->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(scrollAreaWidgetContents);
        pushButton_9->setObjectName("pushButton_9");

        verticalLayout->addWidget(pushButton_9);

        pushButton_8 = new QPushButton(scrollAreaWidgetContents);
        pushButton_8->setObjectName("pushButton_8");

        verticalLayout->addWidget(pushButton_8);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_3 = new QVBoxLayout(page_5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        toolBox = new QToolBox(page_5);
        toolBox->setObjectName("toolBox");
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 186, 164));
        toolBox->addItem(page, QString::fromUtf8("\345\256\266\344\272\272"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 186, 164));
        toolBox->addItem(page_2, QString::fromUtf8("\346\234\213\345\217\213"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        toolBox->addItem(page_3, QString::fromUtf8("\351\273\221\345\220\215\345\215\225"));

        verticalLayout_3->addWidget(toolBox);

        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName("page_6");
        verticalLayout_4 = new QVBoxLayout(page_6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        tabWidget = new QTabWidget(page_6);
        tabWidget->setObjectName("tabWidget");
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());

        verticalLayout_4->addWidget(tabWidget);

        stackedWidget->addWidget(page_6);
        btnsa = new QPushButton(centralwidget);
        btnsa->setObjectName("btnsa");
        btnsa->setGeometry(QRect(310, 30, 93, 29));
        btntb = new QPushButton(centralwidget);
        btntb->setObjectName("btntb");
        btntb->setGeometry(QRect(300, 90, 93, 29));
        btntw = new QPushButton(centralwidget);
        btntw->setObjectName("btntw");
        btntw->setGeometry(QRect(310, 150, 93, 29));
        comboBox = new QComboBox(centralwidget);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(280, 220, 87, 26));
        btnsch = new QPushButton(centralwidget);
        btnsch->setObjectName("btnsch");
        btnsch->setGeometry(QRect(410, 250, 93, 29));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(470, 100, 101, 121));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);
        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("MainWindow", "\345\256\266\344\272\272", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("MainWindow", "\346\234\213\345\217\213", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("MainWindow", "\351\273\221\345\220\215\345\215\225", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "\347\231\276\345\272\246", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "\350\260\267\346\255\214", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "\346\220\234\347\213\220", nullptr));
        btnsa->setText(QCoreApplication::translate("MainWindow", "Scroll Area", nullptr));
        btntb->setText(QCoreApplication::translate("MainWindow", "Tool Box", nullptr));
        btntw->setText(QCoreApplication::translate("MainWindow", "Tab Widget", nullptr));
        comboBox->setCurrentText(QString());
        btnsch->setText(QCoreApplication::translate("MainWindow", "sch", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
