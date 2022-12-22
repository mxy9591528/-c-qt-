#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->t=new Teacher(this);
    this->s=new Student(this);
//    connect(t,&Teacher::hungery,s,&Student::treat);
//    classover();
    void(Teacher::*teachersignal)(QString)=&Teacher::hungery;
    void(Student::*studentslot)(QString)=&Student::treat;
    connect(t,teachersignal,s,studentslot);
    classover();
    QPushButton*btn=new QPushButton("下课",this);
    this->resize(600,400);
    void(Teacher::*teachersignal1)(void)=&Teacher::hungery;
    void(Student::*studentslot1)(void)=&Student::treat;
    connect(t,teachersignal1,s,studentslot1);
    connect(btn,&QPushButton::clicked,this,&Widget::classover);
    connect(btn,&QPushButton::clicked,s,studentslot1);
    connect(btn,&QPushButton::clicked,t,teachersignal1);
    disconnect(t,teachersignal1,s,studentslot1);
    connect(btn,&QPushButton::clicked,[=](){
        emit t->hungery("开水白菜");
        this->close();
        btn->setText("nnnnnnnnnnnnnnn");
    });
    QPushButton*btnco=new QPushButton("OPEN",this);
    btnco->move(70,70);
    connect(btnco,&QPushButton::clicked,[=](){

            if(getflag())
            {
                q=new QDialog();
                q->setWindowTitle("这是一个弹窗");
                q->resize(300,300);
                q->show();
                btnco->setText("CLOSE");
                setflag();
            }
            else
            {
                q->close();
                btnco->setText("OPEN");
                setflag();
            }
    });
}
void Widget::setflag()
{
    this->flag=!flag;
}
bool Widget::getflag()
{
    return flag;
}
void Widget::classover()
{
    emit t->hungery("宫保鸡丁");
}

Widget::~Widget()
{
    delete ui;
}

