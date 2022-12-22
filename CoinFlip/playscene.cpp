#include "playscene.h"
#include<QMenuBar>
#include<QPainter>
#include"mypushbutton.h"
#include<QTimer>
#include<QMenu>
#include<QLabel>
#include"mycoin.h"
#include"dataconfig.h"
#include<QDateTime>
#include<QSoundEffect>
PlayScene::PlayScene(int levelnum)
{
    this->levelnum=levelnum;
    //初始化游戏场景
    this->setFixedSize(320,588);
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    this->setWindowTitle("翻金币场景-第"+QString::number(levelnum)+"关");
    QMenuBar*bar=menuBar();
    setMenuBar(bar);
    QMenu*startMenu=bar->addMenu("开始");
    QAction*quitAction=startMenu->addAction("退出");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //返回按钮音效
    QSoundEffect *backSound = new QSoundEffect();
    backSound->setSource(QUrl::fromLocalFile(":/res/BackButtonSound.wav"));

    MyPushButton*backBtn=new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());
    connect(backBtn,&MyPushButton::clicked,[=](){
        backSound->play();
        QTimer::singleShot(300,this,[=](){
            this->hide();
            emit this->backsignal();
        });

    });

    //显示关卡数
    QLabel*label=new QLabel;
    label->setParent(this);
    QFont font;
    font.setFamily("华文新魏");
    font.setPointSize(20);
    label->setText("Level: "+QString::number(this->levelnum));
    //将字体设置到标签中
    label->setFont(font);
    label->setGeometry(30,this->height()-50,120,50);

    QLabel*timeLabel = new QLabel(this);
    QPalette pe;
    pe.setColor(QPalette::WindowText, Qt::white);//设置颜色
    timeLabel ->setPalette(pe);
    timeLabel->setFont(font);
    timeLabel->setGeometry(this->width()-140,120,120,50);
    timer = new QTimer;
    int begins=QTime::currentTime().second(), beginm=QTime::currentTime().minute(), beginh=QTime::currentTime().hour(), begin=(beginm+beginh*60)*60+begins;
    connect(timer,&QTimer::timeout,[=](){
        int ends=QTime::currentTime().second(), endm=QTime::currentTime().minute(), endh=QTime::currentTime().hour(), end=(endm+endh*60)*60+ends;
        int ans=end-begin;
        timeLabel->setText("用时:"+QString::number((ans-ans%60)/60)+":"+QString::number(ans%60));
    }); //定义计时器，并连接槽函数
    timer->start();     //开始计时
    //初始化关卡二维数组
    DataConfig config;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            this->gameArray[i][j]=config.mData[this->levelnum][i][j];
    //翻金币音效
    QSoundEffect *flipSound = new QSoundEffect();
    flipSound->setSource(QUrl::fromLocalFile(":/res/ConFlipSound.wav"));
    //胜利音效
    QSoundEffect *winSound = new QSoundEffect();
    winSound->setSource(QUrl::fromLocalFile(":/res/LevelWinSound.wav"));
    QLabel *winLabel = new QLabel;
    QPixmap tmpPix(":/res/LevelCompletedDialogBg.png");
    winLabel->setParent(this);
    winLabel->setGeometry(0,0,tmpPix.width(),tmpPix.height());
    winLabel->setPixmap(tmpPix);
    winLabel->move((this->width()-tmpPix.width())*0.5, -tmpPix.height());
    //显示金币背景图案
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            QPixmap pix=QPixmap(":/res/BoardNode.png");
            QLabel*label=new QLabel;
            label->setPixmap(pix);
            label->setGeometry(0,0,pix.width(),pix.height());
            label->setParent(this);
            label->move(57+i*50,200+j*50);
            //创建金币
            QString str;
            if(this->gameArray[i][j]==1)
                str=":/res/Coin0001.png";
            else
                str=":/res/Coin0008.png";
            MyCoin*coin=new MyCoin(str);
            coin->setParent(this);
            coin->move(59+i*50,204+j*50);
            //给金币属性赋值
            coin->posX=i;
            coin->posY=j;
            coin->flag=this->gameArray[i][j];
            //存入数组进行维护
            coinBtn[i][j]=coin;
            //点击金币进行翻转
            connect(coin,&MyCoin::clicked,[=](){
                flipSound->play();
                coin->changeFlag();
                this->gameArray[i][j]=!this->gameArray[i][j];

                //周围金币翻转
                QTimer::singleShot(300,this,[=](){
                    if(coin->posX+1<=3)
                    {
                        coinBtn[coin->posX+1][coin->posY]->changeFlag();
                        gameArray[coin->posX+1][coin->posY]=!gameArray[coin->posX+1][coin->posY];
                    }
                    if(coin->posX-1>=0)
                    {
                        coinBtn[coin->posX-1][coin->posY]->changeFlag();
                        gameArray[coin->posX-1][coin->posY]=!gameArray[coin->posX-1][coin->posY];
                    }
                    if(coin->posY+1<=3)
                    {
                        coinBtn[coin->posX][coin->posY+1]->changeFlag();
                        gameArray[coin->posX][coin->posY+1]=!gameArray[coin->posX][coin->posY+1];
                    }
                    if(coin->posY-1>=0)
                    {
                        coinBtn[coin->posX][coin->posY-1]->changeFlag();
                        gameArray[coin->posX][coin->posY-1]=!gameArray[coin->posX][coin->posY-1];
                    }
                    //胜利判断
                    this->isWin=true;
                    for(int i=0;i<4;i++)
                    {
                        for(int j=0;j<4;j++)
                        {
                            if(!coinBtn[i][j]->flag)
                            {
                                this->isWin=false;
                                break;
                            }
                        }
                    }
                    if(this->isWin)
                    {
                        timer->stop();
                        winSound->play();
                        //将胜利的图片降下来
                        QPropertyAnimation *animation = new QPropertyAnimation(winLabel, "geometry");
                        //设置动画时间间隔
                        animation->setDuration(1000);
                        //起始位置
                        animation->setStartValue(QRect(winLabel->x(), winLabel->y(), winLabel->width(), winLabel->height()));
                        //结束位置
                        animation->setEndValue(QRect(winLabel->x(),winLabel->y()+110, winLabel->width(), winLabel->height()));
                        //设置缓和曲线
                        animation->setEasingCurve(QEasingCurve::OutBounce);
                        //执行动画
                        animation->start();

                        //胜利后 将每个btn的标志都改为true,再点击按钮,不做响应
                        for (int i=0; i<4; i++)
                            for (int j=0; j<4; j++)
                                this->coinBtn[i][j]->isWin = true;
                    }
                });
            });
        }
    }
}
void PlayScene::paintEvent(QPaintEvent*e)
{
    QPainter painter(this);
    QPixmap pix(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    pix.load(":/res/Title.png");
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix.width(),pix.height(),pix);
}
