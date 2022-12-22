#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include<QString>
#include<QPropertyAnimation>

class MyPushButton : public QPushButton
{
    Q_OBJECT
public:
    //参数1正常图片，参数2按下
    MyPushButton(QString nomal,QString press="");
    QString normalpath;
    QString presspath;

    void jumpeffect(bool dir);
    //重写按钮按下和释放事件
    void mousePressEvent(QMouseEvent*);
    void mouseReleaseEvent(QMouseEvent*);
signals:

};

#endif // MYPUSHBUTTON_H
