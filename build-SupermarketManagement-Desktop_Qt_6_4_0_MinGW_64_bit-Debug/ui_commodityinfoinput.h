/********************************************************************************
** Form generated from reading UI file 'commodityinfoinput.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITYINFOINPUT_H
#define UI_COMMODITYINFOINPUT_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commodityinfoinput
{
public:
    QGridLayout *gridLayout;
    QComboBox *type_box;
    QLineEdit *brand_edit;
    QLineEdit *producer_edit;
    QLabel *label_2;
    QLineEdit *name_edit;
    QLineEdit *price_edit;
    QLabel *label_5;
    QWidget *widget_btn;
    QGridLayout *gridLayout_2;
    QPushButton *cancel_btn;
    QPushButton *ok_btn;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *num_edit;
    QLabel *label_6;

    void setupUi(QWidget *commodityinfoinput)
    {
        if (commodityinfoinput->objectName().isEmpty())
            commodityinfoinput->setObjectName("commodityinfoinput");
        commodityinfoinput->resize(306, 263);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/winIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        commodityinfoinput->setWindowIcon(icon);
        gridLayout = new QGridLayout(commodityinfoinput);
        gridLayout->setObjectName("gridLayout");
        type_box = new QComboBox(commodityinfoinput);
        type_box->addItem(QString());
        type_box->addItem(QString());
        type_box->addItem(QString());
        type_box->addItem(QString());
        type_box->addItem(QString());
        type_box->setObjectName("type_box");

        gridLayout->addWidget(type_box, 0, 1, 1, 1);

        brand_edit = new QLineEdit(commodityinfoinput);
        brand_edit->setObjectName("brand_edit");

        gridLayout->addWidget(brand_edit, 4, 1, 1, 1);

        producer_edit = new QLineEdit(commodityinfoinput);
        producer_edit->setObjectName("producer_edit");

        gridLayout->addWidget(producer_edit, 5, 1, 1, 1);

        label_2 = new QLabel(commodityinfoinput);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        name_edit = new QLineEdit(commodityinfoinput);
        name_edit->setObjectName("name_edit");

        gridLayout->addWidget(name_edit, 1, 1, 1, 1);

        price_edit = new QLineEdit(commodityinfoinput);
        price_edit->setObjectName("price_edit");

        gridLayout->addWidget(price_edit, 2, 1, 1, 1);

        label_5 = new QLabel(commodityinfoinput);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 5, 0, 1, 1);

        widget_btn = new QWidget(commodityinfoinput);
        widget_btn->setObjectName("widget_btn");
        gridLayout_2 = new QGridLayout(widget_btn);
        gridLayout_2->setObjectName("gridLayout_2");
        cancel_btn = new QPushButton(widget_btn);
        cancel_btn->setObjectName("cancel_btn");

        gridLayout_2->addWidget(cancel_btn, 0, 2, 1, 1);

        ok_btn = new QPushButton(widget_btn);
        ok_btn->setObjectName("ok_btn");

        gridLayout_2->addWidget(ok_btn, 0, 0, 1, 1);


        gridLayout->addWidget(widget_btn, 7, 0, 1, 2);

        label_4 = new QLabel(commodityinfoinput);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(commodityinfoinput);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label = new QLabel(commodityinfoinput);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        num_edit = new QLineEdit(commodityinfoinput);
        num_edit->setObjectName("num_edit");

        gridLayout->addWidget(num_edit, 3, 1, 1, 1);

        label_6 = new QLabel(commodityinfoinput);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 3, 0, 1, 1);

        QWidget::setTabOrder(type_box, name_edit);
        QWidget::setTabOrder(name_edit, price_edit);
        QWidget::setTabOrder(price_edit, brand_edit);
        QWidget::setTabOrder(brand_edit, producer_edit);
        QWidget::setTabOrder(producer_edit, cancel_btn);

        retranslateUi(commodityinfoinput);

        QMetaObject::connectSlotsByName(commodityinfoinput);
    } // setupUi

    void retranslateUi(QWidget *commodityinfoinput)
    {
        commodityinfoinput->setWindowTitle(QCoreApplication::translate("commodityinfoinput", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237-\345\225\206\345\223\201\344\277\241\346\201\257", nullptr));
        type_box->setItemText(0, QCoreApplication::translate("commodityinfoinput", "\351\243\237\345\223\201", nullptr));
        type_box->setItemText(1, QCoreApplication::translate("commodityinfoinput", "\351\245\256\346\226\231", nullptr));
        type_box->setItemText(2, QCoreApplication::translate("commodityinfoinput", "\347\224\237\346\264\273\347\224\250\345\223\201", nullptr));
        type_box->setItemText(3, QCoreApplication::translate("commodityinfoinput", "\345\214\226\345\246\206\345\223\201", nullptr));
        type_box->setItemText(4, QString());

        label_2->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\345\216\202\345\256\266:", nullptr));
        cancel_btn->setText(QCoreApplication::translate("commodityinfoinput", "\345\217\226\346\266\210", nullptr));
        ok_btn->setText(QCoreApplication::translate("commodityinfoinput", "\347\241\256\345\256\232", nullptr));
        label_4->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\345\223\201\347\211\214:", nullptr));
        label_3->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\344\273\267\346\240\274:", nullptr));
        label->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\347\247\215\347\261\273:", nullptr));
        label_6->setText(QCoreApplication::translate("commodityinfoinput", "\345\225\206\345\223\201\346\225\260\351\207\217:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commodityinfoinput: public Ui_commodityinfoinput {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITYINFOINPUT_H
