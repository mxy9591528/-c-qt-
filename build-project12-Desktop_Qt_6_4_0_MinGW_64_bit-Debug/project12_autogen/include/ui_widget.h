/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "mylabel.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    myLabel *label;
    QLabel *label2;
    QLabel *label3;
    QPushButton *btn1;
    QLabel *label4;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new myLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 200, 331, 81));
        label->setFrameShape(QFrame::Panel);
        label2 = new QLabel(Widget);
        label2->setObjectName("label2");
        label2->setGeometry(QRect(90, 120, 191, 61));
        label2->setFrameShape(QFrame::Box);
        label2->setFrameShadow(QFrame::Plain);
        label3 = new QLabel(Widget);
        label3->setObjectName("label3");
        label3->setGeometry(QRect(100, 350, 251, 71));
        label3->setFrameShape(QFrame::WinPanel);
        btn1 = new QPushButton(Widget);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(440, 480, 93, 29));
        label4 = new QLabel(Widget);
        label4->setObjectName("label4");
        label4->setGeometry(QRect(140, 470, 271, 51));
        label4->setFrameShape(QFrame::Box);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QString());
        label2->setText(QString());
        label3->setText(QString());
        btn1->setText(QCoreApplication::translate("Widget", "\346\232\202\345\201\234", nullptr));
        label4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
