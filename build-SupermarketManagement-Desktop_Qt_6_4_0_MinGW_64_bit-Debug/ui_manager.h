/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QGridLayout *gridLayout_10;
    QTableWidget *tableWidget;
    QSpacerItem *verticalSpacer;
    QWidget *widget_6;
    QGridLayout *gridLayout_8;
    QLabel *img_label;
    QLabel *title_label;
    QSpacerItem *horizontalSpacer_8;
    QWidget *widget;
    QGridLayout *gridLayout_7;
    QWidget *tool_widget;
    QGridLayout *gridLayout;
    QWidget *widget_4;
    QGridLayout *gridLayout_4;
    QLineEdit *search_line;
    QPushButton *search_btn;
    QSpacerItem *horizontalSpacer_5;
    QWidget *widget_2;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QComboBox *sort_box;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_3;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QComboBox *search_box;
    QSpacerItem *horizontalSpacer;
    QWidget *widget_5;
    QGridLayout *gridLayout_6;
    QLabel *label_4;
    QComboBox *method_box;
    QSpacerItem *horizontalSpacer_2;
    QWidget *btn_widget;
    QGridLayout *gridLayout_5;
    QPushButton *add_btn;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *del_btn;
    QPushButton *mfy_btn;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *exit_btn;
    QPushButton *num_btn;
    QSpacerItem *horizontalSpacer_7;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName("manager");
        manager->resize(1280, 720);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/winIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        manager->setWindowIcon(icon);
        gridLayout_10 = new QGridLayout(manager);
        gridLayout_10->setObjectName("gridLayout_10");
        gridLayout_10->setContentsMargins(3, 3, 3, 3);
        tableWidget = new QTableWidget(manager);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
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
        tableWidget->setObjectName("tableWidget");

        gridLayout_10->addWidget(tableWidget, 2, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_10->addItem(verticalSpacer, 1, 0, 1, 1);

        widget_6 = new QWidget(manager);
        widget_6->setObjectName("widget_6");
        gridLayout_8 = new QGridLayout(widget_6);
        gridLayout_8->setObjectName("gridLayout_8");
        gridLayout_8->setContentsMargins(0, 0, 0, 0);
        img_label = new QLabel(widget_6);
        img_label->setObjectName("img_label");

        gridLayout_8->addWidget(img_label, 1, 1, 1, 1);

        title_label = new QLabel(widget_6);
        title_label->setObjectName("title_label");
        title_label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_8->addWidget(title_label, 1, 0, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_8->addItem(horizontalSpacer_8, 1, 2, 1, 1);


        gridLayout_10->addWidget(widget_6, 0, 0, 1, 2);

        widget = new QWidget(manager);
        widget->setObjectName("widget");
        gridLayout_7 = new QGridLayout(widget);
        gridLayout_7->setObjectName("gridLayout_7");
        tool_widget = new QWidget(widget);
        tool_widget->setObjectName("tool_widget");
        gridLayout = new QGridLayout(tool_widget);
        gridLayout->setObjectName("gridLayout");
        widget_4 = new QWidget(tool_widget);
        widget_4->setObjectName("widget_4");
        gridLayout_4 = new QGridLayout(widget_4);
        gridLayout_4->setObjectName("gridLayout_4");
        search_line = new QLineEdit(widget_4);
        search_line->setObjectName("search_line");

        gridLayout_4->addWidget(search_line, 0, 0, 1, 1);

        search_btn = new QPushButton(widget_4);
        search_btn->setObjectName("search_btn");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img1/img/ser_btn.png"), QSize(), QIcon::Normal, QIcon::Off);
        search_btn->setIcon(icon1);

        gridLayout_4->addWidget(search_btn, 0, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_5, 0, 2, 1, 1);


        gridLayout->addWidget(widget_4, 3, 0, 1, 1);

        widget_2 = new QWidget(tool_widget);
        widget_2->setObjectName("widget_2");
        gridLayout_2 = new QGridLayout(widget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_2->addWidget(label_2, 0, 0, 1, 1);

        sort_box = new QComboBox(widget_2);
        sort_box->addItem(QString());
        sort_box->addItem(QString());
        sort_box->addItem(QString());
        sort_box->setObjectName("sort_box");

        gridLayout_2->addWidget(sort_box, 0, 1, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 0, 2, 1, 1);


        gridLayout->addWidget(widget_2, 2, 0, 1, 1);

        widget_3 = new QWidget(tool_widget);
        widget_3->setObjectName("widget_3");
        gridLayout_3 = new QGridLayout(widget_3);
        gridLayout_3->setObjectName("gridLayout_3");
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        search_box = new QComboBox(widget_3);
        search_box->addItem(QString());
        search_box->addItem(QString());
        search_box->addItem(QString());
        search_box->setObjectName("search_box");

        gridLayout_3->addWidget(search_box, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 0, 2, 1, 1);


        gridLayout->addWidget(widget_3, 0, 0, 1, 1);

        widget_5 = new QWidget(tool_widget);
        widget_5->setObjectName("widget_5");
        gridLayout_6 = new QGridLayout(widget_5);
        gridLayout_6->setObjectName("gridLayout_6");
        label_4 = new QLabel(widget_5);
        label_4->setObjectName("label_4");

        gridLayout_6->addWidget(label_4, 0, 0, 1, 1);

        method_box = new QComboBox(widget_5);
        method_box->addItem(QString());
        method_box->addItem(QString());
        method_box->setObjectName("method_box");

        gridLayout_6->addWidget(method_box, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_2, 0, 2, 1, 1);


        gridLayout->addWidget(widget_5, 1, 0, 1, 1);


        gridLayout_7->addWidget(tool_widget, 0, 0, 1, 1);

        btn_widget = new QWidget(widget);
        btn_widget->setObjectName("btn_widget");
        gridLayout_5 = new QGridLayout(btn_widget);
        gridLayout_5->setObjectName("gridLayout_5");
        add_btn = new QPushButton(btn_widget);
        add_btn->setObjectName("add_btn");

        gridLayout_5->addWidget(add_btn, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 2, 1, 1);

        del_btn = new QPushButton(btn_widget);
        del_btn->setObjectName("del_btn");

        gridLayout_5->addWidget(del_btn, 1, 1, 1, 1);

        mfy_btn = new QPushButton(btn_widget);
        mfy_btn->setObjectName("mfy_btn");

        gridLayout_5->addWidget(mfy_btn, 2, 1, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_6, 0, 0, 1, 1);

        exit_btn = new QPushButton(btn_widget);
        exit_btn->setObjectName("exit_btn");

        gridLayout_5->addWidget(exit_btn, 3, 1, 1, 1);

        num_btn = new QPushButton(btn_widget);
        num_btn->setObjectName("num_btn");

        gridLayout_5->addWidget(num_btn, 4, 1, 1, 1);


        gridLayout_7->addWidget(btn_widget, 1, 0, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 1, 1, 1);


        gridLayout_10->addWidget(widget, 2, 0, 1, 1);

        gridLayout_10->setColumnStretch(0, 1);
        gridLayout_10->setColumnStretch(1, 3);

        retranslateUi(manager);

        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QCoreApplication::translate("manager", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237-\345\221\230\345\267\245\347\256\241\347\220\206\347\225\214\351\235\242", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("manager", "\345\272\217\345\217\267", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\272\223\345\255\230", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\223\201\347\211\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\216\202\345\256\266", nullptr));
        img_label->setText(QString());
        title_label->setText(QCoreApplication::translate("manager", "\345\221\230\345\267\245\350\264\246\345\217\267:", nullptr));
        search_btn->setText(QString());
        label_2->setText(QCoreApplication::translate("manager", "\346\216\222\345\272\217\346\235\241\344\273\266:", nullptr));
        sort_box->setItemText(0, QCoreApplication::translate("manager", "\345\225\206\345\223\201\344\273\267\346\240\274", nullptr));
        sort_box->setItemText(1, QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\272\223\345\255\230", nullptr));
        sort_box->setItemText(2, QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\216\202\345\256\266", nullptr));

        label_3->setText(QCoreApplication::translate("manager", "\346\237\245\350\257\242\346\226\271\345\274\217:", nullptr));
        search_box->setItemText(0, QCoreApplication::translate("manager", "\345\225\206\345\223\201\347\261\273\345\236\213", nullptr));
        search_box->setItemText(1, QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        search_box->setItemText(2, QCoreApplication::translate("manager", "\345\225\206\345\223\201\345\216\202\345\256\266", nullptr));

        label_4->setText(QCoreApplication::translate("manager", "\346\216\222\345\272\217\346\226\271\345\274\217:", nullptr));
        method_box->setItemText(0, QCoreApplication::translate("manager", "\345\215\207\345\272\217", nullptr));
        method_box->setItemText(1, QCoreApplication::translate("manager", "\351\231\215\345\272\217", nullptr));

        add_btn->setText(QCoreApplication::translate("manager", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        del_btn->setText(QCoreApplication::translate("manager", "\345\210\240\351\231\244\345\225\206\345\223\201", nullptr));
        mfy_btn->setText(QCoreApplication::translate("manager", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        exit_btn->setText(QCoreApplication::translate("manager", "\351\200\200\345\207\272\347\231\273\345\275\225", nullptr));
        num_btn->setText(QCoreApplication::translate("manager", "\345\225\206\345\223\201\346\225\260\351\207\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
