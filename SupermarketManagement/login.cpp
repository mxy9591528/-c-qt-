#include "login.h"
#include "ui_login.h"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    Utility::setStyle(":/css/css/login.css");
    QTimer *timer=new QTimer(this);
    timer->start(1000); // 每次触发timeout信号时间间隔为1秒
    connect(timer,SIGNAL(timeout()),this,SLOT(timeUpdate()));
    ShowTimeLabel = new QLabel(this);
    ui->wechatimg->setIcon(QIcon(":/img1/img/menu_wecharticon.jpg"));
    ui->illustrate->setIcon(QIcon(":/img1/img/illustrate.jpg"));
}

login::~login()
{
    delete ui;
}

void login::on_cus_login_clicked()
{
    this->hide();
    this->c=new customer();
    c->show();
    connect(c,SIGNAL(cusExit()),this,SLOT(receiveExit()));
}


void login::on_emp_login_clicked()
{
    this->hide();
    managerlogin*mlogin=new managerlogin();
    mlogin->show();
    connect(mlogin,SIGNAL(registerClose()),this,SLOT(receiveExit()));
}


void login::on_boos_login_clicked()
{
    Utility::setStyle(":/css/css/dialogclear.css");
    QString name=QInputDialog::getText(this,"管理员昵称","请输入姓名",QLineEdit::Normal);
    if(name==this->administrater->getname())
    {
        QString pwd=QInputDialog::getText(this,"管理员密码","请输入密码",QLineEdit::Password);
        if(pwd==this->administrater->getpwd())
        {
            this->hide();
            this->a=new admin();
            a->show();
            connect(a,SIGNAL(boosExit()),this,SLOT(receiveExit()));
        }
        else
            QMessageBox::information(this,"提示","密码错误!");
    }
    else
    {
        QMessageBox::information(this,"提示","名称错误!");
    }
    //Utility::setStyle(":/css/css/login.css");
}


void login::on_exit_clicked()
{
    exit(0);
}

void login::timeUpdate()
{
    QDateTime CurrentTime=QDateTime::currentDateTime();
    QString strTime=CurrentTime.toString(" yyyy年MM月dd日 hh:mm:ss "); //设置显示的格式
    ShowTimeLabel->setText(strTime);
    statusBar()->addPermanentWidget(ShowTimeLabel);
    statusBar()->setSizeGripEnabled(true); //设置是否显示右边的大小控制点

}


void login::on_wechatimg_triggered()
{
    QDialog*dialog=new QDialog();
    dialog->setWindowModality(Qt::ApplicationModal);
    dialog->setWindowTitle("微信号");
    dialog->setFixedSize(500,650);
    dialog->setWindowIcon(QIcon(":/img1/img/dialogicon.jpg"));
    dialog->show();
}


void login::on_illustrate_triggered()
{
    QLabel*label=new QLabel();
    label->setFixedSize(480,600);
    label->setWindowModality(Qt::ApplicationModal);
    label->setWindowIcon(QIcon(":/img1/img/illustrate.jpg"));
    label->setWindowTitle("使用说明");
    label->setText("wait");
    label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
    label->show();
}

void login::receiveExit()
{
    Utility::setStyle(":/css/css/login.css");
    this->show();
}

