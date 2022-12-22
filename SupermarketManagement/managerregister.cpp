#include "managerregister.h"
#include "ui_managerregister.h"

managerregister::managerregister(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::managerregister)
{
    ui->setupUi(this);
    Utility::setStyle(":/css/css/managerregister.css");
    this->setFixedSize(320,300);
    ui->label_img->setPixmap(QPixmap(this->imgstr));
    srand(QTime(0,0,0).secsTo(QTime::currentTime()));
}

managerregister::~managerregister()
{
    delete ui;
}

void managerregister::getRandomImg()
{
    QString res=":/img2/img/avatar/";
    int n=10000+rand()%100+1;
    this->imgstr=res+QString("%1").arg(n)+".jpg";
}

void managerregister::on_rand_btn_clicked()
{
    this->getRandomImg();
    ui->label_img->setPixmap(QPixmap(this->imgstr));
}


void managerregister::on_cancel_btn_clicked()
{
    this->hide();
    emit exitInfo();
}


void managerregister::on_ok_btn_clicked()
{
    if(ui->id_line->text()=="")
        QMessageBox::information(this,"提示","账号不能为空!");
    else if(ui->pwd_line->text()=="")
        QMessageBox::information(this,"提示","密码不能为空!");
    else if(ui->pwd_line->text()!=ui->pwd_line_2->text())
        QMessageBox::information(this,"提示","两次输入密码不一致!");
    else if(mysqlconnect::getconnect()->getManager(ui->id_line->text())!=nullptr)
        QMessageBox::information(this,"提示","账号已被使用!");
    else
    {
        Manager*m=new Manager(ui->id_line->text(),ui->pwd_line->text(),this->imgstr,Utility::WAIT_CHECK);
        mysqlconnect::getconnect()->addManager(m);
        QMessageBox::information(this,"提示","已提交申请!");
        this->hide();
        emit exitInfo();
    }
}

