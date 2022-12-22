#include "managerlogin.h"
#include "ui_managerlogin.h"

managerlogin::managerlogin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managerlogin)
{
    ui->setupUi(this);
    this->setWindowModality(Qt::ApplicationModal);
    Utility::setStyle(":/css/css/managerlogin.css");
    this->setFixedSize(300,240);
}

managerlogin::~managerlogin()
{
    delete ui;
}

void managerlogin::closeEvent(QCloseEvent *e)
{
    e->accept();
    emit registerClose();
}

void managerlogin::on_forget_btn_clicked()
{
    QMessageBox::information(this,"提示","请联系管理员(老板)重置密码",QMessageBox::Ok);
}

void managerlogin::on_login_btn_clicked()
{
    Manager*res=mysqlconnect::getconnect()->getManager(ui->emp_id->text());
    if(res==nullptr)
        QMessageBox::information(this,"提示","账号或密码错误!");
    else
    {
        if(res->getstatus()==Utility::WAIT_CHECK)
        {
            QMessageBox::information(this,"提示","账号待审批!");
        }
        else if(res->getstatus()==Utility::NORMAL)
        {
            this->hide();
            this->m=new manager();
            m->setManagerInfo(res);
            m->show();
            connect(m,SIGNAL(empExit()),this,SLOT(receiveExit()));
        }
    }
}

void managerlogin::receiveExit()
{
    emit registerClose();
}


void managerlogin::on_register_btn_clicked()
{
    this->hide();
    managerregister*mregister=new managerregister();
    mregister->show();
    connect(mregister,SIGNAL(exitInfo()),this,SLOT(receiveRegisterInfo()));
}

void managerlogin::receiveRegisterInfo()
{
    this->show();
    Utility::setStyle(":/css/css/managerlogin.css");
}

