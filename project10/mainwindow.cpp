#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnsa,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(0);
    });
    connect(ui->btntb,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });
    connect(ui->btntw,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });

    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");

    connect(ui->btnsch,&QPushButton::clicked,[=](){
        ui->comboBox->setCurrentIndex(2);
    });
    ui->label->setPixmap(QPixmap(":/img/library.jpg"));
    QMovie*movie=new QMovie("://E:/u/video/华强买瓜（原版）.mp4");
    ui->label->setMovie(movie);
    movie->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}

