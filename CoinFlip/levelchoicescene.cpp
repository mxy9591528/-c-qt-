#include "levelchoicescene.h"
#include"mypushbutton.h"
#include<QSoundEffect>>
LevelChoiceScene:: LevelChoiceScene(QWidget *parent)
    : QMainWindow{parent}
{
    //配置选择关卡
    this->setFixedSize(320,588);
    //设置图标
    this->setWindowIcon(QPixmap(":/res/Coin0001.png"));
    //设置标题
    this->setWindowTitle("选择关卡场景");
    //创建菜单栏
    QMenuBar*bar=menuBar();
    setMenuBar(bar);
    //创建开始菜单
    QMenu*startMenu=bar->addMenu("开始");
    //创建退出菜单项
    QAction*quitAction=startMenu->addAction("退出");
    connect(quitAction,&QAction::triggered,[=](){
        this->close();
    });
    //返回按钮音效
    QSoundEffect *backSound = new QSoundEffect();
    backSound->setSource(QUrl::fromLocalFile(":/res/BackButtonSound.wav"));
    //返回按钮
    MyPushButton*backBtn=new MyPushButton(":/res/BackButton.png",":/res/BackButtonSelected.png");
    backBtn->setParent(this);
    backBtn->move(this->width()-backBtn->width(),this->height()-backBtn->height());
    //点击返回
    connect(backBtn,&MyPushButton::clicked,[=](){
        //发送信号
        //延迟返回
        backSound->play();
        QTimer::singleShot(300,this,[=](){
            this->hide();
            emit this->backsignal();
        });
    });
    //选择关卡按钮音效
    QSoundEffect *chooseSound = new QSoundEffect();
    chooseSound->setSource(QUrl::fromLocalFile(":/res/TapButtonSound.wav"));

    //创建选择关卡的按钮
    for(int i=0;i<20;i++)
    {
        MyPushButton*menuBtn=new MyPushButton(":/res/LevelIcon.png");
        menuBtn->setParent(this);
        menuBtn->move(i%4*70+25,i/4*70+130);

        //监听按钮点击
        connect(menuBtn,&MyPushButton::clicked,[=](){
            chooseSound->play();
            if(!play)
            {
                this->hide();
                play=new PlayScene(i+1);
                this->setGeometry(this->geometry());
                play->show();

                connect(play,&PlayScene::backsignal,[=](){
                    this->setGeometry(this->play->geometry());
                    this->show();
                    delete play;
                    play=NULL;
                });
            }
        });
        QLabel*label=new QLabel;
        label->setParent(this);
        label->setFixedSize(menuBtn->size());
        label->setText(QString::number(i+1));
        label->move(i%4*70+25,i/4*70+130);
        //设置label文字对齐方式
        label->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        //设置鼠标穿透
        label->setAttribute(Qt::WA_TransparentForMouseEvents);
    }

}
void LevelChoiceScene::paintEvent(QPaintEvent*)
{
    //加载背景
    QPainter painter(this);
    QPixmap pix(":/res/OtherSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //加载标题
    pix.load(":/res/Title.png");
    painter.drawPixmap((this->width()-pix.width())*0.5,30,pix.width(),pix.height(),pix);
}
