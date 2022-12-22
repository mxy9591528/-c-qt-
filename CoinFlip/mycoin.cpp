#include "mycoin.h"

MyCoin::MyCoin(QString btnImg)
{
    QPixmap pix;
    pix.load(btnImg);
    this->setFixedSize(pix.size());
    this->setStyleSheet("QPushButton{border:0px;}");
    this->setIcon(pix);
    this->setIconSize(QSize(pix.size()));
    timer1=new QTimer(this);
    timer2=new QTimer(this);
    connect(timer1,&QTimer::timeout,[=](){
        QPixmap pix;
        QString str=QString(":/res/Coin000%1").arg(this->begin++);
        pix.load(str);
        this->setFixedSize(pix.size());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.size()));
        if(this->begin>this->end)
        {
            this->begin=1;
            isAnimation=false;
            timer1->stop();
        }
    });
    connect(timer2,&QTimer::timeout,[=](){
        QPixmap pix;
        QString str=QString(":/res/Coin000%1").arg(this->end--);
        pix.load(str);
        this->setFixedSize(pix.size());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.size()));
        if(this->begin>this->end)
        {
            this->end=8;
            isAnimation=false;
            timer2->stop();
        }
    });
}
void MyCoin::changeFlag()
{
    if(this->flag)
    {
        timer1->start(30);
        isAnimation=true;
        this->flag=false;
    }
    else
    {
        timer2->start(30);
        isAnimation=false;
        this->flag=true;
    }
}
void MyCoin::mousePressEvent(QMouseEvent*e)
{
    if(this->isAnimation||this->isWin)
        return;
    else
        return QPushButton::mousePressEvent(e);
}
