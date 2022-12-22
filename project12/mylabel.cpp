#include "mylabel.h"

myLabel::myLabel(QWidget *parent)
    : QLabel{parent}
{
    setMouseTracking(true);
}
//void myLabel::enterEvent(QEvent*event)
//{
//    qDebug()<<"鼠标进入了";
//}
//void myLabel::leaveEvent(QEvent*event)
//{
//    qDebug()<<"鼠标离开了";
//}
void myLabel::mousePressedEvent(QMouseEvent*event)
{
    if(event->button()==Qt::LeftButton)
    {
        QString str=QString("鼠标按下 x=%1  y=%2    global x=%3 global y=%4").arg(event->x()).arg(event->y()).arg(event->globalX()).arg(event->globalY());
        qDebug()<<str;
    }
    else if(event->button()==Qt::RightButton)
    {

    }
    else
    {

    }
}
void myLabel::mouseReleaseEvent(QMouseEvent*event)
{
    QString str=QString("鼠标按下 x=%1  y=%2    global x=%3 global y=%4").arg(event->x()).arg(event->y()).arg(event->globalX()).arg(event->globalY());
    qDebug()<<"鼠标松开";
}
void myLabel::mouseMoveEvent(QMouseEvent*event)
{
    QString str=QString("鼠标按下 x=%1  y=%2    global x=%3 global y=%4").arg(event->position().x()).arg(event->position().y()).arg(event->globalPosition().x()).arg(event->globalPosition().y());
    qDebug()<<"鼠标移动"<<str;
}
bool myLabel::event(QEvent*e)
{
    if(e->type()==QEvent::MouseButtonPress)
    {
        QMouseEvent*ev=static_cast<QMouseEvent*>(e);
        QString str=QString("事件分发器中:鼠标按下 x=%1  y=%2    global x=%3 global y=%4").arg(ev->position().x()).arg(ev->position().y()).arg(ev->globalPosition().x()).arg(ev->globalPosition().y());
        qDebug()<<"鼠标按下"<<str;
        return true;
    }
    return QLabel::event(e);
}
