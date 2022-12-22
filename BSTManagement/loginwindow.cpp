#include "loginwindow.h"
#include "ui_loginwindow.h"
#include<QMessageBox>
#include<QFile>
#include<mainwindow.h>

LoginWindow::LoginWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::LoginWindow)
{
    ui->setupUi(this);

}

LoginWindow::~LoginWindow()
{
    delete ui;
}

QString LoginWindow::sendUsername()
{
    return m_user;
}

void LoginWindow::on_login_btn_clicked()
{
    QString name=ui->user_lineEdit->text();
    m_sql=stusql::getsql();
    if(m_sql->isUserExist(name)&&!name.isEmpty())
    {
        QString pwd=ui->pwd_lineEdit->text();
        if(pwd==m_sql->getUser(name).password&&!pwd.isEmpty())
        {
            QMessageBox::information(nullptr,"提示","登录成功!");
            m_user=name;
            emit LoginSuccess();
        }
        else
            QMessageBox::information(nullptr,"警告","密码错误!");
    }
    else
        QMessageBox::information(nullptr,"警告","用户名不存在!");
    ui->user_lineEdit->clear();
    ui->pwd_lineEdit->clear();
}

void LoginWindow::on_register_btn_clicked()
{
    QFile file;
    file.setFileName(":/register.css");
    file.open(QIODevice::ReadOnly);
    QString str=file.readAll();
    reg_ui.setStyleSheet(str);
    reg_ui.exec();
    file.close();
}

