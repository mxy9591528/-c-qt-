#ifndef MANAGERLOGIN_H
#define MANAGERLOGIN_H

#include <QWidget>
#include<QMessageBox>
#include<QCloseEvent>
#include"manager.h"
#include"utility.h"
#include"managerregister.h"

namespace Ui {
class managerlogin;
}

class managerlogin : public QWidget
{
    Q_OBJECT

public:
    explicit managerlogin(QWidget *parent = nullptr);
    ~managerlogin();
    void closeEvent(QCloseEvent*e);
signals:
    void managerExit();
    void registerClose();
private slots:
    void on_forget_btn_clicked();
    void on_login_btn_clicked();
    void receiveExit();
    void on_register_btn_clicked();
    void receiveRegisterInfo();
private:
    Ui::managerlogin *ui;
    manager*m;
};

#endif // MANAGERLOGIN_H
