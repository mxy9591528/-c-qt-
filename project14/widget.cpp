#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
//    QPixmap pix(300,300);//绘图设备
//    pix.fill(Qt::white);

//    QPainter painter(&pix);
//    painter.setPen(QPen(Qt::green));
//    painter.drawEllipse(QPoint(150,150),100,100);
//    pix.save("D:/Qt_data/project14/pix.png");

//    QImage img(300,300,QImage::Format_RGB32);
//    img.fill(Qt::white);
//    QPainter painter(&img);
//    painter.setPen(QPen(Qt::red));
//    painter.drawEllipse(QPoint(150,150),100,100);
//    img.save("D:/Qt_data/project14/img.png");
    QPicture pic;
    QPainter painter;
    painter.begin(&pic);
    painter.setPen(QPen(Qt::cyan));
    painter.drawEllipse(QPoint(150,150),100,100);
    painter.end();
    pic.save("D:/Qt_data/project14/pic.zt");
}
void Widget::paintEvent(QPaintEvent*qe)
{
//    QPainter painter(this);
//    QImage img;
//    img.load("D:/Qt_data/project14/img.png");
//    for(int i=50;i<100;i++)
//    {
//        for(int j=50;j<100;j++)
//        {
//            QRgb value=qRgb(255,0,0);
//            img.setPixel(i,j,value);
//        }
//    }
//    painter.drawImage(0,0,img);
    QPainter painter(this);
    QPicture pic;
    pic.load("D:/Qt_data/project14/pic.zt");
    painter.drawPicture(0,0,pic);
}
Widget::~Widget()
{
    delete ui;
}

