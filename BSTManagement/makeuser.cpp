#include "makeuser.h"
#include "ui_makeuser.h"
#include<QMessageBox>
#include"Info.h"

makeuser::makeuser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::makeuser)
{
    ui->setupUi(this);
}

makeuser::~makeuser()
{
    delete ui;
}

void makeuser::on_make_btn_clicked()
{
    m_sql=stusql::getsql();
    QString name=ui->user_line->text();
    QString pwd1=ui->pwd_line->text();
    QString pwd2=ui->pwd_t_line->text();
    if(pwd1.isEmpty()||name.isEmpty())
        QMessageBox::information(nullptr,"警告","用户名或密码不能为空");
    else if(m_sql->isUserExist(name))
        QMessageBox::information(nullptr,"警告","用户名已存在!");
    else if(pwd1!=pwd2)
        QMessageBox::information(nullptr,"警告","两次密码输入不一致");
    else
    {
        User info;
        info.username=name;
        info.password=pwd2;
        info.authority="待完善";
        m_sql->addUser(info);
        QMessageBox::information(nullptr,"提示","保存成功");
        this->hide();
        ui->user_line->clear();
        ui->pwd_line->clear();
        ui->pwd_t_line->clear();
    }
}


void makeuser::on_cancel_btn_clicked()
{
    this->hide();
}

