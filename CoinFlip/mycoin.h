#ifndef MYCOIN_H
#define MYCOIN_H

#include <QPushButton>
#include<QTimer>

class MyCoin : public QPushButton
{
    Q_OBJECT
public:
    MyCoin(QString btnImg);

    int posX;
    int posY;
    bool flag;
    void changeFlag();
    QTimer*timer1;
    QTimer*timer2;
    int begin=1;
    int end=8;
    bool isAnimation=false;
    void mousePressEvent(QMouseEvent*);
    bool isWin=false;

signals:

};

#endif // MYCOIN_H
