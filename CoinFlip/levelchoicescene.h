#ifndef LEVELCHOICESCENE_H
#define LEVELCHOICESCENE_H

#include <QMainWindow>
#include<QMenuBar>
#include<QPainter>
#include<QTimer>
#include<QLabel>
#include"playscene.h"

class LevelChoiceScene : public QMainWindow
{
    Q_OBJECT
public:
    explicit LevelChoiceScene(QWidget *parent = nullptr);
    //重写绘图事件
    void paintEvent(QPaintEvent*);
    PlayScene*play=NULL;
signals:
    //返回信号
    void backsignal();
};

#endif // LEVELCHOICESCENE_H
