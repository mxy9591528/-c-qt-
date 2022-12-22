/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget_6;
    QGridLayout *gridLayout_8;
    QLabel *title_label;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QWidget *tool_widget;
    QGridLayout *gridLayout;
    QWidget *del_btn;
    QGridLayout *gridLayout_4;
    QPushButton *agree_btn;
    QPushButton *pushButton;
    QLineEdit *search_line;
    QPushButton *search_btn;
    QPushButton *exit_btn;
    QPushButton *wait_btn;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_7;
    QTableWidget *tableWidget;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(960, 720);
        gridLayout_2 = new QGridLayout(admin);
        gridLayout_2->setObjectName("gridLayout_2");
        widget_6 = new QWidget(admin);
        widget_6->setObjectName("widget_6");
        gridLayout_8 = new QGridLayout(widget_6);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        title_label = new QLabel(widget_6);
        title_label->setObjectName("title_label");
        title_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(title_label, 0, 0, 1, 1);


        gridLayout_2->addWidget(widget_6, 0, 0, 1, 2);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);

        widget = new QWidget(admin);
        widget->setObjectName("widget");
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName("gridLayout_7");
        tool_widget = new QWidget(widget);
        tool_widget->setObjectName("tool_widget");
        gridLayout = new QGridLayout(tool_widget);
        gridLayout->setObjectName("gridLayout");
        del_btn = new QWidget(tool_widget);
        del_btn->setObjectName("del_btn");
        gridLayout_4 = new QGridLayout(del_btn);
        gridLayout_4->setObjectName("gridLayout_4");
        agree_btn = new QPushButton(del_btn);
        agree_btn->setObjectName("agree_btn");

        gridLayout_4->addWidget(agree_btn, 2, 0, 1, 1);

        pushButton = new QPushButton(del_btn);
        pushButton->setObjectName("pushButton");

        gridLayout_4->addWidget(pushButton, 3, 0, 1, 1);

        search_line = new QLineEdit(del_btn);
        search_line->setObjectName("search_line");

        gridLayout_4->addWidget(search_line, 0, 0, 1, 1);

        search_btn = new QPushButton(del_btn);
        search_btn->setObjectName("search_btn");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/ser_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_btn->setIcon(icon);

        gridLayout_4->addWidget(search_btn, 0, 1, 1, 1);

        exit_btn = new QPushButton(del_btn);
        exit_btn->setObjectName("exit_btn");

        gridLayout_4->addWidget(exit_btn, 4, 0, 1, 1);

        wait_btn = new QPushButton(del_btn);
        wait_btn->setObjectName("wait_btn");

        gridLayout_4->addWidget(wait_btn, 1, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout->addWidget(del_btn, 0, 0, 1, 1);


        gridLayout_7->addWidget(tool_widget, 0, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_2->addWidget(widget, 2, 0, 1, 1);

        tableWidget = new QTableWidget(admin);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        tableWidget->setObjectName("tableWidget");

        gridLayout_2->addWidget(tableWidget, 2, 1, 1, 1);

        gridLayout_2->setColumnStretch(0, 1);
        gridLayout_2->setColumnStretch(1, 3);

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        title_label->setText(QCoreApplication::translate("admin", "   \351\235\251\345\221\275\345\260\232\346\234\252\346\210\220\345\212\237\357\274\214\345\220\214\345\277\227\344\273\215\351\234\200\345\212\252\345\212\233\357\274\201", nullptr));
        agree_btn->setText(QCoreApplication::translate("admin", "\345\220\214\346\204\217\350\264\246\346\210\267\347\224\263\350\257\267", nullptr));
        pushButton->setText(QCoreApplication::translate("admin", "\345\210\240\351\231\244\350\264\246\346\210\267", nullptr));
        search_btn->setText(QString());
        exit_btn->setText(QCoreApplication::translate("admin", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        wait_btn->setText(QCoreApplication::translate("admin", "\345\276\205\345\256\241\346\211\271\350\264\246\346\210\267\346\237\245\350\257\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("admin", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("admin", "\350\264\246\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("admin", "\345\257\206\347\240\201", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("admin", "\347\212\266\346\200\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
