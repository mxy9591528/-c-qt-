#include "mypushbutton.h"
MyPushButton::MyPushButton(QString normal,QString press)
{
    this->normalpath=normal;
    this->presspath=press;
    QPixmap pix;
    bool check=pix.load(normalpath);
    if(!check)
    {
        qDebug()<<"图片加载失败";
        return;
    }
    //设置图片固定大小
    this->setFixedSize(pix.width(),pix.height());
    //设置不规则图片样式
    this->setStyleSheet("QPushButton{border:0px;}");
    //设置图标
    this->setIcon(pix);
    //设置图标大小
    this->setIconSize(QSize(pix.size()));

}
void MyPushButton::jumpeffect(bool dir)
{
    //创建动态对象
    QPropertyAnimation*animation=new QPropertyAnimation(this,"geometry");
    //设置动画事件间隔
    animation->setDuration(200);
    if(dir)
    {
        //起始位置
        animation->setStartValue(QRect(this->x(),this->y()+10,this->width(),this->height()));
        //结束位置
        animation->setEndValue(QRect(this->x(),this->y(),this->width(),this->height()));
    }
    else
    {
        animation->setStartValue(QRect(this->x(),this->y(),this->width(),this->height()));
        animation->setEndValue(QRect(this->x(),this->y()-10,this->width(),this->height()));
    }
    //设置弹跳曲线
    animation->setEasingCurve(QEasingCurve::OutBounce);
    animation->start();
}
void MyPushButton::mousePressEvent(QMouseEvent*e)
{
    //传入按下不为空，需要切换照片
    if(this->presspath!="")
    {
        QPixmap pix;
        bool check=pix.load(presspath);
        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.size()));
    }
    //让父类执行其他内容
    return QPushButton::mousePressEvent(e);
}
void MyPushButton::mouseReleaseEvent(QMouseEvent*e)
{
    //传入按下不为空，切回初始照片
    if(this->presspath!="")
    {
        QPixmap pix;
        pix.load(normalpath);
        this->setFixedSize(pix.width(),pix.height());
        this->setStyleSheet("QPushButton{border:0px;}");
        this->setIcon(pix);
        this->setIconSize(QSize(pix.size()));
    }
    return QPushButton::mouseReleaseEvent(e);
}
