#include "mywidgt.h"
#include<qpushbutton.h>
#include "MyPushButton.h"
myWidgt::myWidgt(QWidget *parent)
    : QMainWindow(parent)
{
    QPushButton*btn1=new QPushButton;
    btn1->setParent(this);
    btn1->setText("第一个按钮");
    btn1->resize(100,100);
    QPushButton*btn2=new QPushButton("第二个按钮",this);
    btn2->move(100,100);
    resize(600,400);
    setWindowTitle("第一个窗口");
    setFixedSize(600,400);//固定窗口大小
    MyPushButton*mybtn=new MyPushButton;
    mybtn->setText("我的按钮");
    mybtn->move(200,0);
    mybtn->setParent(this);
    connect(mybtn,&MyPushButton::clicked,this,&myWidgt::close);
}

myWidgt::~myWidgt()
{
}

