#ifndef LOGIN_H
#define LOGIN_H

#include <QMainWindow>
#include"customer.h"
#include"admin.h"
#include"QDateTime"
#include<QTimer>
#include<QLabel>
#include<QDialog>
#include<QMessageBox>
#include<QInputDialog>
#include"managerlogin.h"

namespace Ui {
class login;
}

class login : public QMainWindow
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_cus_login_clicked();

    void on_emp_login_clicked();

    void on_boos_login_clicked();

    void on_exit_clicked();
    void timeUpdate();

    void on_wechatimg_triggered();

    void on_illustrate_triggered();
    void receiveExit();
private:
    Ui::login *ui;
    customer*c;
    admin*a;
    QLabel*ShowTimeLabel;
    Admin*administrater=mysqlconnect::getconnect()->getAdmin();
};

#endif // LOGIN_H
