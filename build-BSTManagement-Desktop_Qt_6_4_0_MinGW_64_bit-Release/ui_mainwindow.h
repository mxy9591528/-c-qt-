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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_add;
    QAction *actionDel;
    QAction *actionSearch;
    QAction *actionModify;
    QAction *actionby_name;
    QAction *actionby_stu_id;
    QAction *action_del;
    QAction *action_search;
    QAction *action_modify;
    QAction *action_sort;
    QAction *action_destory;
    QWidget *centralwidget;
    QFormLayout *formLayout;
    QWidget *widget_2;
    QGridLayout *gridLayout_3;
    QLabel *img_label;
    QLabel *title_label;
    QSpacerItem *horizontalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *user_label;
    QTreeWidget *treeWidget;
    QWidget *widget_3;
    QGridLayout *gridLayout_5;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QPushButton *search_btn;
    QLineEdit *search_lineEdit;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout_4;
    QTableWidget *tableWidget;
    QLabel *num_label;
    QWidget *page_2;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1024, 633);
        MainWindow->setMinimumSize(QSize(1024, 633));
        MainWindow->setMaximumSize(QSize(9999, 9999));
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setAutoFillBackground(false);
        action_add = new QAction(MainWindow);
        action_add->setObjectName("action_add");
        actionDel = new QAction(MainWindow);
        actionDel->setObjectName("actionDel");
        actionSearch = new QAction(MainWindow);
        actionSearch->setObjectName("actionSearch");
        actionModify = new QAction(MainWindow);
        actionModify->setObjectName("actionModify");
        actionby_name = new QAction(MainWindow);
        actionby_name->setObjectName("actionby_name");
        actionby_stu_id = new QAction(MainWindow);
        actionby_stu_id->setObjectName("actionby_stu_id");
        action_del = new QAction(MainWindow);
        action_del->setObjectName("action_del");
        action_search = new QAction(MainWindow);
        action_search->setObjectName("action_search");
        action_modify = new QAction(MainWindow);
        action_modify->setObjectName("action_modify");
        action_sort = new QAction(MainWindow);
        action_sort->setObjectName("action_sort");
        action_destory = new QAction(MainWindow);
        action_destory->setObjectName("action_destory");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayout = new QFormLayout(centralwidget);
        formLayout->setObjectName("formLayout");
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName("widget_2");
        widget_2->setMinimumSize(QSize(1024, 50));
        widget_2->setMaximumSize(QSize(1024, 50));
        gridLayout_3 = new QGridLayout(widget_2);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        img_label = new QLabel(widget_2);
        img_label->setObjectName("img_label");
        img_label->setMinimumSize(QSize(40, 40));
        img_label->setMaximumSize(QSize(40, 40));
        img_label->setStyleSheet(QString::fromUtf8("border-image: url(:/Img/Admin.jpg);"));
        img_label->setFrameShape(QFrame::Box);

        gridLayout_3->addWidget(img_label, 0, 2, 1, 1);

        title_label = new QLabel(widget_2);
        title_label->setObjectName("title_label");
        title_label->setMinimumSize(QSize(0, 40));
        title_label->setMaximumSize(QSize(16777215, 40));
        QFont font;
        font.setPointSize(18);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(title_label, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 0, 1, 1);

        widget = new QWidget(widget_2);
        widget->setObjectName("widget");
        widget->setMinimumSize(QSize(0, 40));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName("gridLayout");
        user_label = new QLabel(widget);
        user_label->setObjectName("user_label");
        QFont font1;
        font1.setPointSize(10);
        user_label->setFont(font1);
        user_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(user_label, 0, 3, 1, 1);


        gridLayout_3->addWidget(widget, 0, 3, 1, 1);

        gridLayout_3->setColumnStretch(0, 1);
        gridLayout_3->setColumnStretch(1, 1);
        gridLayout_3->setColumnStretch(2, 1);
        gridLayout_3->setColumnStretch(3, 1);

        formLayout->setWidget(0, QFormLayout::SpanningRole, widget_2);

        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setMinimumSize(QSize(175, 600));
        treeWidget->setMaximumSize(QSize(175, 500));
        treeWidget->setFrameShape(QFrame::NoFrame);
        treeWidget->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(1, QFormLayout::LabelRole, treeWidget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setMaximumSize(QSize(16777215, 500));
        gridLayout_5 = new QGridLayout(widget_3);
        gridLayout_5->setObjectName("gridLayout_5");
        widget_5 = new QWidget(widget_3);
        widget_5->setObjectName("widget_5");
        widget_5->setMaximumSize(QSize(16777215, 40));
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName("gridLayout_6");
        gridLayout_6->setContentsMargins(0, 0, 0, 0);
        search_btn = new QPushButton(widget_5);
        search_btn->setObjectName("search_btn");
        search_btn->setMinimumSize(QSize(40, 40));
        search_btn->setMaximumSize(QSize(40, 40));
        search_btn->setContextMenuPolicy(Qt::DefaultContextMenu);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Img/Search.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_btn->setIcon(icon);

        gridLayout_6->addWidget(search_btn, 0, 1, 1, 1);

        search_lineEdit = new QLineEdit(widget_5);
        search_lineEdit->setObjectName("search_lineEdit");

        gridLayout_6->addWidget(search_lineEdit, 0, 0, 1, 1);


        gridLayout_5->addWidget(widget_5, 0, 1, 1, 1);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setMaximumSize(QSize(16777215, 530));
        page = new QWidget();
        page->setObjectName("page");
        gridLayout_4 = new QGridLayout(page);
        gridLayout_4->setObjectName("gridLayout_4");
        tableWidget = new QTableWidget(page);
        if (tableWidget->columnCount() < 8)
            tableWidget->setColumnCount(8);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setMaximumSize(QSize(16777215, 400));
        tableWidget->horizontalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(tableWidget, 0, 0, 1, 1);

        num_label = new QLabel(page);
        num_label->setObjectName("num_label");
        num_label->setStyleSheet(QString::fromUtf8("font: 9pt \"Microsoft YaHei UI\",rgb(255, 0, 0);"));

        gridLayout_4->addWidget(num_label, 1, 0, 1, 1);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        stackedWidget->addWidget(page_2);

        gridLayout_5->addWidget(stackedWidget, 3, 1, 1, 1);


        formLayout->setWidget(1, QFormLayout::FieldRole, widget_3);

        MainWindow->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234\347\225\214\351\235\242", nullptr));
        action_add->setText(QCoreApplication::translate("MainWindow", "\345\242\236\346\267\273", nullptr));
        actionDel->setText(QCoreApplication::translate("MainWindow", "Del", nullptr));
        actionSearch->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        actionModify->setText(QCoreApplication::translate("MainWindow", "Modify", nullptr));
        actionby_name->setText(QCoreApplication::translate("MainWindow", "by_name", nullptr));
        actionby_stu_id->setText(QCoreApplication::translate("MainWindow", "by_stu_id", nullptr));
        action_del->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
        action_search->setText(QCoreApplication::translate("MainWindow", "\346\237\245\350\257\242", nullptr));
        action_modify->setText(QCoreApplication::translate("MainWindow", "\344\277\256\346\224\271", nullptr));
        action_sort->setText(QCoreApplication::translate("MainWindow", "\346\216\222\345\272\217", nullptr));
        action_destory->setText(QCoreApplication::translate("MainWindow", "\346\270\205\351\231\244", nullptr));
        img_label->setText(QString());
        title_label->setText(QCoreApplication::translate("MainWindow", "\345\255\246\347\224\237\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        user_label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215\357\274\232Admin", nullptr));
        search_btn->setText(QString());
        search_lineEdit->setPlaceholderText(QCoreApplication::translate("MainWindow", "\344\276\235\346\215\256\345\247\223\345\220\215\345\214\271\351\205\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "\345\247\223\345\220\215", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "\345\271\264\351\276\204", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "\345\271\264\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "\347\217\255\347\272\247", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "\345\255\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "\347\224\265\350\257\235", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "\345\276\256\344\277\241", nullptr));
        num_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
