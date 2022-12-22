#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    id1=startTimer(1);
    id2=startTimer(1000);
    QTimer*timer=new QTimer(this);
    timer->start(500);
    connect(timer,&QTimer::timeout,[=](){
        static int num1=1;
        ui->label4->setText(QString::number(num1++));
    });
    connect(ui->btn1,&QPushButton::clicked,[=](){
        timer->stop();
    });

    //安装事件过滤器
    ui->label->installEventFilter(this);
}
void Widget::timerEvent(QTimerEvent*ev)
{
    static int num=1,num2=1;
    if(ev->timerId()==id1)
        ui->label2->setText(QString::number(num++));
    else if(ev->timerId()==id2)
        ui->label3->setText(QString::number(num2++));
}
bool Widget::eventFilter(QObject*obj,QEvent*e)
{
    if(obj==ui->label)
    {
        if(e->type()==QEvent::MouseButtonPress)
        {
            QMouseEvent*ev=static_cast<QMouseEvent*>(e);
            QString str=QString("事件过滤器中:鼠标按下 x=%1  y=%2    global x=%3 global y=%4").arg(ev->position().x()).arg(ev->position().y()).arg(ev->globalPosition().x()).arg(ev->globalPosition().y());
            qDebug()<<"鼠标按下"<<str;
            return true;
        }
    }
    return QWidget::eventFilter(obj,e);
}
Widget::~Widget()
{
    delete ui;
}

