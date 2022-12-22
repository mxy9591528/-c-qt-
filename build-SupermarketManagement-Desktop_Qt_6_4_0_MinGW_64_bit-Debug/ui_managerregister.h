/********************************************************************************
** Form generated from reading UI file 'managerregister.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGERREGISTER_H
#define UI_MANAGERREGISTER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_managerregister
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *id_line;
    QLabel *label_2;
    QLineEdit *pwd_line;
    QLabel *label_3;
    QLineEdit *pwd_line_2;
    QLabel *label_4;
    QPushButton *rand_btn;
    QPushButton *ok_btn;
    QPushButton *cancel_btn;
    QLabel *label_img;

    void setupUi(QWidget *managerregister)
    {
        if (managerregister->objectName().isEmpty())
            managerregister->setObjectName("managerregister");
        managerregister->resize(400, 300);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img1/img/winIcon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        managerregister->setWindowIcon(icon);
        gridLayout = new QGridLayout(managerregister);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(managerregister);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        id_line = new QLineEdit(managerregister);
        id_line->setObjectName("id_line");

        gridLayout->addWidget(id_line, 0, 1, 1, 3);

        label_2 = new QLabel(managerregister);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        pwd_line = new QLineEdit(managerregister);
        pwd_line->setObjectName("pwd_line");
        pwd_line->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pwd_line, 1, 1, 1, 3);

        label_3 = new QLabel(managerregister);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        pwd_line_2 = new QLineEdit(managerregister);
        pwd_line_2->setObjectName("pwd_line_2");
        pwd_line_2->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(pwd_line_2, 2, 1, 1, 3);

        label_4 = new QLabel(managerregister);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        rand_btn = new QPushButton(managerregister);
        rand_btn->setObjectName("rand_btn");

        gridLayout->addWidget(rand_btn, 3, 3, 1, 1);

        ok_btn = new QPushButton(managerregister);
        ok_btn->setObjectName("ok_btn");

        gridLayout->addWidget(ok_btn, 4, 0, 1, 2);

        cancel_btn = new QPushButton(managerregister);
        cancel_btn->setObjectName("cancel_btn");

        gridLayout->addWidget(cancel_btn, 4, 2, 1, 2);

        label_img = new QLabel(managerregister);
        label_img->setObjectName("label_img");

        gridLayout->addWidget(label_img, 3, 1, 1, 2);


        retranslateUi(managerregister);

        QMetaObject::connectSlotsByName(managerregister);
    } // setupUi

    void retranslateUi(QWidget *managerregister)
    {
        managerregister->setWindowTitle(QCoreApplication::translate("managerregister", "\350\266\205\345\270\202\345\225\206\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237-\345\221\230\345\267\245\350\264\246\345\217\267\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("managerregister", "\350\264\246\345\217\267:", nullptr));
        label_2->setText(QCoreApplication::translate("managerregister", "\345\257\206\347\240\201:", nullptr));
        label_3->setText(QCoreApplication::translate("managerregister", "\347\241\256\350\256\244\345\257\206\347\240\201:", nullptr));
        label_4->setText(QCoreApplication::translate("managerregister", "\345\244\264\345\203\217:", nullptr));
        rand_btn->setText(QCoreApplication::translate("managerregister", "\351\232\217\346\234\272", nullptr));
        ok_btn->setText(QCoreApplication::translate("managerregister", "\347\241\256\350\256\244", nullptr));
        cancel_btn->setText(QCoreApplication::translate("managerregister", "\345\217\226\346\266\210", nullptr));
        label_img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class managerregister: public Ui_managerregister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGERREGISTER_H
