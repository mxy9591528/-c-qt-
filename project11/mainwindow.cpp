#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->getval,&QPushButton::clicked,[=](){
        qDebug()<<ui->widget->getnum();
    });
    connect(ui->sethalf,&QPushButton::clicked,[=](){
        ui->widget->setnum(50);
        ui->widget_2->setnum(50);
    });
}

MainWindow::~MainWindow()
{
    delete ui;
}

