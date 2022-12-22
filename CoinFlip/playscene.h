#ifndef PLAYSCENE_H
#define PLAYSCENE_H

#include <QMainWindow>
#include<mycoin.h>
#include<QTimer>

class PlayScene : public QMainWindow
{
    Q_OBJECT
public:
    PlayScene(int levelnum);
    int levelnum;
    void paintEvent(QPaintEvent*);
    int gameArray[4][4];
    MyCoin*coinBtn[4][4];
    bool isWin;
    QTimer*timer;
signals:
    void backsignal();
};

#endif // PLAYSCENE_H
