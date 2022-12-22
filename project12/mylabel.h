#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>
#include<QMouseEvent>
#include<QDebug>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = nullptr);
//    void enterEvent(QEvent*event);
//    void leaveEvent(QEvent*event);
    void mouseMoveEvent(QMouseEvent*event);
    void mousePressedEvent(QMouseEvent*event);
    void mouseReleaseEvent(QMouseEvent*event);
    bool event(QEvent*e);
signals:

};

#endif // MYLABEL_H
