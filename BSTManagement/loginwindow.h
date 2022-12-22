#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QWidget>
#include"stusql.h"
#include"makeuser.h"

namespace Ui {
class LoginWindow;
}

class LoginWindow : public QWidget
{
    Q_OBJECT

public:
    explicit LoginWindow(QWidget *parent = nullptr);
    ~LoginWindow();
    QString sendUsername();
private slots:
    void on_login_btn_clicked();
    void on_register_btn_clicked();
signals:
    void LoginSuccess();
private:
    Ui::LoginWindow *ui;
    stusql*m_sql;
    makeuser reg_ui;
    QString m_user;
};

#endif // LOGINWINDOW_H
