#include "mainscene.h"
#include "./ui_mainscene.h"
#include"mypushbutton.h"
#include<QSoundEffect>
MainScene::MainScene(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainScene)
{
    ui->setupUi(this);
    //配置主场景
    //设置固定大小
    setFixedSize(320,588);
    //设置图标
    setWindowIcon(QIcon(":/res/Coin0001.png"));
    //设置标题
    setWindowTitle("翻金币主场景");
    //退出按钮实现
    connect(ui->actionQuite,&QAction::triggered,[=](){
        this->close();
    });


    //开始按钮
    MyPushButton*startBtn=new MyPushButton(":/res/MenuSceneStartButton.png");
    startBtn->setParent(this);
    startBtn->move((this->width()-startBtn->width())*0.5,this->height()*0.7);
    //实例化选择关卡场景
    LevelChoiceScene*choicescene=new LevelChoiceScene;

    //监听接收信号
    connect(choicescene,&LevelChoiceScene::backsignal,[=](){
        this->setGeometry(choicescene->geometry());//设置返回时主场景的位置
        this->show();//重新显示主场景
    });
    //开始音效
    QSoundEffect *startSound = new QSoundEffect();
    startSound->setSource(QUrl::fromLocalFile(":/res/TapButtonSound.wav"));
    connect(startBtn,&MyPushButton::clicked,[=](){
        startSound->play();
        startBtn->jumpeffect(true);
        startBtn->jumpeffect(false);
        //进入关卡选则,延迟进入
        QTimer::singleShot(300,this,[=](){
            //自身隐藏
            this->hide();
            //显示关卡选择
            choicescene->setGeometry(this->geometry());
            choicescene->show();
        });
    });
}
void MainScene::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    QPixmap pix(":/res/PlayLevelSceneBg.png");
    painter.drawPixmap(0,0,this->width(),this->height(),pix);
    //画背景图标
    pix.load(":/res/Title.png");
    pix=pix.scaled(pix.width()*0.5,pix.height()*0.5);
    painter.drawPixmap(10,30,pix);
}

MainScene::~MainScene()
{
    delete ui;
}

