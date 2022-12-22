#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->btn1,&QPushButton::clicked,[=](){
        posX+=20;
        update();
    });
}
void Widget::paintEvent(QPaintEvent*qe)
{
//    QPainter painter(this);
//    QPen pen(QColor(255,0,0));
//    pen.setWidth(3);
//    pen.setStyle(Qt::DotLine);
//    painter.setPen(pen);
//    QBrush bruth(Qt::black);
//    bruth.setStyle(Qt::Dense7Pattern);
//    painter.setBrush(bruth);
//    painter.drawLine(QPoint(0,0),QPoint(100,100));
//    painter.drawEllipse(QPoint(100,100),50,50);
//    painter.drawRect(QRect(20,20,50,50));
//    painter.drawText(QRect(10,200,100,50),"刀剑无双");


//        QPainter painter(this);
////      painter.drawEllipse(QPoint(100,50),50,50);
////      //抗拒齿
////      painter.setRenderHint(QPainter::Antialiasing);
////      painter.drawEllipse(QPoint(200,50),50,50);

//        painter.drawRect(QRect(20,20,50,50));
//        painter.save();
//        //移动画家
//        painter.translate(100,0);
//        painter.restore();
//        painter.drawRect(QRect(20,20,50,50));

    QPainter painter(this);
    if(posX>this->width())
        posX=0;
    painter.drawPixmap(posX,0,QPixmap(":/Capture001.png"));


}
Widget::~Widget()
{
    delete ui;
}

