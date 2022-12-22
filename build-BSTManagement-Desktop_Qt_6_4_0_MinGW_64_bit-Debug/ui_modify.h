/********************************************************************************
** Form generated from reading UI file 'modify.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFY_H
#define UI_MODIFY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Modify
{
public:
    QGridLayout *gridLayout;
    QLabel *label_class;
    QLabel *label_grade;
    QLabel *label_tel;
    QSpacerItem *horizontalSpacer;
    QLineEdit *id_line;
    QLineEdit *wechat_line;
    QLineEdit *grade_line;
    QLineEdit *tel_line;
    QLabel *label_age;
    QLabel *label_id;
    QLabel *label_wechat;
    QLabel *label_name;
    QSpinBox *spinBox;
    QLineEdit *name_line;
    QLineEdit *class_line;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QPushButton *save_btn;
    QPushButton *cancel_btn;

    void setupUi(QWidget *Modify)
    {
        if (Modify->objectName().isEmpty())
            Modify->setObjectName("Modify");
        Modify->resize(405, 275);
        Modify->setMinimumSize(QSize(405, 275));
        Modify->setMaximumSize(QSize(405, 275));
        gridLayout = new QGridLayout(Modify);
        gridLayout->setObjectName("gridLayout");
        label_class = new QLabel(Modify);
        label_class->setObjectName("label_class");
        label_class->setMinimumSize(QSize(80, 0));
        label_class->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_class, 3, 0, 1, 1);

        label_grade = new QLabel(Modify);
        label_grade->setObjectName("label_grade");
        label_grade->setMinimumSize(QSize(80, 0));
        label_grade->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_grade, 2, 0, 1, 1);

        label_tel = new QLabel(Modify);
        label_tel->setObjectName("label_tel");
        label_tel->setMinimumSize(QSize(80, 0));
        label_tel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_tel, 5, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(85, 20, QSizePolicy::Minimum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        id_line = new QLineEdit(Modify);
        id_line->setObjectName("id_line");

        gridLayout->addWidget(id_line, 4, 1, 1, 1);

        wechat_line = new QLineEdit(Modify);
        wechat_line->setObjectName("wechat_line");

        gridLayout->addWidget(wechat_line, 6, 1, 1, 1);

        grade_line = new QLineEdit(Modify);
        grade_line->setObjectName("grade_line");

        gridLayout->addWidget(grade_line, 2, 1, 1, 1);

        tel_line = new QLineEdit(Modify);
        tel_line->setObjectName("tel_line");

        gridLayout->addWidget(tel_line, 5, 1, 1, 1);

        label_age = new QLabel(Modify);
        label_age->setObjectName("label_age");
        label_age->setMinimumSize(QSize(80, 0));
        label_age->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_age, 1, 0, 1, 1);

        label_id = new QLabel(Modify);
        label_id->setObjectName("label_id");
        label_id->setMinimumSize(QSize(80, 0));
        label_id->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_id, 4, 0, 1, 1);

        label_wechat = new QLabel(Modify);
        label_wechat->setObjectName("label_wechat");
        label_wechat->setMinimumSize(QSize(80, 0));
        label_wechat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_wechat, 6, 0, 1, 1);

        label_name = new QLabel(Modify);
        label_name->setObjectName("label_name");
        label_name->setMinimumSize(QSize(80, 0));
        label_name->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_name, 0, 0, 1, 1);

        spinBox = new QSpinBox(Modify);
        spinBox->setObjectName("spinBox");
        spinBox->setMaximum(150);
        spinBox->setValue(18);

        gridLayout->addWidget(spinBox, 1, 1, 1, 1);

        name_line = new QLineEdit(Modify);
        name_line->setObjectName("name_line");

        gridLayout->addWidget(name_line, 0, 1, 1, 1);

        class_line = new QLineEdit(Modify);
        class_line->setObjectName("class_line");

        gridLayout->addWidget(class_line, 3, 1, 1, 1);

        widget = new QWidget(Modify);
        widget->setObjectName("widget");
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        save_btn = new QPushButton(widget);
        save_btn->setObjectName("save_btn");

        gridLayout_2->addWidget(save_btn, 0, 0, 1, 1);

        cancel_btn = new QPushButton(widget);
        cancel_btn->setObjectName("cancel_btn");

        gridLayout_2->addWidget(cancel_btn, 0, 1, 1, 1);


        gridLayout->addWidget(widget, 7, 0, 1, 3);

        QWidget::setTabOrder(name_line, spinBox);
        QWidget::setTabOrder(spinBox, grade_line);
        QWidget::setTabOrder(grade_line, class_line);
        QWidget::setTabOrder(class_line, id_line);
        QWidget::setTabOrder(id_line, tel_line);
        QWidget::setTabOrder(tel_line, wechat_line);
        QWidget::setTabOrder(wechat_line, save_btn);
        QWidget::setTabOrder(save_btn, cancel_btn);

        retranslateUi(Modify);

        QMetaObject::connectSlotsByName(Modify);
    } // setupUi

    void retranslateUi(QWidget *Modify)
    {
        Modify->setWindowTitle(QCoreApplication::translate("Modify", "\347\274\226\350\276\221\347\225\214\351\235\242", nullptr));
        label_class->setText(QCoreApplication::translate("Modify", "\347\217\255\347\272\247", nullptr));
        label_grade->setText(QCoreApplication::translate("Modify", "\345\271\264\347\272\247", nullptr));
        label_tel->setText(QCoreApplication::translate("Modify", "\347\224\265\350\257\235", nullptr));
        label_age->setText(QCoreApplication::translate("Modify", "\345\271\264\351\276\204", nullptr));
        label_id->setText(QCoreApplication::translate("Modify", "\345\255\246\345\217\267", nullptr));
        label_wechat->setText(QCoreApplication::translate("Modify", "\345\276\256\344\277\241", nullptr));
        label_name->setText(QCoreApplication::translate("Modify", "\345\247\223\345\220\215", nullptr));
        save_btn->setText(QCoreApplication::translate("Modify", "\344\277\235\345\255\230", nullptr));
        cancel_btn->setText(QCoreApplication::translate("Modify", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Modify: public Ui_Modify {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFY_H
